# Virtual Display Driver
This project creates a _virtual display_ in Windows that functions just like a physical monitor. It is particularly useful for applications such as **streaming, virtual reality, screen recording,** and **headless servers—systems** that operate without a physical display attached. 

Unlike physical monitors, this virtual display can support resolutions and refresh rates that go beyond standard hardware limitations, offering greater flexibility for advanced setups. Furthermore, custom EDIDs can be used to simulate/emulate existing hardware displays.

## Download Latest Version

- [Universal Driver (Windows 10/11)](https://github.com/VirtualDisplay/Virtual-Display-Driver/releases) - Check release page for release notes.

## EDID Database
- [EDID Database by Bud3699](https://edid.mikethetech.com/)

  You can use this database to load custom edid's into the driver! Or just general edid usage :) 

## Installation

- Step 1: Download the Installer
   - You can download the insaller directly from the [Releases](https://github.com/VirtualDisplay/Virtual-Display-Driver/releases) page.

- Step 2: Run the Installer
   - Download and run the installer.
   - Follow the on-screen instructions to complete the installation.

- Step 3: Verify the Installation (Optional)
   - Check if the Virtual Display Driver is correctly installed by running the following:
   - **Device Manager:** Check "Device Manager" under "Display Adapters."
   - **Settings:** Check display settings under system settings and see if the virtual displays show.

Manual installation can be found in the wiki

## 🤔 Comparison with other IDDs

The table below shows a comparison with other popular Indirect Display Driver
projects.

![Untitled-6](https://github.com/user-attachments/assets/98ccb915-5a94-42f9-818b-213ceef4c3ac)

¹ ARM64 Support in Windows 11 24H2 or later may require test signing be enabled.

## HDR Support Now Available for Windows 11 23H2+ 

### Installation Video

[![thumbnail2023](https://github.com/itsmikethetech/Virtual-Display-Driver/assets/25166211/1a64c390-5d8a-420f-8bb9-4642349fc132)](https://youtu.be/nNWpbRUPkn4 "How to install a virtual display")

## More Videos and Resources
- 24.12.24 (Stable): MikeTheTech: How to install the new Virtual Display Driver
- 24.12.24 (Stable): Bud3699: How to configure the VDD using the new Companion App
- 24.10.27 (Beta): [MikeTheTech: How to install a virtual display](https://youtu.be/byfBWDnToYk "How to install a virtual display")

![Powerpoint](https://github.com/user-attachments/assets/9ac05776-36e1-4ba1-ac52-3f189dbd7730)

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

This software is provided "AS IS" with NO IMPLICIT OR EXPLICIT warranty. It's worth noting that while this software functioned without issues on our systems, there is no guarantee that it will not impact your computer. It operates in User Mode(Session0), which reduces the likelihood of causing system instability, such as the Blue Screen of Death. However, exercise caution when using this software.
