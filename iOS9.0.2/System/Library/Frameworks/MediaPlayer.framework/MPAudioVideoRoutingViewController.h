/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MPAudioVideoRoutingViewControllerDelegate;
@class UINavigationController, MPAudioVideoRoutingTableViewController;

@interface MPAudioVideoRoutingViewController : UIViewController {

	UINavigationController* _navigationController;
	MPAudioVideoRoutingTableViewController* _tableViewController;
	id<MPAudioVideoRoutingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPAudioVideoRoutingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)hasWirelessDisplayRoutes;
-(void)_doneAction:(id)arg1 ;
-(void)setDelegate:(id<MPAudioVideoRoutingViewControllerDelegate>)arg1 ;
-(id)init;
-(id<MPAudioVideoRoutingViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end

