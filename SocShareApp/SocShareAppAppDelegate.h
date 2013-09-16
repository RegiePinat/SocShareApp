//
//  SocShareAppAppDelegate.h
//  SocShareApp
//
//  Created by Regie G. Pinat on 9/16/13.
//  Copyright (c) 2013 Regie G. Pinat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@class SocShareAppViewController;

@interface SocShareAppAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SocShareAppViewController *viewController;

@end
