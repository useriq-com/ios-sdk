# UserIQ iOS SDK Changelog

All notable changes in iOS SDK are documented here. We adhere to
[Semantic Versioning](http://semver.org/spec/v2.0.0.html).

### [2.7.0] - 2020-06-29

#### Added 

- Launching InApp Modal from another InApp Modal

#### Fixed

- Improved Screen Identification for React-Native 
- iOS 13 fix for UIWindow  

---

### [2.6.3] - 2020-02-28

#### Added

- Additional Logging

---

### [2.6.2] - 2019-12-20

#### Fixed

- Full screen support for `Help Center` in iOS 13
- `Help Center` welcome text alignment set to left

---

### [2.6.1] - 2019-12-12

#### Fixed

- Optimised click tracking (Eliminates traversal)
- Ignored touch tracking for `UIScrollView` and `UITextField`

---

### [2.6.0] - 2019-12-04

#### Added

- Logout API.
- SDK initialised with anonymous user when initWithAPIKey is called without setUser
- Added provision for SDK kill switch.

#### Updated

- Store additional parameters for same user in case of multiple `setUser` calls

#### Removed

- deactivateSDK API
- isOffline API

---

### [2.5.2] - 2019-11-28

#### Updated

- Improved debug logging

---

### [2.5.1] - 2019-11-07

#### Updated

- Reduced in-app message delay from 3000 ms to 250 ms

---

### [2.5.0] - 2019-10-09

#### Updated

- Increased timeout for network calls
- Improved performance in live previews
- Minor bug fixes & performance improvements

---

### [2.4.2] - 2019-08-30

#### Added

- Animation support for inapp messages

#### Updated

- App logo capture in Xamarin apps

---

### [2.4.1] - 2019-08-08

#### Updated

- Exposed `APP_FOREGROUND` event to dashboard

---

### [2.4.0] - 2019-07-25

#### Added

- Comment box support in NPS & Star campaigns
- New campaign button action `OPEN_WEBVIEW`. Opens a url inside webview in the app.
- Load balancer support for SDK endpoint

#### Updated

- Improved retry connection mechanism

---

### [2.3.2] - 2019-07-18

#### Fixed

- Minor bug fixes for Xamarin support

---

### [2.3.1] - 2019-07-11

#### Fixed

- Back button fix in help center in iPhones with notch

---

### [2.3.0] - 2019-07-09

#### Added

- New campaign button action support: `Open Question` & `Start Walkthrough`

#### Updated

- Improved UI for helpcenter

---

### [2.2.0] - 2019-06-17

#### Added

- Automatic/Manual tooltip positioning support (2 positions)
- Automatic/Manual beacon and number tooltip positioning support (9 positions)
- Support for `x` and `y` offsets for tooltips
- Ability to make walkthorugh wait for the next step for a specific amount of time
- Keyboard support for simulators (on Dashboard)
- Copy/Paste support for simulators (on Dashboard)

#### Updated

- Improved screen identification (5x to 8x faster)

---

### [2.1.0] - 2019-05-30

#### Added

- Landscape Orientation support (on Dashboard)
- Performance tracking for screen change

#### Updated

- Improved screen identification (4x to 10x faster)
- Added event tracking for campaings (walkthrough & campaigns)

#### Fixed

- Fixed React Native screen identification
- Fixed React Native click tracking
- Other minor bug fixes

---

### [2.0.5] - 2019-05-11

#### Updated

- Reuse existing websocket when setUser is called

---

### [2.0.4] - 2019-04-18

#### Added

- Bitcode enabled framework

---

### [2.0.3] - 2019-04-16

#### Added

- New api for setting user. This can be used to log in and logout user. Keep a standard user info for logged out users for tracking purposes.

---

### [2.0.2] - 2019-04-11

#### Fixed

- Bug Fix : FAB button pushed to front even if new view is added in top layer

---

### [2.0.1] - 2019-03-27

#### Fixed

- Minor bug fixes

---

### [2.0.0] - 2018-12-18

#### Added

- NPS Surveys (3 types)
- Rating Surveys (3 types)
- Walkthroughs (Beacons, Numbered & Tooltips)
  - Both single step and multiple steps in the same screen.
  - Cross screen walkthroughs with step triggers
- Helpcenter
  - Supports rich text format
  - Ability to add images (auto cached on device)
  - Ability to export walkthrough’s into questions
- Contextual Help
  - Configurable guide on per screen basis
  - Allow manual triggers of FAQ's & Walkthroughs

---

### [1.0.3] - 2018-07-20

#### Added

- Host support

---

### [1.0.2] - 2018-07-20

#### Added

- Box shadow & Text shadow support
- Modal related events

---

### [1.0.1] - 2018-07-02

#### Fixed

- Bug Fix : Text color change for in-app modal heading and body

---

### [1.0.0] - 2018-06-29

#### Added

- Initial Release of UserIQ iOS SDK

---
