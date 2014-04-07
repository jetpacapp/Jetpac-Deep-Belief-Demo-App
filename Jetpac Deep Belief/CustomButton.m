//
//  CustomButton.m
//  Deep Belief
//
//  Created by Dave Fearon on 4/4/14.
//  Copyright (c) 2014 Jetpac. All rights reserved.
//

#import "CustomButton.h"
#import <QuartzCore/QuartzCore.h>

@implementation CustomButton

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
    
    CGContextRef context = UIGraphicsGetCurrentContext();
    
    UIColor *color = [UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:0.0];
    
    CGContextSetFillColorWithColor(context, color.CGColor);
    
    CGContextFillRect(context, self.bounds);
}

//- (void)setColor:(UIColor *)color forState:(UIControlState)state
//{
//    UIView *colorView = [[UIView alloc] initWithFrame:self.frame];
//    colorView.backgroundColor = color;
//    
//    UIGraphicsBeginImageContext(colorView.bounds.size);
//    [colorView.layer renderInContext:UIGraphicsGetCurrentContext()];
//    
//    UIImage *colorImage = UIGraphicsGetImageFromCurrentImageContext();
//    UIGraphicsEndImageContext();
//    
//    [self setBackgroundImage:colorImage forState:state];
//}

@end
