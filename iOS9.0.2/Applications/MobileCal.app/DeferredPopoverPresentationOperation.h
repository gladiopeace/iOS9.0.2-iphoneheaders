/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/ShowViewControllerOperation.h>

@class EnqueueableManagedNavigationController;

@interface DeferredPopoverPresentationOperation : ShowViewControllerOperation {

	EnqueueableManagedNavigationController* _viewController;
	char _shouldShowWithAnimation;
	char _isReady;
	char _isFinished;
	char _isExecuting;

}
-(id)initWithViewController:(id)arg1 shouldShowWithAnimation:(char)arg2 ;
-(char)isReady;
-(id)description;
-(id)sourceViewController;
-(void)main;
@end

