/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicEntityProviding.h>

@class NSArray, MusicClientContext, NSString;

@interface MusicInterleavedEntityProvider : NSObject <MusicClientContextConsuming, MusicEntityProviding> {

	NSArray* _dynamicPageSectionIndexMappers;
	NSArray* _entityProviders;
	NSArray* _sortedMergeInformation;
	char _didRequireMerging;
	MusicClientContext* _clientContext;
	/*^block*/id _entityUniqueIdentifierMergeInformationBlock;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                        //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) char didRequireMerging;                                  //@synthesize didRequireMerging=_didRequireMerging - In the implementation block
@property (nonatomic,copy) NSArray * entityProviders;                                   //@synthesize entityProviders=_entityProviders - In the implementation block
@property (nonatomic,copy) id entityUniqueIdentifierMergeInformationBlock;              //@synthesize entityUniqueIdentifierMergeInformationBlock=_entityUniqueIdentifierMergeInformationBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasEntities;
-(void)dealloc;
-(unsigned)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(void)setEntityUniqueIdentifierMergeInformationBlock:(id)arg1 ;
-(char)doEntityProvidersRequireMerging:(id)arg1 ;
-(void)setEntityProviders:(NSArray *)arg1 ;
-(id)_dynamicPageSectionIndexMapperForEntityProvider:(id)arg1 ;
-(void)_reloadIndexMap;
-(void)_getSortedMergeInformation:(id*)arg1 requiresMerging:(char*)arg2 forEntityProviders:(id)arg3 ;
-(void)_didRequireMergingDidChange;
-(char)didRequireMerging;
-(NSArray *)entityProviders;
-(id)entityUniqueIdentifierMergeInformationBlock;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(void)_unregisterForNotificationsForEntityProvider:(id)arg1 ;
-(void)_entityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_registerForNotificationsForEntityProvider:(id)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end

