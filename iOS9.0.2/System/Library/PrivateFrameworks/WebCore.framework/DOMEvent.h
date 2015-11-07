/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMEvent : DOMObject

@property (copy,readonly) NSString * type; 
@property (readonly) id<DOMEventTarget> target; 
@property (readonly) id<DOMEventTarget> currentTarget; 
@property (readonly) unsigned short eventPhase; 
@property (readonly) char bubbles; 
@property (readonly) char cancelable; 
@property (readonly) unsigned long long timeStamp; 
@property (readonly) id<DOMEventTarget> srcElement; 
@property (assign) char returnValue; 
@property (assign) char cancelBubble; 
-(void)dealloc;
-(NSString *)type;
-(id<DOMEventTarget>)target;
-(void)setReturnValue:(char)arg1 ;
-(unsigned long long)timeStamp;
-(char)bubbles;
-(void)finalize;
-(id<DOMEventTarget>)currentTarget;
-(unsigned short)eventPhase;
-(char)cancelable;
-(char)defaultPrevented;
-(id<DOMEventTarget>)srcElement;
-(char)returnValue;
-(char)cancelBubble;
-(void)setCancelBubble:(char)arg1 ;
-(void)stopPropagation;
-(void)preventDefault;
-(void)initEvent:(id)arg1 canBubbleArg:(char)arg2 cancelableArg:(char)arg3 ;
-(void)initEvent:(id)arg1 :(char)arg2 :(char)arg3 ;
-(void)stopImmediatePropagation;
@end

