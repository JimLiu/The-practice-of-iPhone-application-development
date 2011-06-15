//
//  CalculatorBrain.h
//  Calculator
//
//  Created by junmin liu on 11-6-15.
//  Copyright 2011年 Openlab. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CalculatorBrain : NSObject {
    double operand;
    NSString *waitingOperation; 
    double waitingOperand;
}

- (void)setOperand:(double)aDouble;

- (double)performOperation:(NSString *)operation;

@end
