/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MapsChromeModeController, MNGuidanceCurrentRoadDisplayDelegate;
#import <Maps/Maps-Structs.h>
@class ChromeViewController, UIView, MNGuidanceCurrentRoadSign, InterruptibleAnimation, NSString;

@interface MNGuidanceCurrentRoadDisplay : NSObject {

	ChromeViewController* _viewController;
	id<MapsChromeModeController> _container;
	UIView* _superview;
	char _hidingSigns;
	char _showingRoadDescription;
	MNGuidanceCurrentRoadSign* _currentRoadSign;
	InterruptibleAnimation* _hidingAnimation;
	id<MNGuidanceCurrentRoadDisplayDelegate> _delegate;
	NSString* _lastRoadDescription;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (assign,nonatomic,__weak) id<MNGuidanceCurrentRoadDisplayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsDimmedSign; 
@property (nonatomic,readonly) UIEdgeInsets minimumEdgeInsets;                                      //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (nonatomic,retain) InterruptibleAnimation * hidingAnimation;                              //@synthesize hidingAnimation=_hidingAnimation - In the implementation block
@property (nonatomic,retain) NSString * lastRoadDescription;                                        //@synthesize lastRoadDescription=_lastRoadDescription - In the implementation block
-(void)setCurrentRoadDescriptionIsUnreliable:(char)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)removeFromContainingViewController;
-(id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3 ;
-(void)setHidingAnimation:(InterruptibleAnimation *)arg1 ;
-(UIEdgeInsets)minimumEdgeInsets;
-(InterruptibleAnimation *)hidingAnimation;
-(void)_setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setShowsDimmedSign:(char)arg1 animation:(id)arg2 ;
-(void)setCurrentRoadDescription:(id)arg1 ;
-(NSString *)lastRoadDescription;
-(char)showsDimmedSign;
-(void)setLastRoadDescription:(NSString *)arg1 ;
-(void)setShowsDimmedSign:(char)arg1 ;
-(void)setDelegate:(id<MNGuidanceCurrentRoadDisplayDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGuidanceCurrentRoadDisplayDelegate>)delegate;
-(void)setHidden:(char)arg1 animated:(char)arg2 ;
@end

