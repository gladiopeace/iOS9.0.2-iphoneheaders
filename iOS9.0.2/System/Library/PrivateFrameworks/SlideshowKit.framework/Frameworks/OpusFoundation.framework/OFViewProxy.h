/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, OFUIViewController;

@interface OFViewProxy : UIView {

	NSMutableArray* _layoutSteps;
	SCD_Struct_OF7* _layoutInfo;
	OFUIViewController* _viewControllerProxy;
	char _magicLayoutEnabled;

}

@property (assign,nonatomic) OFUIViewController * viewControllerProxy;                         //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
@property (assign,getter=isMagicLayoutEnabled,nonatomic) char magicLayoutEnabled;              //@synthesize magicLayoutEnabled=_magicLayoutEnabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)commonInit;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(void)runMagicLayout;
-(void)addLayoutStep:(id)arg1 ;
-(char)isMagicLayoutEnabled;
-(void)addLayoutSteps:(id)arg1 ;
-(OFUIViewController *)viewControllerProxy;
-(void)setMagicLayoutEnabled:(char)arg1 ;
@end

