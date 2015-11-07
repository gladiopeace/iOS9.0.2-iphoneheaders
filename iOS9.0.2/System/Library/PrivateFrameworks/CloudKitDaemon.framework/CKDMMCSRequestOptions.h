/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CKDMMCSRequestOptions : NSObject {

	char _usesBackgroundSession;
	char _allowsCellularAccess;
	char _allowsPowerNapScheduling;
	NSString* _applicationBundleID;
	NSString* _applicationSecondaryID;
	NSString* _containerID;
	NSArray* _zoneNames;
	int _qualityOfService;

}

@property (nonatomic,retain) NSString * applicationBundleID;                 //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * applicationSecondaryID;              //@synthesize applicationSecondaryID=_applicationSecondaryID - In the implementation block
@property (nonatomic,retain) NSString * containerID;                         //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSArray * zoneNames;                            //@synthesize zoneNames=_zoneNames - In the implementation block
@property (assign,nonatomic) char usesBackgroundSession;                     //@synthesize usesBackgroundSession=_usesBackgroundSession - In the implementation block
@property (assign,nonatomic) char allowsCellularAccess;                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) char allowsPowerNapScheduling;                  //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) int qualityOfService;                           //@synthesize qualityOfService=_qualityOfService - In the implementation block
-(int)qualityOfService;
-(id)description;
-(void)setQualityOfService:(int)arg1 ;
-(NSString *)applicationBundleID;
-(char)usesBackgroundSession;
-(id)CKPropertiesDescription;
-(void)setAllowsPowerNapScheduling:(char)arg1 ;
-(char)allowsPowerNapScheduling;
-(char)allowsCellularAccess;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)setUsesBackgroundSession:(char)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(void)setZoneNames:(NSArray *)arg1 ;
-(NSString *)applicationSecondaryID;
-(NSArray *)zoneNames;
-(id)MMCSOptions;
-(void)setApplicationSecondaryID:(NSString *)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(NSString *)containerID;
-(void)setAllowsCellularAccess:(char)arg1 ;
@end

