/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem {

	SBApplication* _app;

}
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)dismissOnLock;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(id)initWithApplication:(id)arg1 ;
@end

