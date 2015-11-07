/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchResultsAction.h>

@class UIViewController;

@interface SPUISearchResultsViewControllerAction : SPUISearchResultsAction {

	/*^block*/id _completionBlock;
	UIViewController* _viewController;

}

@property (nonatomic,copy) id completionBlock;                               //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
@end

