/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIView, NSString;

@interface MusicHUDViewController : UIViewController {

	UIView* _contentView;
	UIView* _hudView;
	char _didPlayAnimation;
	char _shouldDismissHUDWhenPossible;
	int _type;
	char _shouldWaitForExplicitDismissal;
	NSString* _text;
	double _dismissalDelay;

}

@property (assign,nonatomic) double dismissalDelay;                            //@synthesize dismissalDelay=_dismissalDelay - In the implementation block
@property (assign,nonatomic) char shouldWaitForExplicitDismissal;              //@synthesize shouldWaitForExplicitDismissal=_shouldWaitForExplicitDismissal - In the implementation block
@property (nonatomic,copy) NSString * text;                                    //@synthesize text=_text - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)dismiss;
-(id)initWithHUDType:(int)arg1 ;
-(void)presentFromRootViewController;
-(void)_playAnimation;
-(void)_dismissHUDAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(double)dismissalDelay;
-(void)setDismissalDelay:(double)arg1 ;
-(char)shouldWaitForExplicitDismissal;
-(void)setShouldWaitForExplicitDismissal:(char)arg1 ;
@end
