/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface SMSAttachmentController : NSObject {

	NSMutableDictionary* _connectionMap;
	NSMutableDictionary* _fileTransferMap;
	NSMutableDictionary* _contextMap;
	NSMutableDictionary* _blockMap;
	NSMutableDictionary* _peerCompletionBlocks;
	NSMutableSet* _pendingRemoteFileRequests;

}

@property (nonatomic,retain) NSMutableSet * pendingRemoteFileRequests;              //@synthesize pendingRemoteFileRequests=_pendingRemoteFileRequests - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)retrieveAttachmentsForMessage:(id)arg1 displayID:(id)arg2 token:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)processAttachmentsForMessage:(id)arg1 generateTextParts:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)processAttachmentsForPeerRelayForMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 uploadFailureBlock:(/*^block*/id)arg3 ;
-(void)remoteFileResponse:(id)arg1 ;
-(void)remotefileRequest:(id)arg1 attempts:(int)arg2 ;
-(void)_sizeLimitsForTransfer:(id)arg1 bigSize:(unsigned*)arg2 smallSize:(unsigned*)arg3 ;
-(char)shouldSendLowResolutionOnly;
-(void)retrieveLocalFileTransfer:(id)arg1 attachmentIndex:(unsigned)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 requestedSize:(id)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(NSMutableSet *)pendingRemoteFileRequests;
-(void)setPendingRemoteFileRequests:(NSMutableSet *)arg1 ;
-(void)maxTransferFileSizeForWifi:(unsigned*)arg1 cell:(unsigned*)arg2 ;
-(unsigned)maxTransferAudioFileSizeForWifi:(unsigned*)arg1 cell:(unsigned*)arg2 ;
-(unsigned)maxTransferVideoFileSizeForWifi:(unsigned*)arg1 cell:(unsigned*)arg2 ;
@end

