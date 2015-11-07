/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSManager, NPSDomainAccessor, NSArray, MFNanoBridgeSettingsMailbox, NSString;

@interface MFNanoBridgeSettingsManager : NSObject {

	NPSManager* _syncManager;
	NPSDomainAccessor* _domainAccessor;
	NSArray* _activeAccounts;

}

@property (nonatomic,readonly) char mirrorSettingsFromCompanion; 
@property (nonatomic,retain) MFNanoBridgeSettingsMailbox * includeMailMailbox; 
@property (assign,nonatomic) unsigned linesOfPreview; 
@property (assign,nonatomic) unsigned flagStyle; 
@property (assign,nonatomic) char askBeforeDeleting; 
@property (assign,nonatomic) char organizeByThread; 
@property (nonatomic,retain) NSString * signature; 
@property (nonatomic,readonly) NSArray * activeAccounts;                                    //@synthesize activeAccounts=_activeAccounts - In the implementation block
+(id)sharedInstance;
-(id)_getValueForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)notifyMobileMailFlagStyleChanged;
-(void)notifyMobileMailAskBeforeDeletingChanged;
-(void)notifyMobileMailOrganizeByThreadChanged;
-(unsigned)flagStyle;
-(id)_loadAccounts;
-(char)_mirrorSettingsFromCompanion;
-(id)_includeMailMailbox;
-(void)_setIncludeMailMailbox:(id)arg1 ;
-(unsigned)_linesOfPreview;
-(void)_setLinesOfPreview:(unsigned)arg1 ;
-(unsigned)_flagStyle;
-(char)mirrorSettingsFromCompanion;
-(void)_setFlagStyle:(unsigned)arg1 ;
-(char)_askBeforeDeleting;
-(void)_setAskBeforeDeleting:(char)arg1 ;
-(char)_organizeByThread;
-(void)_setOrganizeByThread:(char)arg1 ;
-(id)_signature;
-(void)_setSignature:(id)arg1 ;
-(unsigned)_mobileMailFlagStyle;
-(char)_mobileMailAskBeforeDeleting;
-(char)_mobileMailOrganizeByThread;
-(MFNanoBridgeSettingsMailbox *)includeMailMailbox;
-(void)_setValue:(id)arg1 forKey:(id)arg2 syncWithClient:(char)arg3 ;
-(void)setIncludeMailMailbox:(MFNanoBridgeSettingsMailbox *)arg1 ;
-(unsigned)linesOfPreview;
-(void)setLinesOfPreview:(unsigned)arg1 ;
-(void)setFlagStyle:(unsigned)arg1 ;
-(char)askBeforeDeleting;
-(void)setAskBeforeDeleting:(char)arg1 ;
-(void)notifyMirrorSettingsFromCompanionChanged;
-(void)notifyMobileMailAccountsChanged;
-(void)reloadCachedAccounts;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)signature;
-(NSArray *)activeAccounts;
-(void)setOrganizeByThread:(char)arg1 ;
-(char)organizeByThread;
-(void)_handleDidUnpair;
-(id)domainAccessor;
@end

