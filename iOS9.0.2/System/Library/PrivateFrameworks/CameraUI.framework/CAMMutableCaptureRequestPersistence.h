/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol CAMMutableCaptureRequestPersistence <NSObject>
@property (assign,nonatomic) int persistenceOptions; 
@property (assign,nonatomic) unsigned deferredPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) char shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) char shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) char shouldDelayRemotePersistence; 
@required
-(int)persistenceOptions;
-(void)setPersistenceOptions:(int)arg1;
-(unsigned)deferredPersistenceOptions;
-(void)setDeferredPersistenceOptions:(unsigned)arg1;
-(NSURL *)localDestinationURL;
-(void)setLocalDestinationURL:(id)arg1;
-(NSString *)persistenceUUID;
-(void)setPersistenceUUID:(id)arg1;
-(char)shouldExtractDiagnosticsFromMetadata;
-(void)setShouldExtractDiagnosticsFromMetadata:(char)arg1;
-(char)shouldPersistDiagnosticsToSidecar;
-(void)setShouldPersistDiagnosticsToSidecar:(char)arg1;
-(char)shouldDelayRemotePersistence;
-(void)setShouldDelayRemotePersistence:(char)arg1;

@end

