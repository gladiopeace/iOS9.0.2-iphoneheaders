/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor, NPSManager;

@interface COSWristRaiseController : PSListController {

	char _isPairedDeviceRunningBondiOrGreater;
	char _hasBacklightExtendCapability;
	NPSDomainAccessor* _viewOnWakeDomainAccessor;
	NPSDomainAccessor* _wakeGestureDomainAccessor;
	NPSDomainAccessor* _backlightExtendDomainAccessor;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSDomainAccessor * viewOnWakeDomainAccessor;                   //@synthesize viewOnWakeDomainAccessor=_viewOnWakeDomainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * wakeGestureDomainAccessor;                  //@synthesize wakeGestureDomainAccessor=_wakeGestureDomainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * backlightExtendDomainAccessor;              //@synthesize backlightExtendDomainAccessor=_backlightExtendDomainAccessor - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                                       //@synthesize syncManager=_syncManager - In the implementation block
@property (assign,nonatomic) char isPairedDeviceRunningBondiOrGreater;                       //@synthesize isPairedDeviceRunningBondiOrGreater=_isPairedDeviceRunningBondiOrGreater - In the implementation block
@property (assign,nonatomic) char hasBacklightExtendCapability;                              //@synthesize hasBacklightExtendCapability=_hasBacklightExtendCapability - In the implementation block
-(void)handleDidUnpair;
-(NPSDomainAccessor *)wakeGestureDomainAccessor;
-(void)setActivateOnWristRaiseValue:(id)arg1 specifier:(id)arg2 ;
-(id)activateOnWristRaiseValue:(id)arg1 ;
-(id)_onWristRaiseGroup;
-(id)_onTapGroup;
-(void)_setViewOnWakeDisabled:(char)arg1 ;
-(void)_setBacklightExtendValue:(int)arg1 ;
-(NPSDomainAccessor *)viewOnWakeDomainAccessor;
-(NPSDomainAccessor *)backlightExtendDomainAccessor;
-(char)isWakeSetToShort;
-(void)setViewOnWakeDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setWakeGestureDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setBacklightExtendDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(char)isPairedDeviceRunningBondiOrGreater;
-(void)setIsPairedDeviceRunningBondiOrGreater:(char)arg1 ;
-(char)hasBacklightExtendCapability;
-(void)setHasBacklightExtendCapability:(char)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
@end

