/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkWorkspaceTransaction.h>

@class SBAlert;

@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction {

	char _activationTriggeredFromStark;
	SBAlert* _activatingAlert;
	SBAlert* _deactivatingAlert;

}
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)_begin;
@end

