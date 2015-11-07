/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSApplicationProxy, NSDictionary, NSBundle, NSString, NSNumber, NSDate;

@interface GKApplicationProxy : NSObject {

	LSApplicationProxy* _lsProxy;
	NSDictionary* _metadata;

}

@property (nonatomic,retain,readonly) NSBundle * bundle; 
@property (nonatomic,retain,readonly) NSString * bundleVersion; 
@property (nonatomic,retain,readonly) NSString * bundleShortVersion; 
@property (nonatomic,retain,readonly) NSString * bundleID; 
@property (nonatomic,retain,readonly) NSNumber * adamID; 
@property (nonatomic,retain,readonly) NSNumber * externalVersion; 
@property (nonatomic,retain,readonly) NSDate * purchaseDate; 
@property (getter=isRestricted,nonatomic,readonly) char restricted; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) char gameCenterEnabled; 
@property (getter=isInstalled,nonatomic,readonly) char installed; 
@property (nonatomic,retain) LSApplicationProxy * lsProxy;                                     //@synthesize lsProxy=_lsProxy - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
+(id)metadataForBundleURL:(id)arg1 ;
-(char)isInstalled;
-(NSString *)bundleID;
-(void)dealloc;
-(id)bundleURL;
-(NSBundle *)bundle;
-(id)initWithProxy:(id)arg1 ;
-(NSNumber *)externalVersion;
-(NSString *)bundleShortVersion;
-(id)initWithBundleID:(id)arg1 ;
-(void)setLsProxy:(LSApplicationProxy *)arg1 ;
-(LSApplicationProxy *)lsProxy;
-(NSString *)bundleVersion;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(char)isRestricted;
-(NSDate *)purchaseDate;
-(NSNumber *)adamID;
-(char)isGameCenterEnabled;
@end

