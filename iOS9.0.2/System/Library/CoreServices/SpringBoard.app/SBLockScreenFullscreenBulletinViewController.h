/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBLockOverlayViewDelegate.h>

@class SBLockOverlayView, SBAwayBulletinListItem, NSString;

@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {

	SBLockOverlayView* _bulletinView;
	char _performedAction;
	SBAwayBulletinListItem* _bulletinItem;

}

@property (nonatomic,retain) SBAwayBulletinListItem * bulletinItem;              //@synthesize bulletinItem=_bulletinItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_lockScreenActionContext;
-(id)_dismissAction;
-(id)_snoozeAction;
-(void)lockButtonPressed:(id)arg1 ;
-(id)_titleForAlternateActionButton;
-(char)handleVolumeButtonPressed;
-(char)_hasSnoozeAction;
-(void)performSnoozeAction;
-(char)_hasAlternateAction;
-(void)performAlternateAction;
-(void)performDismissAction;
-(id)_customTitleForAlternateActionButton;
-(id)_calculatedTitleForAlternateActionButton;
-(id)_alternateAction;
-(SBAwayBulletinListItem *)bulletinItem;
-(void)setBulletinItem:(SBAwayBulletinListItem *)arg1 ;
-(void)dealloc;
-(void)volumeChanged:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)performUnlockAction;
-(void)updateContent;
-(void)performAction:(id)arg1 ;
-(id)slideToUnlockText;
-(char)isPlayingSound;
-(void)handleTapGestureFromView:(id)arg1 ;
-(char)handleVolumeUpButtonPressed;
-(char)handleVolumeDownButtonPressed;
@end

