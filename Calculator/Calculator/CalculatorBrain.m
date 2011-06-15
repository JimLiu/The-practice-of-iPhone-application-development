//
//  CalculatorBrain.m
//  Calculator
//
//  Created by junmin liu on 11-6-15.
//  Copyright 2011年 Openlab. All rights reserved.
//

#import "CalculatorBrain.h"


@implementation CalculatorBrain

- (void)setOperand:(double)aDouble {
    operand = aDouble;
}

- (void)performWaitingOperation { 
    if ([@"+" isEqual:waitingOperation]) 
    { 
        operand = waitingOperand + operand; 
    } 
	else if ([@"*" isEqual:waitingOperation]) 
    { 
        operand = waitingOperand * operand; 
    } 
	else if ([@"-" isEqual:waitingOperation]) 
    { 
        operand = waitingOperand - operand; 
    } 
	else if ([@"/" isEqual:waitingOperation]) 
    {
        if (operand) { 
            operand = waitingOperand / operand;
        } 
    }
}

- (double)performOperation:(NSString *)operation {
    
    if ([operation isEqual:@"sqrt"]) {
        operand = sqrt(operand); 
    } 
    else if ([@"+/-" isEqual:operation]) {
        operand = - operand;
    }
    else
    {
        [self performWaitingOperation]; 
        waitingOperation = operation;
        waitingOperand = operand;
    }
    return operand;
    
}

@end
