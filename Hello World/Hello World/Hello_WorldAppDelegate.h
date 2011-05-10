//
//  Hello_WorldAppDelegate.h
//  Hello World
//
//  Created by junmin liu on 11-5-10.
//  Copyright 2011年 Openlab. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Hello_WorldViewController;

@interface Hello_WorldAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Hello_WorldViewController *viewController;

@end
