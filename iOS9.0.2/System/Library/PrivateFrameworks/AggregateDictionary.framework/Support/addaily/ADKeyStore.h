/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/Support/addaily
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableString, NSString;

@interface ADKeyStore : NSObject {

	NSMutableSet* _whitelistedScalarKeys;
	NSMutableSet* _whitelistedScalarPrefixes;
	NSMutableSet* _whitelistedDistributionKeys;
	NSMutableSet* _whitelistedDistributionPrefixes;
	NSMutableSet* _whitelistedMetadataKeys;
	char _isInternalDevice;
	NSMutableString* _baselineDigest;
	NSMutableString* _whitelistDigest;

}

@property (nonatomic,readonly) NSString * baselineDigest;               //@synthesize baselineDigest=_baselineDigest - In the implementation block
@property (nonatomic,readonly) NSString * whitelistDigest;              //@synthesize whitelistDigest=_whitelistDigest - In the implementation block
+(id)defaultWhitelist;
-(char)scalarKeyIsWhitelisted:(id)arg1 ;
-(char)distributionKeyIsWhitelisted:(id)arg1 ;
-(char)metadataKeyIsWhitelisted:(id)arg1 ;
-(NSString *)baselineDigest;
-(NSString *)whitelistDigest;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(id)initWithDefaultPath;
@end

