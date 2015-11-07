/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/_GKStateMachineDelegate.h>

@class NSArray, GKLoadableContentStateMachine, UIActivityIndicatorView, NSString;

@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate> {

	NSArray* _viewsToHideWhileLoading;
	float _loadingIndicatorDelay;
	GKLoadableContentStateMachine* _loadingMachine;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSString * loadingState; 
@property (nonatomic,retain) NSArray * viewsToHideWhileLoading;                           //@synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading - In the implementation block
@property (assign,nonatomic) float loadingIndicatorDelay;                                 //@synthesize loadingIndicatorDelay=_loadingIndicatorDelay - In the implementation block
@property (nonatomic,retain) GKLoadableContentStateMachine * loadingMachine;              //@synthesize loadingMachine=_loadingMachine - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewsToHideHidden:(char)arg1 ;
-(void)showLoadingIndicator;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)loadingState;
-(void)setLoadingState:(NSString *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)didEnterLoadingState;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(void)didExitLoadingState;
-(void)didEnterLoadedState;
-(void)didExitLoadedState;
-(GKLoadableContentStateMachine *)loadingMachine;
-(void)setLoadingMachine:(GKLoadableContentStateMachine *)arg1 ;
-(void)setViewsToHideWhileLoading:(NSArray *)arg1 ;
-(NSArray *)viewsToHideWhileLoading;
-(float)loadingIndicatorDelay;
-(void)setLoadingIndicatorDelay:(float)arg1 ;
@end

