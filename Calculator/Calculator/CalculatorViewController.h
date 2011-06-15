//
//  CalculatorViewController.h
//  Calculator
//
//  Created by junmin liu on 11-6-15.
//  Copyright 2011年 Openlab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorBrain.h"

@interface CalculatorViewController : UIViewController {
    IBOutlet UILabel *display; 
    CalculatorBrain *brain;
    BOOL userIsInTheMiddleOfTypingANumber;
}

- (IBAction)digitPressed:(UIButton *)sender; 

- (IBAction)operationPressed:(UIButton *)sender;

@end
