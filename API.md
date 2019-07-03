# API Documention of UserIQ iOS SDK

## Overview
The public apis available in UserIQ iOS SDK are listed below. Any other APIs in UserIQ SDK is not recommended for public use.

-  [`Initialize with API key & User`](#1--initialize-sdk-with-api-key-and-user-info)
-  [`Initialize with API key`](#2--initialize-with-api-key)
-  [`setUser`](#3--set-or-reset-user)
-  [`disableFAB`](#4--disabling-fab-button)
-  [`showCtxHelp`](#5--showing-contextual-help)
-  [`showHelpCentre`](#6--showing-helpcenter)

## UserIQ APIs And How To Use It

### 1 : Initialize SDK with API key and User Info

```objc
-(void) initWithAPIKey : (NSString * _Nonnull)token
                userId : (NSString * _Nonnull)userId
                  name : (NSString * _Nonnull)name
                 email : (NSString * _Nonnull)email
             accountId : (NSString * _Nonnull)accId
           accountName : (NSString * _Nonnull)accName
            signupDate : (NSString * _Nullable)signupDate
         andParameters : (NSDictionary <NSString *, NSString*> * _Nullable)parameters;
```

The `Initialize with API key & User` API is the preferred API to initialize the sdk. The api key and all the user information should be passed in this method. This method will initiate the SDK and setup the SDK according to the preferred configurations from the UserIQ dashboard

This API can be called an anywhere in the app's code, but preferably should be called from `application: didFinishLaunchingWithOptions:` method of the `AppDelegate` class. This will be helpful so that the SDK will be active from the app launch. In case the user info is not available at this point, a common dummy user can be utilized to initalize the SDK and later update the user using the [`setUser`](#3--set-or-reset-user) API.

#### Usage
Objective C:
```objc
[[UserIQSDK sharedInstance] initWithAPIKey:@"<YOUR-API-KEY>"
                                    userId:@"EMP124"
                                      name:@"Alex"
                                     email:@"alex@useriq.com"
                                 accountId:@"1"
                               accountName:@"Acme Corp"
                                signupDate:@"2017-04-21"
                             andParameters:@{@"location":@"Atlanta"}];
```

Swift:
```swift
UserIQSDK.sharedInstance().initWithAPIKey(
        "<YOUR-API-KEY>",
        userId: "EMP124",
        name: "Alex",
        email: "alex@useriq.com",
        accountId: "1",
        accountName: "Acme Corp",
        signupDate: "2017-04-21",
        andParameters: ["location":"Atlanta"]
      )
```

#### Parameters
- `token` - api key available from useriq dashboard
- `userId` - userid of the user
- `name` - name of the user
- `email` - email of the user
- `accId` - account of the user
- `accName` - account name of the user
- `signupDate` - signup date of the user
- `parameters` - additional parameters as key-value pairs relevant to user

#### Setting up custom parameters 
Any additional information regarding the user can be passed via the parameter `parameters` as a `NSDictionary`. as show below
Objective C:
```objc
andParameters:@{@"location":@"Atlanta", @"Foo":@"Bar", @"Foo1":@"Bar1"}
```

Swift:
```swift
andParameters: ["location":"Atlanta", "Foo":"Bar", "Foo1": "Bar1"]
```


### 2 : Initialize with API key

```objc
- (void) initWithAPIKey : (NSString * _Nonnull)apiKey;
```
In case a dummy user is not preferred when the user information is not available and want to initiate the SDK only when the user information is received, the `api key` alone can be just setup in the `application: didFinishLaunchingWithOptions:` method of the `AppDelegate` class of the app. This will not start the SDK. It will wait until a user is set using the [`setUser`](#3--set-or-reset-user) API. 

So in case the  [`Initialize with API key & User`](#1--initialize-sdk-with-api-key-and-user-info) API is not used and wants to directly call the [`setUser`](#3--set-or-reset-user) API, make sure this API is called before it.


#### Usage
Objective C:
```objc
[[UserIQSDK sharedInstance] initWithAPIKey:@"<API_KEY>"];
```

Swift:
```swift
UserIQSDK.sharedInstance().initWithAPIKey("<API_KEY>")
```

#### Parameters
- `apiKey` - api key available from useriq dashboard

### 3 : Set or Reset User
```objc
- (void) setUserId : (NSString * _Nonnull)userId
              name : (NSString * _Nonnull)name
             email : (NSString * _Nonnull)email
         accountId : (NSString * _Nonnull)accId
       accountName : (NSString * _Nonnull)accName
        signupDate : (NSString * _Nullable)signupDate
     andParameters : (NSDictionary <NSString *, NSString*> * _Nullable)parameters;
```
The `setUser` API is used to set or reset the user. This API assists in assigning the user for the first time or updating the user info once assigned. All the information related to the user can be passed in this method.

Note:
> - Setting user for first time - If the [`Initialize SDK`](#1--initialize-sdk-with-api-key-and-user-info) API has not been used to setup the SDK and `setUser` method is being used to set the user info for first time, make sure that the `API key` has already been set using the [`initWithAPIKey:`](#2--set-api-key-only) method.
>
> - Resetting/Changing user details - To change the existing user info, this API can be called again with the new user info.

#### Usage

Objective C:
```objc
[[UserIQSDK sharedInstance] setUserId:@"EMP124"
                                 name:@"Alex"
                                email:@"alex@useriq.com"
                            accountId:@"1"
                          accountName:@"Acme Corp"
                           signupDate:@"2017-04-21"
                        andParameters:@{@"location":@"Atlanta"}];
```

Swift:
```swift
UserIQSDK.sharedInstance().setUserId( 
        "EMP124",
        name: "Alex",
        email: "alex@useriq.com",
        accountId: "1",
        accountName: "Acme Corp",
        signupDate: "2017-04-21",
        andParameters: ["location":"Atlanta"]
      )
```

#### Parameters
- `userId` - userid of the user
- `name` - name of the user
- `email` - email of the user
- `accId` - account of the user
- `accName` - account name of the user
- `signupDate` - of the user
- `parameters` - additional parameters as key-value pairs relevant to user

### 4 : Disabling FAB Button
```objc
- (void)disableFAB;
```
This API is used to `hide the FAB button`. The FAB button is a button that will appear on the bottom-right of the screen. It is enabled by default. It can be disabled from the UserIQ dashboard. This API can also be used to hide the FAB button.

#### Usage
Objective C:
```objc
[[UserIQSDK sharedInstance] disableFAB];
```

Swift:
```swift
UserIQSDK.sharedInstance().disableFAB()
```

Note:
>Calling this API will override all other configurations and will always hide the FAB button

### 5 : Showing Contextual Help
```objc
- (BOOL) showCtxHelp;
```
This API is used to explicity `present contextual help` related to a screen, if any contectual help is available for the screen. If a contextual help is available for that screen it is displayed, else it will not do anything.

This API can be called from the action of a button so the triggering can be controlled by the user.

Note:
>This API call returns a `boolean`. It returns `true` if it is able to find an available contextual help & launch. Else if the contextual help is not available, it returns `false`.

#### Usage
Objective C:
```objc
BOOL ctxHelpSuccess = [[UserIQSDK sharedInstance] showCtxHelp];
```

Swift:
```swift
let ctxHelpSuccess = UserIQSDK.sharedInstance().showCtxHelp()
```

### 6 : Showing Helpcenter
```objc
-(void)showHelpcentre;
```
This API is used to explicitly `present the help center`. 

This API can be called from the action of a button so the triggering can be controlled by the user.


#### Usage
Objective C:
```objc
[[UserIQSDK sharedInstance] showHelpCentre];
```

Swift:
```swift
UserIQSDK.sharedInstance().showHelpCentre()
```