/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL, NSNumber, NSError, SKPaymentTransaction;

@interface SKDownload : NSObject {

	NSString* _contentIdentifier;
	long long _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	int _downloadState;
	NSError* _error;
	float _progress;
	double _timeRemaining;
	SKPaymentTransaction* _transaction;
	NSString* _version;

}

@property (nonatomic,readonly) int downloadState;                                                         //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,readonly) long long contentLength;                                                   //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,readonly) NSString * contentIdentifier;                                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * contentURL;                                                        //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,readonly) NSString * contentVersion;                                                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) float progress;                                                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) double timeRemaining;                                                      //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (nonatomic,readonly) SKPaymentTransaction * transaction;                                        //@synthesize transaction=_transaction - In the implementation block
@property (setter=_setDownloadID:,getter=_downloadID,nonatomic,copy) NSNumber * _downloadID;              //@synthesize downloadID=_downloadID - In the implementation block
-(void)_setContentIdentifier:(id)arg1 ;
-(NSURL *)contentURL;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(SKPaymentTransaction *)transaction;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(void)_setContentLength:(long long)arg1 ;
-(void)_setContentURL:(id)arg1 ;
-(int)downloadState;
-(void)_setDownloadState:(int)arg1 ;
-(void)_setTimeRemaining:(double)arg1 ;
-(void)_applyChangeset:(id)arg1 ;
-(void)_setTransaction:(id)arg1 ;
-(NSNumber *)_downloadID;
-(void)_setDownloadID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_setProgress:(float)arg1 ;
-(float)progress;
-(long long)contentLength;
-(double)timeRemaining;
-(NSString *)contentIdentifier;
-(void)_setVersion:(id)arg1 ;
-(NSString *)contentVersion;
@end

