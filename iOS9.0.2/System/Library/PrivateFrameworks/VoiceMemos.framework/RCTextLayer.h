/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, UIFont, UIColor;

@interface RCTextLayer : CALayer {

	CGSize _cachedSize;
	unsigned _cachedSizeHash;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	int _preferredAlignment;
	int _textAlignment;

}

@property (nonatomic,copy) NSString * text;                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                       //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                 //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) int preferredAlignment;              //@synthesize preferredAlignment=_preferredAlignment - In the implementation block
@property (assign,nonatomic) int textAlignment;                   //@synthesize textAlignment=_textAlignment - In the implementation block
-(CGSize)_displaySize;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(UIFont *)font;
-(UIColor *)textColor;
-(int)textAlignment;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setPreferredAlignment:(int)arg1 ;
-(int)preferredAlignment;
-(CGRect)textRectWithAlignment:(int)arg1 inLayoutBounds:(CGRect)arg2 ;
-(id)_attributes;
@end

