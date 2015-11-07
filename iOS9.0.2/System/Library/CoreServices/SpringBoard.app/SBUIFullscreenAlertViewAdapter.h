/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBAlertViewAdapter.h>

@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter {

	char _revealedContentBeneathForDismiss;
	char _animatingOut;

}
-(void)alertDisplayWillBecomeVisible;
-(char)isReadyToBeRemovedFromView;
-(char)isAnimatingOut;
-(void)viewAnimatedOut;
-(char)shouldAnimateIconsIn;
-(void)dismiss;
-(id)alert;
-(void)setAlert:(id)arg1 ;
-(void)setShouldAnimateIn:(char)arg1 ;
-(void)updateSpringBoardInPreparationForTransparentDismiss;
@end

