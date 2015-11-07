/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OFUITrackingPinchGestureRecognizer, NSString;

@interface OKActionBindingFocusPinch : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned _mode;
	OFUITrackingPinchGestureRecognizer* _pinchGestureRecognizer;
	unsigned _presentationMode;

}

@property (assign,nonatomic) unsigned mode;                         //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)handlePinch:(id)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)initWithSettings:(id)arg1 ;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned)arg2 ;
-(char)respondsToAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(char)ownsGestureRecognizer:(id)arg1 ;
-(void)_setFocusSize:(CGSize)arg1 angle:(float)arg2 toWidgetView:(id)arg3 ;
@end

