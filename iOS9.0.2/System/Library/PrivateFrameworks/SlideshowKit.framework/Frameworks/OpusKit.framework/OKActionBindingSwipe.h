/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UISwipeGestureRecognizer, NSString;

@interface OKActionBindingSwipe : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned _numberOfTouchesRequired;
	unsigned _direction;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;

}

@property (assign,nonatomic) unsigned numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) unsigned direction;                            //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(void)setNumberOfTouchesRequired:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:(unsigned)arg1 ;
-(unsigned)direction;
-(unsigned)numberOfTouchesRequired;
-(id)initWithSettings:(id)arg1 ;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned)arg2 ;
-(char)respondsToAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(char)ownsGestureRecognizer:(id)arg1 ;
-(void)handleSwipe:(id)arg1 ;
@end

