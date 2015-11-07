/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/_UISearchControllerPresenting.h>

@class UIView, _UISearchPresentationAssistant, NSString;

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	UIView* _wrapperView;
	CGRect finalFrameForContainerView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) char shouldAccountForStatusBar; 
@property (nonatomic,readonly) float statusBarAdjustment; 
@property (nonatomic,readonly) char searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) char resultsUnderlapsSearchBar; 
@property (nonatomic,readonly) char searchBarCanContainScopeBar; 
@property (nonatomic,readonly) char searchBarShouldClipToBounds; 
@property (nonatomic,readonly) float resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(char)shouldRemovePresentersView;
-(char)_shouldRespectDefinesPresentationContext;
-(id)presentedView;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(int)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(char)_shouldKeepCurrentFirstResponder;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UIView *)searchBarContainerView;
-(char)searchBarToBecomeTopAttached;
-(float)statusBarAdjustment;
-(void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(char)arg2 ;
-(void)setContentVisible:(char)arg1 ;
-(char)_shouldSubscribeToKeyboardNotifications;
-(float)resultsControllerContentOffset;
-(char)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(char)resultsUnderlapsSearchBar;
-(char)searchBarCanContainScopeBar;
-(char)searchBarShouldClipToBounds;
-(CGRect)finalFrameForContainerView;
@end

