/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorViewController.h>
#import <libobjc.A.dylib/OKNavigatorScrollViewControllerProxyExport.h>
#import <UIKit/UIScrollViewDelegate.h>

@class OKPageViewController, UIScrollView, NSTimer, NSMutableArray, NSMutableDictionary, NSString, OKTimerAnimation;

@interface OKNavigatorScrollViewControllerProxy : OKNavigatorViewController <OKNavigatorScrollViewControllerProxyExport, UIScrollViewDelegate> {

	OKPageViewController* _pageViewController;
	UIScrollView* _scrollView;
	double _velocityTimestamp;
	float _currentVelocity;
	float _currentTilt;
	float _currentRotationZ;
	NSTimer* _autopanningTimer;
	float _velocity2;
	NSMutableArray* _registeredObjects;
	NSMutableDictionary* _registeredActions;
	NSString* _viewDidScrollActionScript;
	CGPoint _lastOffset;
	OKTimerAnimation* _scrollingAnimation;
	float _velocity;
	float _tilt;
	float _rotationZ;

}

@property (assign,nonatomic) float velocity;                        //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) float tilt;                            //@synthesize tilt=_tilt - In the implementation block
@property (assign,nonatomic) float rotationZ;                       //@synthesize rotationZ=_rotationZ - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(CGRect)contentBounds;
-(void)dealloc;
-(void)setVelocity:(float)arg1 ;
-(CGPoint)contentOffset;
-(CGSize)contentSize;
-(float)velocity;
-(void)viewDidLoad;
-(char)prepareForDisplay;
-(float)tilt;
-(char)prepareForWarmup;
-(char)prepareForUnload;
-(CGSize)layoutFactor;
-(void)applySettings;
-(void)updateParallax;
-(CGRect)visiblePageRect;
-(void)cancelCouchPotatoPlayback;
-(void)navigateToItemAtKeyPath:(id)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updatePageViewController;
-(void)cleanupScrollEvents;
-(void)navigateToWidgetWithName:(id)arg1 animated:(char)arg2 duration:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)navigateToOffset:(CGPoint)arg1 animated:(char)arg2 duration:(float)arg3 timingFunctionName:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)triggerAction;
-(id)sectorKeysForRect:(CGRect)arg1 ;
-(id)keyForOffset:(CGPoint)arg1 ;
-(OKEventElement*)createElementWithObject:(id)arg1 atOffset:(CGPoint)arg2 withProbability:(unsigned)arg3 withLimit:(unsigned)arg4 ;
-(OKEventList*)createList;
-(void)insertElement:(OKEventElement*)arg1 inList:(OKEventList*)arg2 ;
-(void)deleteElement:(OKEventElement*)arg1 inList:(OKEventList*)arg2 ;
-(void)doMotionAction:(id)arg1 ;
-(void)doPanAction:(id)arg1 ;
-(void)setSettingContentSize:(CGSize)arg1 ;
-(void)doApplyMotion:(id)arg1 ;
-(void)setTilt:(float)arg1 ;
-(void)setRotationZ:(float)arg1 ;
-(float)rotationZ;
-(void)scrollViewDidScrollProxy;
-(void)registerObjectOnScrollingEvent:(id)arg1 ;
-(void)registerObject:(id)arg1 forActionAtOffset:(CGPoint)arg2 probability:(unsigned)arg3 andLimit:(unsigned)arg4 ;
-(void)removeRegisteredObject:(id)arg1 forActionAtOffset:(CGPoint)arg2 continuous:(char)arg3 ;
-(id)settingViewDidScrollActionScript;
-(void)setSettingViewDidScrollActionScript:(id)arg1 ;
-(void)doSwipeAction:(id)arg1 ;
@end

