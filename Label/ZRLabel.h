//
//  ZRLabel.h
//  Label
//
//  Created by 赵瑞生 on 16/8/29.
//  Copyright © 2016年 ZRS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZRLabel : UILabel

- (void)labelText:(NSString *)text
      lineSpacing:(CGFloat)l_spacing;

- (void)labelText:(NSString *)text
   sectionSpacing:(CGFloat)s_spacing
      lineSpacing:(CGFloat)l_spacing;

+ (NSAttributedString *)attributedTextArray:(NSArray *)texts
                                 textColors:(NSArray *)colors
                                  textFonts:(NSArray *)fonts;

+ (NSAttributedString *)attributedTextArray:(NSArray *)texts
                                 textColors:(NSArray *)colors
                                  textFonts:(NSArray *)fonts
                                lineSpacing:(CGFloat)l_spacing;

+ (CGSize)sizeLabelWidth:(CGFloat)width
          attributedText:(NSAttributedString *)attributed;

+ (CGSize)sizeLabelWidth:(CGFloat)width
                    text:(NSString *)text
                    font:(UIFont *)font;

+ (CGSize)sizeLabelWidth:(CGFloat)width
                    text:(NSString *)text
                    font:(UIFont *)font
             lineSpacing:(CGFloat)l_spacing;



@end
