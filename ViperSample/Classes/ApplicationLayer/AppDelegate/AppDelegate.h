//
//  AppDelegate.h
//  ViperSample
//
//  Created by Tayphoon on 27.07.16.
//  Copyright © 2016 Tayphoon. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ApplicationConfigurator;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) id <ApplicationConfigurator> applicationConfigurator;

@property (strong, nonatomic) UIWindow *window;

@end

