# ISPLowEnergyManager

## A pattern for Bluetooth Low Energy Applications - with Demos

> REF blog-post about this object at
> http://ironsheep-ios-fun.blogspot.com/2013/04/simplifying-pattern-for-application.html

## Demo is built to communicate with "TI Sensor Tag"

> REF wiki: SensorTag User Guide about this device at
> http://processors.wiki.ti.com/index.php/SensorTag_User_Guide

### Changelog

**— Update: 2020 Feb 15:**

- Update to latest Xcode 11.3.1 SDKs
- Validate and fix project compilation settings.
- BUGFIX Repair bad calls to base class methods (found during analyze)
- Fix deprecations 
- Fix compiler warnings (loss of precision)

**— Update: 2017 Nov 29:**

- Update to latest Xcode 9.1 SDKs
- Address compiler warnings.
- Validate and fix project compilation settings.
- Add missing (now needed?) 1024x1024 appIcon

-   **--LowEnergyManager--**:
-   Update to latest CoreBluetooth API
-   BUGFIX Force release of peripheral, if user has not, by time app terminates!

-   **--Demo App--**:
-   BUGFIX Repair Various readings due to sign conversion mistakes
-   BUGFIX Turned on Y and Z gyros (was only turning on X)
-   BUGFIX Adjust Accel. value scaling... appears that our device is using +/-8g device (NOT a +/- 2g device)
-   Fix various Storyboard / layout problems...
-   Add project background mode indicating need for BTLE accessory use

**— Update: 2017 Mar:**

-   LowEnergyManager: Update to latest 

-   Demo App: add App Icons for new devices

**— Update: 2014 Oct 05: 20:29L**

-   LowEnergyManager: Added Alternate form of device discovery with deferred operation scheduling

-   Demo App: converted Temp View Controller to use new "blocks" form of communication with SensorTag object

-   Demo App: added (try again) option to No Sensor Tag devices found dialog

-   Demo App: Hrmf... need to fix bug in Obj Temp Calcs...!!!

**— Update: 2014 Aug 23: 04:22L**

-   Added About Tab

-   iPad is now working

-   New App Icon

-   New tab icons

-   Spotted: interesting BUG in object temperature math (Oops!)

**— Update: 2014 Aug 22: 23:05L**

-   add License and Copyright

**— Update: 2014 Aug 22: 22:23L**

-   cleanup code organization (& internal markings)

-   PENDING: move demo to use of blocks for characteristics updates

-   PENDING: setup iPad U/I

**— Update: 2014 Aug 22: 21:22L**

-   Updated to Latest Library Code

-   iPhone working against TI Sensor Tag

-   PENDING: No U/I yet for iPad (it's next)

**— Update: 2014 Aug 22: 17:00L**

*NOTE: it’s been a while since I’ve been playing with this code. I’m
revisiting it now to ensure I’ve posted the latest working code. I’ll
update the following status as each piece is completed over the next
couple of days… (posted 22 Aug 2014)*

-   PENDING: Ipad i/f is not yet setup...

-   Current code compiles and runs but finds the first (likely wrong
    Bluetooth LE device) instead of the desired device. - This says this
    isn’t my latest version of this manager.

### Copyright

Code in this Repostory is Copyright 2014 ©, Iron Sheep Productions, LLC,
except for the two external components found herein which belong to
their respective owners:

1:MBProgressHUD:Version 0.4 - Created by Matej Bukovinski on 2.4.09.
[MBProgressHUD at github][]

2:CustomAlert:Created by Aaron Crabtree on 10/14/11 - Copyright (c) 2011
Tap Dezign, LLC. All rights reserved. [Via Blog Post][]

### License

Excluding the two external pieces just identified, the remaining code is
distributed under the [MIT license][]

  [MBProgressHUD at github]: http://github.com/jdg/MBProgressHUD
  [Via Blog Post]: http://code.tutsplus.com/tutorials/ios-sdk-uialertview-custom-graphics--mobile-8886
  [MIT license]: https://github.com/ironsheep/ISPLowEnergyManager/blob/master/LICENSE
