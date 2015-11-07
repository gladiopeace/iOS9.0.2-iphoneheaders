/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMNodeList;

@interface DOMHTMLProgressElement : DOMHTMLElement

@property (assign) double value; 
@property (assign) double max; 
@property (readonly) double position; 
@property (readonly) DOMNodeList * labels; 
-(void)setMax:(double)arg1 ;
-(double)max;
-(double)value;
-(void)setValue:(double)arg1 ;
-(double)position;
-(DOMNodeList *)labels;
@end

