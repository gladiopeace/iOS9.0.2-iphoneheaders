/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMCore/FMCommandBase.h>

@class NSError, NSDictionary;

@interface FMJSONCommand : FMCommandBase {

	char __hasParsedResponseBody;
	NSError* _jsonResponseParseError;
	NSDictionary* __responseBodyDict;
	NSDictionary* __requestBodyDict;

}

@property (nonatomic,readonly) NSDictionary * jsonResponseDictionary; 
@property (nonatomic,retain) NSError * jsonResponseParseError;                     //@synthesize jsonResponseParseError=_jsonResponseParseError - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverAlertInfo; 
@property (assign,nonatomic) char _hasParsedResponseBody;                          //@synthesize _hasParsedResponseBody=__hasParsedResponseBody - In the implementation block
@property (nonatomic,retain) NSDictionary * _responseBodyDict;                     //@synthesize _responseBodyDict=__responseBodyDict - In the implementation block
@property (nonatomic,retain) NSDictionary * _requestBodyDict;                      //@synthesize _requestBodyDict=__requestBodyDict - In the implementation block
-(id)headers;
-(id)body;
-(void)set_hasParsedResponseBody:(char)arg1 ;
-(void)set_responseBodyDict:(NSDictionary *)arg1 ;
-(void)setJsonResponseParseError:(NSError *)arg1 ;
-(NSDictionary *)_requestBodyDict;
-(id)jsonBodyDictionary;
-(void)set_requestBodyDict:(NSDictionary *)arg1 ;
-(char)_hasParsedResponseBody;
-(NSDictionary *)_responseBodyDict;
-(NSDictionary *)jsonResponseDictionary;
-(NSDictionary *)serverAlertInfo;
-(NSError *)jsonResponseParseError;
-(void)sendRequest;
@end

