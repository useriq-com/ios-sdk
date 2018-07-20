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
 Deactivate the SDK
 */
- (void) deactivateSDK;



@end
