/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIView, SUSegmentedControl, NSArray;

@interface MSPurchasesViewController : SUViewController {

	int _activeViewControllerIndex;
	UIView* _containerView;
	SUSegmentedControl* _segmentedControl;
	NSArray* _viewControllers;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(id)_newSegmentedControlWithPageSectionGroup:(id)arg1 ;
-(void)_tabConfigurationChangedNotification:(id)arg1 ;
-(void)_reloadSegmentedControlPlacement;
-(void)_reloadViewControllersWithSection:(id)arg1 ;
-(void)_showActiveViewController;
-(void)_setActiveViewControllerIndex:(int)arg1 ;
-(id)_newViewControllerForPageSection:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(void)_segmentedControlAction:(id)arg1 ;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg1 ;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(void)invalidateForMemoryPurge;
-(id)_activeViewController;
@end

