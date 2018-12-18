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


- (void) initWithAPIKey:(NSString * _Nonnull)token
                 userId:(NSString * _Nonnull)userId
                   name:(NSString * _Nonnull)name
                  email:(NSString * _Nonnull)email
              accountId:(int)accId
            accountName:(NSString * _Nonnull)accName
             signupDate:(NSString * _Nullable)signupDate
          andParameters:(NSDictionary <NSString *, NSString*> * _Nullable)parameters;

/**
 Get the version of the UserIQ SDK

 @return version
 */
+ (NSString * _Nonnull) version;


/**
 Read from offline settings and disable all network calls
 */
- (void) offlineOnly;


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

/**
 Deactivate the SDK
 */
- (void) deactivateSDK;



@end
