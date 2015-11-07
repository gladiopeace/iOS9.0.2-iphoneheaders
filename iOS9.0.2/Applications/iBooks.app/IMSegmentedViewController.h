/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMViewController.h>

@class NSArray, IMViewControllerTransition, UIView, UIViewController;

@interface IMSegmentedViewController : IMViewController {

	int _selectedIndex;
	NSArray* _viewControllers;
	IMViewControllerTransition* _defaultTransition;
	UIView* _contentView;

}

@property (assign,nonatomic) int selectedIndex;                                               //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * selectedViewController; 
@property (nonatomic,retain) NSArray * viewControllers;                                       //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) IMViewControllerTransition * defaultTransition;                  //@synthesize defaultTransition=_defaultTransition - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                            //@synthesize contentView=_contentView - In the implementation block
-(void)releaseViews;
-(void)showViewController:(id)arg1 sendAppearanceMessages:(char)arg2 ;
-(id)viewControllerAtIndex:(int)arg1 ;
-(void)reconcileChildViewControllersWithOldViewControllers:(id)arg1 newViewControllers:(id)arg2 ;
-(void)selectDefaultIndex;
-(void)setSelectedIndex:(int)arg1 withTransition:(id)arg2 ;
-(void)setSelectedIndex:(int)arg1 withTransition:(id)arg2 force:(char)arg3 ;
-(void)setSelectedIndex:(int)arg1 animated:(char)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController *)selectedViewController;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(void)setDefaultTransition:(IMViewControllerTransition *)arg1 ;
-(IMViewControllerTransition *)defaultTransition;
@end

