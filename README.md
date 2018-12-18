# UserIQ iOS SDK Integration Document

[![CocoaPods Compatible](https://img.shields.io/cocoapods/v/UserIQ.svg)](https://img.shields.io/cocoapods/v/UserIQ.svg)
[![Carthage Compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)
[![Platform](https://img.shields.io/cocoapods/p/UserIQ.svg?style=flat)](http://cocoapods.org/pods/UserIQ)

This guide will provide you with step by step details on how to integrate the SDK in just a few minutes. The following steps outline the integration process in details.

## Steps to integrate the sdk to your Xcode - iOS project

- [Step 1 : Download the UserIQ framework](#step-1--download-the-useriq-framework)
- [Step 2 : Attach UserIQ framework to your iOS project](#step-2--attach-useriq-framework-to-your-ios-project)
- [Step 3 : Initiate the UserIQ framework](#step-3--initiate-the-useriq-framework)

If you are using Cocoapods or Carthage, skip Step 1 & Step 2, go directly to [Step 3](#Step-3--Initiate-the-useriq-framework).

### Cocoapods

Add

```
  pod 'UserIQ', '~> 2.0'
```

to your Podfile.
In terminal, go to the folder of your project and enter `pod install`. Open <your-project-name.xcworkspace>

### Carthage

Add

```
  github "useriq-com/ios-sdk"
```

to your Cartfile. In terminal, go to the folder of your project and enter `carthage update`

### Step 1 : Download the UserIQ framework

Download the UserIQ sdk from [here](http://mobile.useriq.com)

Alternatively you can clone the UserIQ github repo

```
  git clone https://github.com/useriq-com/ios-sdk.git
```

The **_UserIQ.framework_** is to be copied into your project folder.

### Step 2 : Attach UserIQ framework to your iOS project

- Click on the **_project_** folder on the project navigator panel.
- Click on the application under **_Targets_** and go to the **_General_** tab as shown in image below
- Click on **_+_** button under **_Embedded Binaries_** as shown in image below.
- Click on **_Add Other_** from the dialog that appears.
- Select **_UserIQ.framework_** from the project folder.
- If prompted with a dialog that asks whether to copy the framework, click on **_Yes_**.

### Step 3 : Initiate the UserIQ framework

- In your AppDelegate file, import the UserIQ framework

  Swift :

  ```Swift
    import UserIQ
  ```

  Objective-C:

  ```Objective-C
    #import <UserIQ/UserIQ.h>
  ```

- In the `didFinishLaunchingWithOptions:` method initiate the UserIQ sdk using the initMethod as shown below

  Swift :

  ```Swift
    func application(_application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
      //Override point for customization after application launch.
      UserIQSDK.sharedInstance().initWithAPIKey(
        "<YOUR-API-KEY>",
        userId: "EMP124",
        name: "Alex",
        email: "alex@useriq.com",
        accountId: 1,
        accountName: "Acme Corp",
        signupDate: "2017-04-21",
        andParameters: ["location":"Atlanta"]
      )
    }
  ```

  Objective-C :

  ```Objective-C
    -(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
      // Override point for customization after application launch.
      [[UserIQSDK sharedInstance] initWithAPIKey:@"<YOUR-API-KEY>"
                                        userId:@"EMP124"
                                          name:@"Alex"
                                         email:@"alex@useriq.com"
                                     accountId:1
                                   accountName:@"Acme Corp"
                                    signupDate:@"2017-04-21"
                                 andParameters:@{@"location":@"Atlanta"}];
    }
  ```

  Note - The **_API-KEY_** can be obtained from the integration page of your app in the UserIQ dashboard.

### PUBLIC APIs

- Displaying contextual help manually. This method on being invoked returns `true` if the SDK was able to display the contextual help successfully, returns `false` if it fails.

  Swift :

  ```Swift
  let ctxHelpSuccess = UserIQSDK.sharedInstance().showCtxHelp()
  ```

  Objective-C :

  ```Objective-C
  BOOL ctxHelpSuccess = [[UserIQSDK sharedInstance] showCtxHelp];
  ```

- Displaying the helpcenter manually.

  Swift :

  ```Swift
  UserIQSDK.sharedInstance().showHelpCentre()
  ```

  Objective-C:

  ```Objective-C
  [[UserIQSDK sharedInstance] showHelpCentre];
  ```

- Disabling fab. When this API is called, it permanently disables the FAB button. All the other FAB settings are overridden.

  Swift :

  ```Swift
  UserIQSDK.sharedInstance().disableFAB()
  ```

  Objective-C :

  ```Objective-C
  [[UserIQSDK sharedInstance] disableFAB];
  ```

  #### InApp-Notification

  ![](Images/InAppModal.gif)

  #### NPS

  ![](Images/NPSHeader.gif)

  #### StarRating

  ![](Images/RatingFooter.gif)

  #### Walkthrough

  ![](Images/Walkthrough.gif)

  #### Contextual Help

  ![](Images/CtxHelp.gif)

  #### HelpCentre

  ![](Images/Helpcenter.gif)
