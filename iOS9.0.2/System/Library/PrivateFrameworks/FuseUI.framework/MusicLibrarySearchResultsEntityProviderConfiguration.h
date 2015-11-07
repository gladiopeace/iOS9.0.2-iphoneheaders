/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseHeterogenousCollectionViewConfiguration.h>

@class NSMutableDictionary, MusicLibrarySearchResultsEntityProvider;

@interface MusicLibrarySearchResultsEntityProviderConfiguration : MusicLibraryBrowseHeterogenousCollectionViewConfiguration {

	NSMutableDictionary* _contentDescriptorsForSectionAndTraitCollections;
	MusicLibrarySearchResultsEntityProvider* _entityValueProvider;

}

@property (nonatomic,readonly) MusicLibrarySearchResultsEntityProvider * entityProvider; 
+(id)_defaultLibraryViewConfigurations;
+(id)_mediaPickerConfigurationsIncludingPlaylists:(char)arg1 allowingMultipleSelection:(char)arg2 ;
+(id)mediaPickerConfigurationIncludingPlaylists:(char)arg1 allowingMultipleSelection:(char)arg2 ;
+(id)defaultConfiguration;
-(id)loadEntityViewDescriptor;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(id)collectionViewDescriptorForSection:(unsigned)arg1 traitCollection:(id)arg2 ;
-(id)initWithLibraryViewConfigurations:(id)arg1 ;
-(id)_collectionViewDescriptorForEntityViewDescriptor:(id)arg1 ;
-(void)_applyTableViewMetricsToContentDescriptor:(id)arg1 ;
-(MusicLibrarySearchResultsEntityProvider *)entityProvider;
@end

