/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMHighlightConfig : RWIProtocolJSONObject

@property (assign,nonatomic) char showInfo; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * contentColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * paddingColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * borderColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * marginColor; 
-(void)setBorderColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)borderColor;
-(void)setContentColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)contentColor;
-(void)setShowInfo:(char)arg1 ;
-(char)showInfo;
-(void)setPaddingColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)paddingColor;
-(void)setMarginColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)marginColor;
@end

