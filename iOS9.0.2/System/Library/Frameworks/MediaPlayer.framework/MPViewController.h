/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPControllerProtocol.h>
#import <libobjc.A.dylib/MPAVControllerNode.h>

@class MPAVItem, MPAVController, UIView, MPTransitionController, NSString;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode> {

	id _delegate;
	int _interfaceOrientation;
	MPAVItem* _item;
	MPAVController* _player;
	MPViewController* _pushedViewController;
	MPTransitionController* _pushedTransitionController;
	/*^block*/id _popViewControllerHandler;
	unsigned _appearing : 1;
	unsigned _observesApplicationSuspendResumeEventsOnly : 1;
	unsigned _showOverlayWhileAppearingDisabled : 1;
	char _registeredForPlayerNotifications;
	int _playerLockedCount;
	char _idleTimerDisabled;

}

@property (assign,nonatomic) char registeredForPlayerNotifications;                                                     //@synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications - In the implementation block
@property (nonatomic,copy) id popViewControllerHandler;                                                                 //@synthesize popViewControllerHandler=_popViewControllerHandler - In the implementation block
@property (assign,nonatomic) char observesApplicationSuspendResumeEventsOnly; 
@property (assign,setter=setIdleTimerDisabled:,getter=idleTimerDisabled,nonatomic) char idleTimerDisabled;              //@synthesize idleTimerDisabled=_idleTimerDisabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                                           //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) int orientation;                                                                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,retain) MPAVController * player;                                                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) UIView * view; 
-(void)clearWeakReferencesToObject:(id)arg1 ;
-(void)endIgnoringChangeTypes:(unsigned)arg1 ;
-(void)beginIgnoringChangeTypes:(unsigned)arg1 ;
-(void)willChangeToInterfaceOrientation:(int)arg1 ;
-(void)setOrientation:(int)arg1 animate:(char)arg2 ;
-(void)didChangeToInterfaceOrientation:(int)arg1 ;
-(void)noteIgnoredChangeTypes:(unsigned)arg1 ;
-(id)popViewControllerHandler;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(void)pushViewController:(id)arg1 withTransition:(id)arg2 ;
-(void)setObservesApplicationSuspendResumeEventsOnly:(char)arg1 ;
-(void)setPopViewControllerHandler:(id)arg1 ;
-(void)stopTicking;
-(void)startTicking;
-(void)applicationDidSuspendEventsOnly;
-(void)applicationDidResumeEventsOnly;
-(void)applicationResumed;
-(void)_pushTransitionEnded:(id)arg1 ;
-(void)_popTransitionEnded:(id)arg1 ;
-(void)lockPlayer;
-(void)unlockPlayer;
-(void)setRegisteredForPlayerNotifications:(char)arg1 ;
-(void)incrementAggregateStatisticsDisplayCount;
-(char)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2 ;
-(id)copyOverlayViewForTransitionToItem:(id)arg1 ;
-(void)beginTransitionOverlayHidding;
-(void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1 ;
-(int)displayableInterfaceOrientationForInterfaceOrientation:(int)arg1 ;
-(char)observesApplicationSuspendResumeEventsOnly;
-(char)registeredForPlayerNotifications;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)setAppearing:(char)arg1 ;
-(char)isAppearing;
-(MPAVController *)player;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)popViewControllerAnimated:(char)arg1 ;
-(MPAVItem *)item;
-(void)setIdleTimerDisabled:(char)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setView:(UIView *)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)_canReloadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(void)setItem:(MPAVItem *)arg1 ;
-(char)idleTimerDisabled;
@end

