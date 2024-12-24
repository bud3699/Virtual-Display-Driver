# Virtual Display Driver
This creates a virtual display in Windows that acts and functions just like a real one. It's useful for streaming, virtual reality applications, recording, headless servers, etc. The benefit over a physical display is the ability to adjust resolutions and refresh rates beyond the physical displays capabilities. For example, this would enable the ability to stream a game from your home PC using game streaming software at 240hz at 8K while owning a 60hz 1080p monitor (unrealistic, but explains the abilities well). For servers without displays, this enabled remote desktop and screen streaming to other systems as if there were a display installed. 

Supports emulating resolutions from **640 x 480** to **7680 x 4320 (8K)**, and refresh rates including **60hz, 75hz, 90hz, 120hz, 144hz, 165hz, 240hz, 480hz,** and **500hz.**

This project uses the official Windows Indirect Display Driver combined with the IddCx class extension driver.

## Download Stable Version

- [Universal Driver (Windows 10/11)]() - New installer and officially signed driver.

## EDID Database
- [EDID Database by Bud3699](https://edid.mikethetech.com/)

  You can use this database to load custom edid's into the driver! Or just general edid usage :) 

## Installation

- Step 1: Download the Installer
   - You can download the insaller directly from the [Releases](https://github.com/VirtualDisplay/Virtual-Display-Driver/releases) page.

- Step 2: Run the Installer
   - Download and run the installer.
   - Follow the on-screen instructions to complete the installation.

- Step 3: Verify the Installation
   - Check if the Virtual Display Driver is correctly installed by running the following:
   - **Device Manager:** Check "Device Manager" under "Display Adapters."
   - **Settings:** Check display settings under system settings and see if the virtual displays show.

Manual installation can be found in the wiki

## 🤔 Comparison with other IDDs

The table below shows a comparison with other popular Indirect Display Driver
projects.

| Project                        |   Iddcx version   | Signed | SDR | HDR  |                               H-Cursor                               | Tweakable | ARM64 Support | Custom EDID | Floating Point Refresh Rates |
| :----------------------------- | :---------------: | :----: | :--: | :------------------------------------------------------------------: | :-------: | :-------: | :-------: | :-------: | :-------: |
| [Virtual-Display-Driver (HDR)] |   1.10 (latest)   |   ✅   |     ✅ (8/10bit)    | ✅ (10/12bit)  |                                  ✅                                 |    ✅    |     ✅¹    |    ✅    |    ✅    |
| [usbmmidd_v2]                  |                   |   ✅   |     ✅ (8bit)    |   |                                                                   |           |           |           |           |           |
| [virtual-display-rs]           |         1.5       |      |     ✅ (8bit)    |   | [#81](https://github.com/MolotovCherry/virtual-display-rs/issues/81) |    ✅    |           |           |           |           |
| parsec-vdd                     |         1.5       |   ✅   |     ✅ (8bit)    |   |                                  ✅                                 |    🆗     |           |           |           |           |
| [IddSampleDriver]              |         1.2       |      |     ✅ (8bit)    |   |                                                                   |           |           |           |           |           |
| [RustDeskIddDriver]            |         1.2       |      |     ✅ (8bit)    |   |                                                                   |           |           |           |           |           |

¹ ARM64 Support in Windows 11 24H2 or later may require test signing be enabled.

## HDR Support Now Available for Windows 11 23H2+ 

### Installation Video

[![thumbnail2023](https://github.com/itsmikethetech/Virtual-Display-Driver/assets/25166211/1a64c390-5d8a-420f-8bb9-4642349fc132)](https://youtu.be/nNWpbRUPkn4 "How to install a virtual display")

## More Videos and Resources
- 24.12.24 (Stable): MikeTheTech: How to install the new Virtual Display Driver
- 24.12.24 (Stable): Bud3699: How to configure the VDD using the new Companion App
- 24.10.27 (Beta): [MikeTheTech: How to install a virtual display](https://youtu.be/byfBWDnToYk "How to install a virtual display")

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

## Developers

- Shoutout to **[MikeTheTech](https://github.com/itsmikethetech)** Project Boss man, owner and programmer!
- Shoutout to **[Bud](https://github.com/bud3699)** For a ton of features, companion & installer work
- Shoutout to **[zjoasan](https://github.com/zjoasan)** For scripts and part of installer

## Acknowledgements

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
