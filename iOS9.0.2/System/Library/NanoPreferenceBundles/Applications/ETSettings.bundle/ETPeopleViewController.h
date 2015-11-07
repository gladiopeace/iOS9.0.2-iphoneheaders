/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ETSettings/ETSettings-Structs.h>
#import <UIKit/UIViewController.h>

@class UIView, NSMutableArray, ETPersonView, CALayer, NSArray, NSTimer, CAMediaTimingFunction, ETFriendGroup;

@interface ETPeopleViewController : UIViewController {

	unsigned _selectedSlotIndex;
	unsigned _lastSelectedSlotIndex;
	UIView* _containerView;
	UIView* _dialView;
	NSMutableArray* _dialPersonViews;
	ETPersonView* _centerPersonView;
	CALayer* _selectionArrowLayer;
	UIView* _selectionOuterContainerView;
	UIView* _selectionInnerContainerView;
	CALayer* _selectionMaskLayer;
	CALayer* _selectionIndicatorMaskLayer;
	NSArray* _positionColorsWithEmptySlots;
	char _shouldStartPhotoLoadTimer;
	NSTimer* _photoLoadTimer;
	CAMediaTimingFunction* _colorTransitionTimingQuickOut;
	CAMediaTimingFunction* _colorTransitionTimingQuickIn;
	NSMutableArray* _deferredChangeLogs;
	ETFriendGroup* _friendGroup;

}

@property (nonatomic,retain) ETFriendGroup * friendGroup;              //@synthesize friendGroup=_friendGroup - In the implementation block
+(SCD_Struct_ET0)_specValues;
+(id)colorForPosition:(unsigned)arg1 ;
+(id)positionColors;
-(void)_selectSlotAtIndex:(unsigned)arg1 includeSelectionIndicator:(char)arg2 animated:(char)arg3 ;
-(void)peripheryPersonViewTapped:(id)arg1 ;
-(void)personDwellTimerFired;
-(void)reloadPeople;
-(void)selectPerson:(id)arg1 ;
-(float)_dialViewHeight;
-(void)_refreshPersonAtIndex:(unsigned)arg1 ;
-(void)_friendListChanged:(id)arg1 ;
-(id)_dialView;
-(unsigned)_selectedSlotIndex;
-(id)_centerPersonView;
-(ETFriendGroup *)friendGroup;
-(void)addPersonAtSelectedSlot:(id)arg1 ;
-(void)_groupTitleChangedNotification:(id)arg1 ;
-(CGPoint)_positionOnDialAtIndex:(unsigned)arg1 inRingWithRadius:(float)arg2 ;
-(void)_setupDialViewsUsingSupplyBlock:(/*^block*/id)arg1 inRingWithRadius:(float)arg2 ;
-(void)centerPersonViewTapped:(id)arg1 ;
-(void)_updateViewsWithChangeLog:(id)arg1 ;
-(void)_startPhotoLoadTimer;
-(void)_stopPhotoLoadTimer;
-(void)_photoLoadTimerFired;
-(void)_groupTitleChanged;
-(void)_updateSelectionIndicatorAnimated:(char)arg1 ;
-(void)_updateTitleForSelectedSlot;
-(id)_dialPersonViews;
-(void)_updateDialPersonViews;
-(void)_setupSelectionContent;
-(void)_updatePeopleView;
-(void)resetPositionColorsWithEmptySlots;
-(double)_selectionIndicatorBaseOffset;
-(id)positionColorsWithEmptySlots;
-(double)_lastSelectionIndicatorOffset;
-(id)_personViewAtPoint:(CGPoint)arg1 ;
-(id)personViewBelowGesture:(id)arg1 ;
-(id)createEmptyPersonViewWithFrameForIndex:(unsigned)arg1 ;
-(void)setPersonView:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)personViewBelowView:(id)arg1 ;
-(CGPoint)peripheryViewCenterAtIndex:(unsigned)arg1 inView:(id)arg2 ;
-(CGPoint)personViewCenterForPosition:(unsigned)arg1 inView:(id)arg2 ;
-(id)personViewAtPosition:(unsigned)arg1 ;
-(void)setFriendGroup:(ETFriendGroup *)arg1 ;
-(id)selectedPerson;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(char)canBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)setEditing:(char)arg1 ;
-(id)_containerView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

