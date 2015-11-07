/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WBSCloudHistoryConfiguration : NSObject {

	NSString* _singleDeviceSaveChangesThrottlingPolicyString;
	NSString* _multipleDeviceSaveChangesThrottlingPolicyString;
	NSString* _singleDeviceFetchChangesThrottlingPolicyString;
	NSString* _multipleDeviceFetchChangesThrottlingPolicyString;
	NSString* _syncCircleSizeRetrievalThrottlingPolicyString;
	unsigned _maximumRequestCharacterCount;
	unsigned _syncWindow;

}

@property (retain) NSString * singleDeviceSaveChangesThrottlingPolicyString;                 //@synthesize singleDeviceSaveChangesThrottlingPolicyString=_singleDeviceSaveChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * multipleDeviceSaveChangesThrottlingPolicyString;               //@synthesize multipleDeviceSaveChangesThrottlingPolicyString=_multipleDeviceSaveChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * singleDeviceFetchChangesThrottlingPolicyString;                //@synthesize singleDeviceFetchChangesThrottlingPolicyString=_singleDeviceFetchChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * multipleDeviceFetchChangesThrottlingPolicyString;              //@synthesize multipleDeviceFetchChangesThrottlingPolicyString=_multipleDeviceFetchChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * syncCircleSizeRetrievalThrottlingPolicyString;                 //@synthesize syncCircleSizeRetrievalThrottlingPolicyString=_syncCircleSizeRetrievalThrottlingPolicyString - In the implementation block
@property (assign) unsigned maximumRequestCharacterCount;                                    //@synthesize maximumRequestCharacterCount=_maximumRequestCharacterCount - In the implementation block
@property (assign) unsigned syncWindow;                                                      //@synthesize syncWindow=_syncWindow - In the implementation block
-(id)init;
-(unsigned)syncWindow;
-(NSString *)singleDeviceSaveChangesThrottlingPolicyString;
-(NSString *)multipleDeviceSaveChangesThrottlingPolicyString;
-(NSString *)singleDeviceFetchChangesThrottlingPolicyString;
-(NSString *)multipleDeviceFetchChangesThrottlingPolicyString;
-(NSString *)syncCircleSizeRetrievalThrottlingPolicyString;
-(id)_builtInConfiguration;
-(void)_applyBuiltInConfiguration:(id)arg1 ;
-(id)remoteConfiguration;
-(void)applyRemoteConfiguration:(id)arg1 ;
-(id)_sharedBuiltInConfiguration;
-(id)platformBuiltInConfiguration;
-(void)applyPlatformConfiguration:(id)arg1 withTolerance:(int)arg2 ;
-(void)_applyConfiguration:(id)arg1 withTolerance:(int)arg2 ;
-(void)setSingleDeviceSaveChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMultipleDeviceSaveChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setSingleDeviceFetchChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMultipleDeviceFetchChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setSyncCircleSizeRetrievalThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMaximumRequestCharacterCount:(unsigned)arg1 ;
-(void)setSyncWindow:(unsigned)arg1 ;
-(unsigned)maximumRequestCharacterCount;
@end

