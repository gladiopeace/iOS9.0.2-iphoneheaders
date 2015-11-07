/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableIndexSet;

@interface _SSVPlayActivityFlushSessionInformation : NSObject {

	NSString* _endpointIdentifier;
	NSMutableIndexSet* _revisionsIndexSet;
	NSString* _revisionVersionToken;
	unsigned long long _sessionToken;

}

@property (nonatomic,copy) NSString * endpointIdentifier;                        //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * revisionsIndexSet;              //@synthesize revisionsIndexSet=_revisionsIndexSet - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                      //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
@property (assign,nonatomic) unsigned long long sessionToken;                    //@synthesize sessionToken=_sessionToken - In the implementation block
-(NSMutableIndexSet *)revisionsIndexSet;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(unsigned long long)sessionToken;
-(NSString *)endpointIdentifier;
-(NSString *)revisionVersionToken;
-(void)setRevisionsIndexSet:(NSMutableIndexSet *)arg1 ;
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(void)setSessionToken:(unsigned long long)arg1 ;
@end

