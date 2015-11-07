/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDocumentation, NSString;

@interface SUDescriptor : NSObject <NSSecureCoding, NSCopying> {

	SUDocumentation* _documentation;
	NSString* _publisher;
	NSString* _humanReadableUpdateName;
	NSString* _productSystemName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	unsigned long long _downloadSize;
	unsigned long long _unarchiveSize;
	unsigned long long _msuPrepareSize;
	unsigned long long _installationSize;
	int _updateType;
	char _autoDownloadAllowableForCellular;
	char _downloadAllowableForCellular;
	char _downloadable;
	char _disableSiriVoiceDeletion;
	char _disableCDLevel4;
	char _disableAppDemotion;
	char _downloadableOverCellular;
	char _streamingZipCapable;

}

@property (nonatomic,retain) SUDocumentation * documentation;                                                                                  //@synthesize documentation=_documentation - In the implementation block
@property (nonatomic,retain) NSString * publisher;                                                                                             //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSString * productSystemName;                                                                                     //@synthesize productSystemName=_productSystemName - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                                                                        //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;                                                                                   //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (assign,nonatomic) unsigned long long downloadSize;                                                                                  //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) unsigned long long installationSize;                                                                              //@synthesize installationSize=_installationSize - In the implementation block
@property (assign,nonatomic) int updateType;                                                                                                   //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) char autoDownloadAllowableForCellular;                                                                            //@synthesize autoDownloadAllowableForCellular=_autoDownloadAllowableForCellular - In the implementation block
@property (assign,getter=isDownloadable,nonatomic) char downloadable;                                                                          //@synthesize downloadable=_downloadable - In the implementation block
@property (assign,getter=isDownloadableOverCellular,nonatomic) char downloadableOverCellular;                                                  //@synthesize downloadableOverCellular=_downloadableOverCellular - In the implementation block
@property (assign,setter=_setDisableSiriVoiceDeletion:,getter=siriVoiceDeletionDisabled,nonatomic) char disableSiriVoiceDeletion;              //@synthesize disableSiriVoiceDeletion=_disableSiriVoiceDeletion - In the implementation block
@property (assign,setter=_setDisableCDLevel4:,getter=cdLevel4Disabled,nonatomic) char disableCDLevel4;                                         //@synthesize disableCDLevel4=_disableCDLevel4 - In the implementation block
@property (assign,setter=_setDisableAppDemotion:,getter=appDemotionDisabled,nonatomic) char disableAppDemotion;                                //@synthesize disableAppDemotion=_disableAppDemotion - In the implementation block
@property (assign,setter=_setUnarchiveSize:,getter=_unarchiveSize,nonatomic) unsigned long long unarchiveSize;                                 //@synthesize unarchiveSize=_unarchiveSize - In the implementation block
@property (assign,setter=_setMsuPrepareSize:,getter=_msuPrepareSize,nonatomic) unsigned long long msuPrepareSize;                              //@synthesize msuPrepareSize=_msuPrepareSize - In the implementation block
@property (assign,setter=_setStreamingZipCapable:,getter=_isStreamingZipCapable,nonatomic) char streamingZipCapable;                           //@synthesize streamingZipCapable=_streamingZipCapable - In the implementation block
+(char)supportsSecureCoding;
-(void)setProductVersion:(NSString *)arg1 ;
-(char)isDownloadable;
-(unsigned long long)downloadSize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPublisher:(NSString *)arg1 ;
-(NSString *)productSystemName;
-(void)setProductSystemName:(NSString *)arg1 ;
-(void)setDownloadSize:(unsigned long long)arg1 ;
-(void)setInstallationSize:(unsigned long long)arg1 ;
-(void)setUpdateType:(int)arg1 ;
-(SUDocumentation *)documentation;
-(NSString *)publisher;
-(unsigned long long)totalRequiredFreeSpace;
-(unsigned long long)installationSize;
-(id)humanReadableUpdateName;
-(NSString *)productBuildVersion;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setDownloadable:(char)arg1 ;
-(void)setAutoDownloadAllowableForCellular:(char)arg1 ;
-(void)setDownloadableOverCellular:(char)arg1 ;
-(void)_setUnarchiveSize:(unsigned long long)arg1 ;
-(void)_setStreamingZipCapable:(char)arg1 ;
-(void)_setDisableSiriVoiceDeletion:(char)arg1 ;
-(void)_setDisableCDLevel4:(char)arg1 ;
-(void)_setDisableAppDemotion:(char)arg1 ;
-(void)_setMsuPrepareSize:(unsigned long long)arg1 ;
-(void)setDocumentation:(SUDocumentation *)arg1 ;
-(unsigned long long)preparationSize;
-(unsigned long long)_unarchiveSize;
-(unsigned long long)_msuPrepareSize;
-(char)autoDownloadAllowableForCellular;
-(char)isDownloadableOverCellular;
-(char)_isStreamingZipCapable;
-(char)siriVoiceDeletionDisabled;
-(char)cdLevel4Disabled;
-(char)appDemotionDisabled;
-(char)_hasValue:(id)arg1 ;
-(id)_buildCompareKey;
-(char)isValidDescriptor;
-(int)updateType;
-(NSString *)productVersion;
@end

