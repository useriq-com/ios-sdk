# UserIQ iOS SDK Changelog

All notable changes in iOS SDK are documented here. We adhere to
[Semantic Versioning](http://semver.org/spec/v2.0.0.html).

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
