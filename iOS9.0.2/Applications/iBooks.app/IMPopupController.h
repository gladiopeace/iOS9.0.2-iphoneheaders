/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@class UIViewController, UIView, UIButton;

@interface IMPopupController : NSObject {

	id _delegate;
	int _transitionStyle;
	UIViewController* _parent;
	UIView* _dimmedView;
	UIViewController* _popup;
	UIButton* _mask;
	double _animationDuration;
	struct {
		unsigned delegateWillDismissPopup : 1;
		unsigned delegateDidDismissPopup : 1;
		unsigned delegateAnimatePresent : 1;
		unsigned delegateAnimateDismiss : 1;
		unsigned delegateAnimatePresentDismiss : 1;
	}  _popupFlags;

}

@property (assign,nonatomic,__weak) id<IMPopupControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int transitionStyle;                                        //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * popup;                          //@synthesize popup=_popup - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * parent;                         //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) double animationDuration;                                   //@synthesize animationDuration=_animationDuration - In the implementation block
-(void)dismissPopupViewControllerAnimated:(char)arg1 ;
-(void)presentPopupViewController:(id)arg1 parent:(id)arg2 dimmedView:(id)arg3 animated:(char)arg4 ;
-(void)onMaskTap:(id)arg1 ;
-(void)setDelegate:(id<IMPopupControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IMPopupControllerDelegate>)delegate;
-(int)transitionStyle;
-(void)setTransitionStyle:(int)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
-(UIViewController *)popup;
-(UIViewController *)parent;
@end

