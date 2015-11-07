/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol MPArtworkDataSource, OS_dispatch_queue;
@class NSObject;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {

	id<MPArtworkDataSource> _completeMyCollectionArtworkDataSource;
	long long _currentRevision;
	NSObject*<OS_dispatch_queue> _queue;

}
+(char)_isGeniusEnabled;
+(id)_localizedGeniusErrorForError:(id)arg1 ;
+(id)_localizedCloudGeniusErrorForError:(id)arg1 ;
-(id)errorResolverForItem:(id)arg1 ;
-(id)completeMyCollectionArtworkDataSource;
-(id)initWithLibrary:(id)arg1 ;
-(char)isGeniusEnabled;
-(void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)releaseGeniusClusterPlaylist:(void*)arg1 ;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned)arg2 error:(id*)arg3 ;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned*)arg2 error:(id*)arg3 ;
-(void)updateEntitesToCurrentRevision;
-(char)supportsEntityChangeTrackingForMediaEntityType:(int)arg1 collectionGroupingType:(int)arg2 dataProviderClass:(out Class*)arg3 ;
-(void)_initInstanceVariableOnce;
-(void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)_currentRevision;
@end

