#pragma once

#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <wrl/client.h>

// Anonymous namespace for usings
namespace
{
    using namespace std;
    using namespace Microsoft::IndirectDisp;
    using namespace Microsoft::WRL;

    struct GPUInfo {
        wstring name;
        ComPtr<IDXGIAdapter> adapter;
        DXGI_ADAPTER_DESC desc;
    };

    bool CompareGPUs(const GPUInfo& a, const GPUInfo& b) {
        return a.desc.DedicatedVideoMemory > b.desc.DedicatedVideoMemory;
    }

    struct AdapterOption
    {
        bool hasTargetAdapter{};
        LUID adapterLuid{};

        void load(const wchar_t* path)
        {
            ifstream ifs{ path };

            if (!ifs.is_open())
            {
                return;
            }

            std::string line;
            getline(ifs, line);

            std::wstring target_name{ line.begin(), line.end() };

            ComPtr<IDXGIFactory1> factory{};
            if (!SUCCEEDED(CreateDXGIFactory1(IID_PPV_ARGS(&factory))))
            {
                return;
            }

            for (UINT i = 0;; i++)
            {
                ComPtr<IDXGIAdapter> adapter{};
                if (!SUCCEEDED(factory->EnumAdapters(i, &adapter)))
                {
                    break;
                }

                DXGI_ADAPTER_DESC desc;
                if (!SUCCEEDED(adapter->GetDesc(&desc)))
                {
                    break;
                }

                // We found our target
                if (_wcsicmp(target_name.c_str(), desc.Description) == 0)
                {
                    adapterLuid = desc.AdapterLuid;
                    hasTargetAdapter = true;
                }
            }
        }

        wstring selectBestGPU() {
            ComPtr<IDXGIFactory1> factory{};
            if (!SUCCEEDED(CreateDXGIFactory1(IID_PPV_ARGS(&factory)))) {
                return L"";
            }

            vector<GPUInfo> gpus;
            for (UINT i = 0;; i++) {
                ComPtr<IDXGIAdapter> adapter{};
                if (!SUCCEEDED(factory->EnumAdapters(i, &adapter))) {
                    break;
                }

                DXGI_ADAPTER_DESC desc;
                if (!SUCCEEDED(adapter->GetDesc(&desc))) {
                    continue;
                }

                GPUInfo info;
                info.name = desc.Description;
                info.adapter = adapter;
                info.desc = desc;
                gpus.push_back(info);
            }

            if (gpus.empty()) {
                return L"";
            }

            sort(gpus.begin(), gpus.end(), CompareGPUs);
			std::wstring target_name;
            target_name = gpus.front().name;
            adapterLuid = gpus.front().desc.AdapterLuid;
            hasTargetAdapter = true;

            return target_name;
        }

        void xmlprovide(wstring xtarg) {
            std::wstring target_name;
			target_name = xtarg;
            ComPtr<IDXGIFactory1> factory{};
            if (!SUCCEEDED(CreateDXGIFactory1(IID_PPV_ARGS(&factory)))) {
                return;
            }

            for (UINT i = 0;; i++) {
                ComPtr<IDXGIAdapter> adapter{};
                if (!SUCCEEDED(factory->EnumAdapters(i, &adapter))) {
                    break;
                }

                DXGI_ADAPTER_DESC desc;
                if (!SUCCEEDED(adapter->GetDesc(&desc))) {
                    continue;
                }

                if (_wcsicmp(target_name.c_str(), desc.Description) == 0) {
                    adapterLuid = desc.AdapterLuid;
                    hasTargetAdapter = true;
                    return;
                }
            }

            if (!hasTargetAdapter) {
                target_name = selectBestGPU();
            }

        }

        void apply(const IDDCX_ADAPTER& adapter)
        {
            if (hasTargetAdapter)
            {
                if (IDD_IS_FUNCTION_AVAILABLE(IddCxAdapterSetRenderAdapter))
                {
                    IDARG_IN_ADAPTERSETRENDERADAPTER arg{};
                    arg.PreferredRenderAdapter = adapterLuid;

                    IddCxAdapterSetRenderAdapter(adapter, &arg);
                }
            }
        }
    };
}