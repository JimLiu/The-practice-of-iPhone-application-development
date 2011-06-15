//
//  CalculatorAppDelegate.h
//  Calculator
//
//  Created by junmin liu on 11-6-15.
//  Copyright 2011年 Openlab. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CalculatorViewController;

@interface CalculatorAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet CalculatorViewController *viewController;

@end
