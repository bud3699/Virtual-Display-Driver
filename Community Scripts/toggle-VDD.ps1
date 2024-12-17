 # submitted by zjoasan
 # Self-elevate the script if required
 if (-Not ([Security.Principal.WindowsPrincipal] [Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole] 'Administrator')) {
    if ([int](Get-CimInstance -Class Win32_OperatingSystem | Select-Object -ExpandProperty BuildNumber) -ge 6000) {
        $CommandLine = "-File `"" + $MyInvocation.MyCommand.Path + "`" " + $MyInvocation.UnboundArguments
        Start-Process -FilePath PowerShell.exe -Verb Runas -ArgumentList $CommandLine
        Exit
    }
 }

$device = Get-PnpDevice -Class Display -ErrorAction SilentlyContinue | Where-Object { $_.FriendlyName -eq 'IddSampleDriver Device HDR' -or $_.FriendlyName -eq 'Virtual Display Driver' }


if ($device) {
    if ($device.Status -eq 'OK') {
        Write-Host "Disabling device"; $device | disable-pnpdevice -Confirm:$false
    } else {
        Write-Host "Enabling device"; $device | enable-pnpdevice -Confirm:$false
    }
} else {
    Write-Warning "Device not found"
}
