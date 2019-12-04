//
//  UserIQSDK.h
//  UserIQ
//
//  Created by Aravind G S on 26/05/17.
//  Copyright © 2017 UserIQ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface UserIQSDK : NSObject


/**
 Create a global instance

 @return global instace
 */
+ (UserIQSDK * _Nonnull) sharedInstance;

/**
 Only required for UserIQ developers. To be called before SDK initialization

 @param host The host to be connected to.
 */
- (void) setHost:(NSString * _Nonnull)host;

/**
 Method to set api key. Initiates the SDK with an anonymous user

 @param apiKey api key available from useriq dashboard. Will setup an anonymous user and initiate the SDK. The actual user info can be passed after the user logins using the  -setUserId: name: email: accountId: accountName: signupDate: andParameters: API
 */
- (void) initWithAPIKey:(NSString * _Nonnull)apiKey;


/**
 Method to initialize SDK with all user info. If user info is not available initially, empty values has to be passed. And later when the user info is available the setUser method can be called

 @param token api key available from useriq dashboard
 @param userId userid of the user
 @param name name of the user
 @param email email of the user
 @param accId account of the user
 @param accName account name of the user
 @param signupDate signup date of the user
 @param parameters additional parameters as key-value pairs relevant to user
 */
- (void) initWithAPIKey:(NSString * _Nonnull)token
                 userId:(NSString * _Nonnull)userId
                   name:(NSString * _Nonnull)name
                  email:(NSString * _Nonnull)email
              accountId:(NSString * _Nonnull)accId
            accountName:(NSString * _Nonnull)accName
             signupDate:(NSString * _Nullable)signupDate
          andParameters:(NSDictionary <NSString *, NSString*> * _Nullable)parameters  __attribute__((deprecated));

/**
 Method to set/reset user.
 
 If you are setting the user for the first time after the app launch using this method, it should be only called after api key has been already set using one of the `initWithAPIKey` methods.

 @param userId userid of the user
 @param name name of the user
 @param email email of the user
 @param accId account of the user
 @param accName account name of the user
 @param signupDate of the user
 @param parameters additional parameters as key-value pairs relevant to user
 */

- (void) setUserId:(NSString * _Nonnull)userId
              name:(NSString * _Nonnull)name
             email:(NSString * _Nonnull)email
         accountId:(NSString * _Nonnull)accId
       accountName:(NSString * _Nonnull)accName
        signupDate:(NSString * _Nullable)signupDate
     andParameters:(NSDictionary <NSString *, NSString*> * _Nullable)parameters;


/**
Method to be called when user logs out. The user is reset to anonymous user automatically here.
 */
- (void) logout;

/**
 Get the version of the UserIQ SDK

 @return version
 */
+ (NSString * _Nonnull) version;

/**
 Method to disable FAB button
 */
- (void)disableFAB;

/**
 Presents the contextual help for the current screen.

 @return YES if ctxHelp is presented. NO if no ctxHelp is available.
 */
- (BOOL) showCtxHelp;


/**
 Presents the help center
 */
- (void) showHelpCentre;

@end
