//
//  TNTAppDelegate.h
//  NitroKeyChain
//
//  Created by CocoaPods on 07/30/2014.
//  Copyright (c) 2014 Gustavo Barbosa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TNTKeychainItemWrapper.h"

@interface TNTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) TNTKeychainItemWrapper *sharedKeychain;

@end