# Virtual Display Driver
Based on Microsoft Indirect Display Driver Sample. This creates a virtual display in Windows that acts and functions just like a real one. It's useful for streaming, virtual reality applications, recording, headless servers, etc. The benefit over a physical display is the ability to adjust resolutions and refresh rates beyond the physical displays capabilities. For example, this would enable the ability to stream a game from your home PC using game streaming software at 240hz at 8K while owning a 60hz 1080p monitor (unrealistic, but explains the abilities well). For servers without displays, this enabled remote desktop and screen streaming to other systems as if there were a display installed. 

Supports emulating resolutions from **640 x 480** to **7680 x 4320 (8K)**, and refresh rates including **60hz, 75hz, 90hz, 120hz, 144hz, 165hz, 240hz, 480hz,** and **500hz.**

This project uses the official Windows Indirect Display Driver combined with the IddCx class extension driver.

## Download Stable Version

> [!IMPORTANT]
> Please make sure you download the correct version for your operating system!

- [Windows 10 and 11 (no HDR)](https://github.com/itsmikethetech/Virtual-Display-Driver/releases/tag/23.10.20.2)
- [Windows 11 23H2+ (HDR)](https://github.com/itsmikethetech/Virtual-Display-Driver/releases/tag/23.12.2HDR)

## Download Beta
- [Universal Driver - 24.10.27 (Windows 10/11)](https://github.com/itsmikethetech/Virtual-Display-Driver/releases/tag/24.10.27) - Added more plus optimisations

## EDID Database
- [EDID Database by Bud3699](https://edid.mikethetech.com/)

## Installation

### Release Instructions

1. Download the latest installer from the above links or the [VDD website](https://vdd.mikethetech.com).
2. Run the installer and allow it through any Windows security prompts.
3. Accept the terms and follow the installation steps to customize your installation.
4. Once the installer finishes, the new virtual display(s) will activate.
5. You can use the included Companion App to configure and troubleshoot the Virtual Display.


 ## 🤔 Comparison with other IDDs

The table below shows a comparison with other popular Indirect Display Driver
projects.

| Project                        |   Iddcx version   | Signed | SDR | HDR  |                               H-Cursor                               | Tweakable | ARM64 Support | Custom EDID | Floating Point Refresh Rates |
| :----------------------------- | :---------------: | :----: | :--: | :------------------------------------------------------------------: | :-------: | :-------: | :-------: | :-------: | :-------: |
| [Virtual-Display-Driver (HDR)] |   1.10 (latest)   |   ✅   |     ✅ (8/10bit)    | ✅ (8/10/12bit)  |                                  ✅                                 |    ✅    |     ✅¹    |    ✅    |    ✅    |
| [usbmmidd_v2]                  |                   |   ✅   |     ✅ (8bit)    |   |                                                                   |           |           |           |           |           |
| [virtual-display-rs]           |         1.5       |      |     ✅ (8bit)    |   | [#81](https://github.com/MolotovCherry/virtual-display-rs/issues/81) |    ✅    |           |           |           |           |
| parsec-vdd                     |         1.5       |   ✅   |     ✅ (8bit)    |   |                                  ✅                                 |    🆗     |           |           |           |           |
| [IddSampleDriver]              |         1.2       |      |     ✅ (8bit)    |   |                                                                   |           |           |           |           |           |
| [RustDeskIddDriver]            |         1.2       |      |     ✅ (8bit)    |   |                                                                   |           |           |           |           |           |

¹ ARM64 Support in Windows 11 24H2 or later may require test signing be enabled.

## HDR Support Now Available for Windows 11 22H2+ 

### Installation Video

[![thumbnail2023](https://github.com/itsmikethetech/Virtual-Display-Driver/assets/25166211/1a64c390-5d8a-420f-8bb9-4642349fc132)](https://youtu.be/nNWpbRUPkn4 "How to install a virtual display")

## More Videos and Resources
- Bud3699: How to configure the VDD using the new Companion App
- [MikeTheTech: How to install a virtual display](https://youtu.be/byfBWDnToYk "How to install a virtual display")

### Screenshots:
<img src="https://github.com/itsmikethetech/Virtual-Display-Driver/assets/25166211/02af86f2-b896-4265-9174-b17c9a1aeab7" width="500">
<img src="https://github.com/itsmikethetech/Virtual-Display-Driver/assets/25166211/5cb8ce08-890f-4bc1-a1a6-34f22e103699" width="500">

<img src="https://github.com/itsmikethetech/Virtual-Display-Driver/assets/25166211/0f1dfed6-c9ac-4cb6-92cf-7d9ab2ac0c66">

## 🤝 Sponsors

<table>
  <tr>
    <td><img src="https://github.com/user-attachments/assets/ca93d971-67dc-41dd-b945-ab4f372ea72a" /></td>
    <td>Free code signing on Windows provided by <a href="https://signpath.io">SignPath.io</a>, certificate by <a href="https://signpath.org">SignPath Foundation</a></td>
  </tr>
</table>

## Acknowledgements

- Shoutout to **[MikeTheTech](https://github.com/itsmikethetech)** Project Boss man, owner and programmer!
- Shoutout to **[Bud](https://github.com/bud3699)** and **[zjoasan](https://github.com/zjoasan)** for jumping on the team and helping with not just support, but lots of great new features!
- Shoutout to **[Roshkins](https://github.com/roshkins/IddSampleDriver)** for the original repo.
- Shoutout to **[Baloukj](https://github.com/baloukj/IddSampleDriver)** for the 8-bit / 10-bit support. (Also, first to push the new Microsoft Driver public!)
- Shoutout to **[Anakngtokwa](https://github.com/Anakngtokwa)** for assisting with finding driver sources.
- **[Microsoft](https://github.com/microsoft/Windows-driver-samples/tree/master/video/IndirectDisplay)** Indirect Display Driver/Sample (Driver code)
- Thanks to **[AKATrevorJay](https://github.com/akatrevorjay/edid-generator)** for the hi-res EDID.
- Shoutout to **[LexTrack](https://github.com/lextrack/)** for the MiniScreenRecorder script. 

## Star History

[![Star History Chart](https://api.star-history.com/svg?repos=VirtualDisplay/Virtual-Display-Driver&type=Date)](https://star-history.com/#VirtualDisplay/Virtual-Display-Driver&Date)

## Disclaimer:

This software is provided "AS IS" with NO IMPLICIT OR EXPLICIT warranty. It's worth noting that while this software functioned without issues on my system, there is no guarantee that it will not impact your computer. It operates in User Mode, which reduces the likelihood of causing system instability, such as the Blue Screen of Death. However, exercise caution when using this software.
