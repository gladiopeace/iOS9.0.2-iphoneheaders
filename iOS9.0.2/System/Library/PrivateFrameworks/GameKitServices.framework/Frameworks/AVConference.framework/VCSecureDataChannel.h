/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VCSecureDataChannelDelegate;
#import <AVConference/AVConference-Structs.h>
@interface VCSecureDataChannel : NSObject {

	tagCONNRESULT* connectionResult;
	tls_record_sRef tlsRecord;
	id<VCSecureDataChannelDelegate> _delegate;

}

@property (assign) id<VCSecureDataChannelDelegate> delegate; 
@property (readonly) int maxEncryptedDataSize; 
@property (readonly) int maxUnencryptedDataSize; 
-(void)setDelegate:(id<VCSecureDataChannelDelegate>)arg1 ;
-(void)dealloc;
-(id<VCSecureDataChannelDelegate>)delegate;
-(long)sendData:(id)arg1 encrypted:(char)arg2 ;
-(id)initWithConnectionResult:(tagCONNRESULT*)arg1 sharedSecret:(id)arg2 error:(id*)arg3 ;
-(long)setupWithSharedSecret:(id)arg1 error:(id*)arg2 ;
-(long)verifyAndDecryptData:(id)arg1 decryptedData:(id*)arg2 ;
-(int)maxEncryptedDataSize;
-(int)maxUnencryptedDataSize;
@end

