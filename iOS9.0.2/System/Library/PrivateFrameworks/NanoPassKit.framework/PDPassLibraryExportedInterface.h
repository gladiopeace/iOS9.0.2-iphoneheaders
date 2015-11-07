/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PDPassLibraryExportedInterface <PDXPCServiceExportedInterface>
@required
-(void)replacePassWithPassData:(id)arg1 handler:(/*^block*/id)arg2;
-(void)addPassesWithData:(id)arg1 handler:(/*^block*/id)arg2;
-(void)removePassWithUniqueID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)getPassesWithHandler:(/*^block*/id)arg1;
-(void)getPassesOfType:(unsigned)arg1 handler:(/*^block*/id)arg2;
-(void)getManifestHashAndSettingsForPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(/*^block*/id)arg3;
-(void)getPassWithPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(/*^block*/id)arg3;
-(void)getPassWithUniqueID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)getContentForUniqueID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)getImageSetForUniqueID:(id)arg1 ofType:(int)arg2 displayProfile:(id)arg3 handler:(/*^block*/id)arg4;
-(void)isPaymentPassActivationAvailableWithHandler:(/*^block*/id)arg1;
-(void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPassWithUniqueID:(id)arg3 handler:(/*^block*/id)arg4;
-(void)hasPassesOfType:(unsigned)arg1 handler:(/*^block*/id)arg2;
-(void)canAddPassesOfType:(unsigned)arg1 handler:(/*^block*/id)arg2;
-(void)countPassesOfType:(unsigned)arg1 handler:(/*^block*/id)arg2;

@end

