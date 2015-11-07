/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError;

@interface MusicSocialOperationResponse : NSObject {

	char _serverSuccess;
	id _responseData;
	NSError* _error;

}

@property (assign,nonatomic) char serverSuccess;              //@synthesize serverSuccess=_serverSuccess - In the implementation block
@property (nonatomic,copy) id responseData;                   //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setServerSuccess:(char)arg1 ;
-(char)serverSuccess;
-(id)responseData;
-(void)setResponseData:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

