/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PLModalDimmingContained.h>

@class UIImageView, UIView, UINavigationBar, UINavigationController;

@interface PLTexturedCardViewController : UIViewController <PLModalDimmingContained> {

	UIImageView* _decorationView;
	UIImageView* _innerShadowView;
	UIView* _wrapperView;
	UINavigationBar* _navigationBar;
	UINavigationController* _navigationController;

}
-(CGSize)preferredSizeInParentViewController;
-(CGPoint)preferredOffsetInParentViewController;
-(void)dealloc;
-(void)popViewControllerAnimated:(char)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_updateNavigationBarToOrientation:(int)arg1 ;
-(void)_updateWrapperViewToOrientation:(int)arg1 ;
@end

