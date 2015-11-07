/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDPContext, NSString;

@interface CDPRemoteDeviceSecretValidator : NSObject {

	/*^block*/id _validSecretHandler;
	/*^block*/id _requestToJoinCompletion;
	int _circleChangeToken;
	char _isWaitingForRemoteApproval;
	char _isAttemptingRecovery;
	unsigned _failedAttempts;
	char _isUsingMultipleICSC;
	CDPContext* _context;
	NSString* _localSecret;
	unsigned _localSecretType;

}

@property (nonatomic,readonly) CDPContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) char isUsingMultipleICSC;                 //@synthesize isUsingMultipleICSC=_isUsingMultipleICSC - In the implementation block
@property (nonatomic,copy,readonly) NSString * localSecret;              //@synthesize localSecret=_localSecret - In the implementation block
@property (nonatomic,readonly) unsigned localSecretType;                 //@synthesize localSecretType=_localSecretType - In the implementation block
-(void)dealloc;
-(CDPContext *)context;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelApproveFromAnotherDevice;
-(id)initWithContext:(id)arg1 isUsingMultipleICSC:(char)arg2 validSecretHandler:(/*^block*/id)arg3 ;
-(NSString *)localSecret;
-(unsigned)localSecretType;
-(void)cancelValidationWithError:(id)arg1 ;
-(char)isUsingMultipleICSC;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)resetAccountCDPState;
@end

