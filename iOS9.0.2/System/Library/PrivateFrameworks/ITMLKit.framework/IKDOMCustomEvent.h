/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKDOMEvent.h>
#import <libobjc.A.dylib/IKJSDOMCustomEvent.h>

@class IKJSObject, NSString, IKDOMNode, NSDate;

@interface IKDOMCustomEvent : IKDOMEvent <IKJSDOMCustomEvent> {

	IKJSObject* _detail;

}

@property (nonatomic,retain) IKJSObject * detail;                             //@synthesize detail=_detail - In the implementation block
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IKDOMNode * target; 
@property (nonatomic,retain,readonly) IKDOMNode * currentTarget; 
@property (nonatomic,readonly) int eventPhase; 
@property (nonatomic,readonly) char bubbles; 
@property (nonatomic,readonly) char cancelable; 
@property (nonatomic,readonly) NSDate * timeStamp; 
@property (nonatomic,readonly) char defaultPrevented; 
-(IKJSObject *)detail;
-(void)setDetail:(IKJSObject *)arg1 ;
-(id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(char)arg4 isCancelable:(char)arg5 detail:(id)arg6 ;
-(id)initWithType:(id)arg1 eventInit:(id)arg2 ;
@end

