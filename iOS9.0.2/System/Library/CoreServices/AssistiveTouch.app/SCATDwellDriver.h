/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATDriver.h>

@interface SCATDwellDriver : SCATDriver {

	char _isReadyForSelect;

}

@property (assign,nonatomic) char isReadyForSelect;              //@synthesize isReadyForSelect=_isReadyForSelect - In the implementation block
-(void)_idleTimerDidFire;
-(int)driverType;
-(char)_handleStepNextAction;
-(char)_handleStepPreviousAction;
-(void)_didTransitionToPhase:(int)arg1 ;
-(char)_handleSelectAction;
-(char)handleInputAction:(int)arg1 ;
-(void)_resetDwellTimer;
-(char)isReadyForSelect;
-(char)_actuallyHandleSelectAction;
-(char)_shouldUseDwellSelection;
-(char)_handleStepAction:(int)arg1 ;
-(void)_startDwellTimer;
-(void)_cancelDwellRelatedTimers;
-(void)_dwellTimerFired;
-(void)setIsReadyForSelect:(char)arg1 ;
-(void)_scanAbortTimerFired;
-(char)_shouldUseScanAbortTimer;
-(void)_startScanAbortTimer;
@end

