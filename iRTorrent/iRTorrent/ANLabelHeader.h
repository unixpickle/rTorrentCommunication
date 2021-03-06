//
//  ANLabelHeader.h
//  iRTorrent
//
//  Created by Alex Nichol on 10/29/12.
//  Copyright (c) 2012 Alex Nichol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface ANLabelHeader : UIView {
    UILabel * label;
}

@property (readonly) UILabel * label;

- (id)initWithWidth:(CGFloat)width text:(NSString *)text font:(UIFont *)font;

@end
