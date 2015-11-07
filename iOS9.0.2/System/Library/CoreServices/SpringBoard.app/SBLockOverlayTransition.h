/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : NSObject {

	SBLockOverlayContext* _from;
	SBLockOverlayContext* _to;
	SBLockScreenViewController* _lockScreenVC;

}
+(id)underlayRequesterNameForContext:(id)arg1 ;
-(id)initFromOverlay:(id)arg1 toOverlay:(id)arg2 inside:(id)arg3 ;
-(void)performTransitionWithAnimationFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideLockContent;
-(void)dealloc;
@end

