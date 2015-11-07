/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>
#import <SpringBoard/SBAlertManagerObserver.h>

@protocol SBAlertChangeTransactionDelegate;
@class SBAlertManager, SBAlert, NSString;

@interface SBAlertChangeTransaction : BSTransaction <SBAlertManagerObserver> {

	SBAlertManager* _alertManager;
	SBAlert* _toAlert;
	SBAlert* _fromAlert;
	id<SBAlertChangeTransactionDelegate> _delegate;
	char _deactivateAll;
	char _suppressingActivationOcclusion;
	SBAlert* _alert;

}

@property (nonatomic,retain,readonly) SBAlert * toAlert;                                 //@synthesize alert=_alert - In the implementation block
@property (nonatomic,retain,readonly) SBAlert * fromAlert;                               //@synthesize fromAlert=_fromAlert - In the implementation block
@property (nonatomic,retain,readonly) SBAlertManager * alertManager;                     //@synthesize alertManager=_alertManager - In the implementation block
@property (assign,nonatomic) id<SBAlertChangeTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBAlertManager *)alertManager;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(char)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(char)arg3 ;
-(id)initWithAlertManager:(id)arg1 toAlert:(id)arg2 ;
-(id)initWithAlertManager:(id)arg1 toAlert:(id)arg2 fromAlert:(id)arg3 ;
-(id)_initWithAlertManager:(id)arg1 ;
-(void)_addDeactivationMilestones;
-(void)_addActivationMilestones;
-(void)_updateForegroundScenesUnderLock:(char)arg1 ;
-(id)initWithAlertManager:(id)arg1 fromAlert:(id)arg2 deactivateAll:(char)arg3 ;
-(SBAlert *)toAlert;
-(SBAlert *)fromAlert;
-(void)setDelegate:(id<SBAlertChangeTransactionDelegate>)arg1 ;
-(void)dealloc;
-(id<SBAlertChangeTransactionDelegate>)delegate;
-(void)_didComplete;
-(char)_canBeInterrupted;
-(void)_begin;
@end

