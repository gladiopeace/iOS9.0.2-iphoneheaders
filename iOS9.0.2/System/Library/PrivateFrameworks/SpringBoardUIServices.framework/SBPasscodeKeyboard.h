/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIKeyboard.h>

@class SBUIPasscodeLockViewWithKeyboard;

@interface SBPasscodeKeyboard : UIKeyboard {

	SBUIPasscodeLockViewWithKeyboard* _lockView;

}
-(char)isActive;
-(char)shouldSaveMinimizationState;
-(void)minimize;
-(void)maximize;
-(char)canDismiss;
-(id)initWithFrame:(CGRect)arg1 lockView:(id)arg2 ;
@end

