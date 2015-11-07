/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface PopoverRevealViewController : UIViewController {

	UIViewController* _rootViewController;
	UIViewController* _revealedViewController;
	char _animating;

}

@property (nonatomic,retain) UIViewController * rootViewController;                  //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) UIViewController * revealedViewController;              //@synthesize revealedViewController=_revealedViewController - In the implementation block
-(void)revealViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRevealedViewController:(UIViewController *)arg1 ;
-(UIViewController *)revealedViewController;
-(void)dismissRevealedViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)navigationItem;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)viewDidLoad;
-(id)initWithRootViewController:(id)arg1 ;
@end
