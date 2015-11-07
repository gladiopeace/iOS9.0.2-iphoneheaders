/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NPDPassLibrary.h>
#import <libobjc.A.dylib/PDPassLibraryExportedInterface.h>

@protocol NPDCompanionPassLibraryDataSource;
@class NPDCompanionPaymentPassDatabase, NSString;

@interface NPDCompanionPassLibrary : NPDPassLibrary <PDPassLibraryExportedInterface> {

	NPDCompanionPaymentPassDatabase* _companionPaymentPassDatabase;
	id<NPDCompanionPassLibraryDataSource> _dataSource;

}

@property (nonatomic,retain) NPDCompanionPaymentPassDatabase * companionPaymentPassDatabase;              //@synthesize companionPaymentPassDatabase=_companionPaymentPassDatabase - In the implementation block
@property (assign,nonatomic,__weak) id<NPDCompanionPassLibraryDataSource> dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompanionPaymentPassDatabase:(NPDCompanionPaymentPassDatabase *)arg1 ;
-(NPDCompanionPaymentPassDatabase *)companionPaymentPassDatabase;
-(id)initWithConnection:(id)arg1 companionPaymentPassDatabase:(id)arg2 dataSource:(id)arg3 ;
-(void)_handleCompanionPassDatabaseNotification:(id)arg1 ;
-(id)_filteredAndConfiguredPassForPaymentPass:(id)arg1 deviceName:(id)arg2 ;
-(void)setDataSource:(id<NPDCompanionPassLibraryDataSource>)arg1 ;
-(void)dealloc;
-(id<NPDCompanionPassLibraryDataSource>)dataSource;
-(void)serviceResumed;
-(void)serviceSuspended;
-(void)replacePassWithPassData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addPassesWithData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removePassWithUniqueID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)getPassesWithHandler:(/*^block*/id)arg1 ;
-(void)getPassesOfType:(unsigned)arg1 handler:(/*^block*/id)arg2 ;
-(void)getManifestHashAndSettingsForPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getPassWithPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getPassWithUniqueID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)getContentForUniqueID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)getImageSetForUniqueID:(id)arg1 ofType:(int)arg2 displayProfile:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)isPaymentPassActivationAvailableWithHandler:(/*^block*/id)arg1 ;
-(void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPassWithUniqueID:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)hasPassesOfType:(unsigned)arg1 handler:(/*^block*/id)arg2 ;
-(void)canAddPassesOfType:(unsigned)arg1 handler:(/*^block*/id)arg2 ;
-(void)countPassesOfType:(unsigned)arg1 handler:(/*^block*/id)arg2 ;
@end

