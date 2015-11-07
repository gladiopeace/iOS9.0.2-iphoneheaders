/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDictionary, NSNumber, NSDate, NSData, NSPurgeableData, NSURL;

@interface BRContainer : NSObject <NSSecureCoding> {

	NSString* _containerID;
	NSSet* _bundleIDs;
	NSDictionary* _bundleIDVersions;
	NSString* _localizedName;
	NSString* _supportedFolderLevels;
	NSSet* _documentsTypes;
	NSSet* _exportedTypes;
	NSSet* _importedTypes;
	NSDictionary* _iconMetadata;
	NSDictionary* _iconURLs;
	long _isOverQuotaOnceToken;
	char _isOverQuota;
	char _isCloudSyncTCCDisabled;
	char _isInInitialState;
	NSNumber* _isDocumentScopePublicAsNumber;
	long _lastServerUpdateOnceToken;
	NSDate* _lastServerUpdate;
	long _currentStatusOnceToken;
	unsigned _currentStatus;
	NSData* _imageSandboxExtension;
	char _shouldUsePurgeableData;
	NSData* _dataRepresentation;
	NSPurgeableData* _purgeableDataRepresentation;

}

@property (nonatomic,copy,readonly) NSSet * bundleIdentifiers; 
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (assign,nonatomic) char isInInitialState;                           //@synthesize isInInitialState=_isInInitialState - In the implementation block
@property (nonatomic,readonly) char isDocumentScopePublic; 
@property (nonatomic,readonly) NSString * supportedFolderLevels; 
@property (nonatomic,readonly) NSURL * documentsURL; 
@property (nonatomic,readonly) NSSet * documentsTypes; 
@property (nonatomic,readonly) NSSet * exportedTypes; 
@property (nonatomic,readonly) NSSet * importedTypes; 
@property (assign,nonatomic) char isCloudSyncTCCDisabled;                     //@synthesize isCloudSyncTCCDisabled=_isCloudSyncTCCDisabled - In the implementation block
+(id)allContainers;
+(char)supportsSecureCoding;
+(void)initialize;
+(id)allContainersByContainerID;
+(id)documentContainers;
+(id)containerForItemAtURL:(id)arg1 error:(id*)arg2 ;
+(char)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2 ;
+(id)classesForDecoding;
+(id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 containerID:(id)arg2 ;
+(id)_bundleIDVersionsWithProperties:(id)arg1 containerID:(id)arg2 ;
+(id)_bundleIDsWithProperties:(id)arg1 ;
+(id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2 ;
+(id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2 preferredLanguages:(id)arg3 ;
+(id)_supportedFolderLevelsWithProperties:(id)arg1 ;
+(id)_documentsTypesWithProperties:(id)arg1 ;
+(id)_exportedTypesWithProperties:(id)arg1 ;
+(id)_importedTypesWithProperties:(id)arg1 ;
+(id)_iconMetadataWithProperties:(id)arg1 ;
+(id)_containerRepositoryURLForContainerID:(id)arg1 ;
+(id)_URLForPlistOfContainerID:(id)arg1 ;
+(id)bundleIdentifiersEnumeratorForProperties:(id)arg1 ;
+(id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3 ;
+(id)localizedNameForDefaultCloudDocsContainer;
+(id)_pathForIconName:(id)arg1 containerID:(id)arg2 ;
+(id)_iconURLsWithProperties:(id)arg1 containerID:(id)arg2 ;
+(id)containerInRepositoryURL:(id)arg1 createIfMissing:(char)arg2 error:(id*)arg3 ;
+(id)containerInRepositoryURL:(id)arg1 error:(id*)arg2 ;
+(id)ownerNameFromSharedMangledID:(id)arg1 ;
+(char)validateOwnerName:(id)arg1 ;
+(void)_generateiOSIconsForContainerID:(id)arg1 usingBundle:(CFBundleRef)arg2 generatedIcons:(id)arg3 ;
+(id)propertiesForContainerID:(id)arg1 usingBundle:(CFBundleRef)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4 ;
+(id)containersRepositoryURL;
+(id)containerIDFromSharedMangledID:(id)arg1 ;
+(id)sharedMangledIDWithContainerID:(id)arg1 ownerName:(id)arg2 ;
+(void)postContainerListUpdateNotification;
+(id)privateMangledContainerID:(id)arg1 ;
+(char)validateContainerID:(id)arg1 ;
+(char)isDocumentScopePublicWithProperties:(id)arg1 containerID:(id)arg2 ;
+(void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3 ;
+(char)validateSharedMangledID:(id)arg1 ;
+(id)privateUnmangledContainerID:(id)arg1 ;
+(id)containerForContainerID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSURL *)documentsURL;
-(NSString *)localizedName;
-(char)isInInitialState;
-(NSSet *)documentsTypes;
-(id)imageDataForSize:(CGSize)arg1 scale:(int)arg2 isiOSIcon:(char*)arg3 ;
-(id)imageRepresentationsAvailable;
-(id)shortDescription;
-(NSSet *)bundleIdentifiers;
-(id)localizedNameWithPreferredLanguages:(id)arg1 ;
-(void)_replaceDataRepresentationWithData:(id)arg1 ;
-(id)_pathForPlist;
-(void)accessDataRepresentationInBlock:(/*^block*/id)arg1 ;
-(void)accessPropertiesInBlock:(/*^block*/id)arg1 ;
-(id)computedProperties;
-(id)iconMetadata;
-(id)_mangledID;
-(id)_pathForIconName:(id)arg1 ;
-(id)_containerRepositoryURL;
-(id)initWithContainerID:(id)arg1 dataRepresentation:(id)arg2 ;
-(id)bundleIDVersions;
-(NSString *)supportedFolderLevels;
-(NSSet *)exportedTypes;
-(NSSet *)importedTypes;
-(id)imageDataForSize:(CGSize)arg1 scale:(int)arg2 ;
-(void)_performWhileAccessingSecurityScopedContainer:(/*^block*/id)arg1 ;
-(char)isCloudSyncTCCDisabled;
-(void)setLastServerUpdate:(id)arg1 ;
-(void)setCurrentStatus:(unsigned)arg1 ;
-(char)deleteAllContentsOnClientAndServer:(id*)arg1 ;
-(void)setOverQuota:(char)arg1 ;
-(char)_updateMetadataOnDiskWithProperties:(id)arg1 ;
-(void)setIsCloudSyncTCCDisabled:(char)arg1 ;
-(char)isDocumentScopePublic;
-(char)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2 ;
-(char)hasIconWithName:(id)arg1 ;
-(id)dataRepresentationCopy;
-(id)iconURLs;
-(char)isOverQuota;
-(unsigned)currentStatus;
-(id)lastServerUpdate;
-(id)versionNumberForBundleIdentifier:(id)arg1 ;
-(char)updateMetadataWithExtractorProperties:(id)arg1 iconNames:(id)arg2 bundleID:(id)arg3 ;
-(void)setIsInInitialState:(char)arg1 ;
@end

