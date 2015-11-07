/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSNumber, NSURL;

@interface SSDictionaryResponse : NSObject <NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                                            //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSNumber * failureType; 
@property (nonatomic,readonly) NSArray * pingURLs; 
@property (getter=isSupportedProtocolVersion,nonatomic,readonly) char supportedProtocolVersion; 
@property (nonatomic,readonly) NSURL * versionMismatchURL; 
-(void)dealloc;
-(id)init;
-(NSArray *)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)pingURLs;
-(id)actionsWithActionType:(id)arg1 ;
-(id)_valueForProtocolKey:(id)arg1 ;
-(id)_copyAccount;
-(NSNumber *)failureType;
-(char)isSupportedProtocolVersion;
-(NSURL *)versionMismatchURL;
@end

