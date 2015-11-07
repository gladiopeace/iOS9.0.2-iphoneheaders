/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKGroupsControllerDelegate.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDelegate.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDatasource.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSDictionary, PKGroupsController, UINavigationBar, PKPassGroupStackView, NSMutableArray, UIImageView, NSString;

@interface PKAddValueAddedServicePassViewController : SBUIRemoteAlertServiceViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, UIScrollViewDelegate> {

	NSDictionary* _userInfo;
	PKGroupsController* _groupsController;
	UINavigationBar* _navigationBar;
	PKPassGroupStackView* _cardStackView;
	NSMutableArray* _localPasses;
	NSMutableArray* _localPassDatas;
	int _presentationState;
	int _previousBarStyle;
	UIImageView* _statusBarGradient;
	char _haveStartedCardAnimation;
	char _viewAppeared;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_preventsAppearanceProxyCustomization;
+(char)_shouldForwardViewWillTransitionToSize;
+(char)_isSecureForRemoteViewService;
-(unsigned)indexOfGroup:(id)arg1 ;
-(unsigned)suppressedContent;
-(unsigned)indexOfSeparationGroup;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned)arg3 toIndex:(unsigned)arg4 ;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg1 ;
-(void)groupStackViewDidEndReordering:(id)arg1 ;
-(char)passesGrowWhenFlipped;
-(void)groupStackView:(id)arg1 didTransitionToState:(int)arg2 animated:(char)arg3 ;
-(void)handleHomeButtonPressed;
-(void)updateCancelButton;
-(void)updateAddButton;
-(id)styleTitleUsingPass:(id)arg1 count:(unsigned)arg2 ;
-(id)genericTitleWithCount:(unsigned)arg1 ;
-(void)cancelCard:(id)arg1 ;
-(void)updateNavTitle;
-(void)animateInCardIfNeeded;
-(void)_ingestValueAddedPasses:(id)arg1 ;
-(void)_ingestionDidFinishWithResult:(int)arg1 ;
-(void)loadGroups;
-(void)updateSettings;
-(void)addCard:(id)arg1 ;
-(void)tearDown;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(void)setUserInfo:(id)arg1 ;
-(char)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)_transitionDidStop:(id)arg1 finished:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)groupAtIndex:(unsigned)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)_dismiss;
-(char)_shouldRemoveViewFromHierarchyOnDisappear;
-(unsigned)numberOfGroups;
@end

