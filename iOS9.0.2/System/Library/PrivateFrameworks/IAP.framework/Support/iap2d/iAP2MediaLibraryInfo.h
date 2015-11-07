/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <iap2d/iap2d-Structs.h>
@class NSString, iAP2MediaLibrary, NSObject, NSMutableDictionary, iAP2Connection, NSArray;

@interface iAP2MediaLibraryInfo : NSObject {

	id mpMediaLibrary;
	NSString* anchor;
	iAP2MediaLibrary* context;
	NSObject*<OS_dispatch_queue> libraryUpdateQ;
	BOOL _enableLibraryUpdate;
	NSMutableDictionary* _dbUpdateList;
	NSObject*<OS_dispatch_semaphore> _updateWaitSem;
	iAP2Connection* _connection;
	NSMutableDictionary* _playlistContentTransferList;
	NSObject*<OS_dispatch_queue> _playlistContentUpdateQ;
	int _libraryType;
	NSString* _syncValidityPID;
	BOOL _sendHideNonLocal;
	BOOL _showCloudTracks;
	BOOL _showCloudTracksLastSent;
	BOOL _sendPlayAllSongsCapable;
	NSArray* _stationsGroupList;

}

@property (nonatomic,readonly) iAP2Connection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id mpMediaLibrary; 
@property (retain) NSString * anchor; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> libraryUpdateQ; 
@property (nonatomic,readonly) int libraryType;                                             //@synthesize libraryType=_libraryType - In the implementation block
@property (nonatomic,readonly) NSString * UIDString; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> updateWaitSem;              //@synthesize updateWaitSem=_updateWaitSem - In the implementation block
-(void)shuttingDown;
-(void)startSendingMediaLibraryUpdates:(id)arg1 ;
-(void)stopSendingMediaLibraryUpdates;
-(void)startMLPlaybackWithResume:(BOOL)arg1 ;
-(void)startPlaybackOfItems:(id)arg1 withFirst:(unsigned)arg2 ;
-(void)startPlaybackOfCollection:(unsigned long long)arg1 ofType:(unsigned char)arg2 withFirst:(unsigned)arg3 ;
-(void)startMLPlaybackOfAllSongs;
-(id)getPlaylistItems:(id)arg1 ;
-(id)_handlePlaylistContentForBuffID:(unsigned char)arg1 forEntify:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)updateWaitSem;
-(NSString *)UIDString;
-(BOOL)_isVisibleUpdate:(id)arg1 ;
-(BOOL)_sendOutMessage:(id)arg1 forAnchor:(id)arg2 withSemList:(id)arg3 fullUpdate:(BOOL)arg4 progress:(unsigned)arg5 outOf:(unsigned)arg6 ;
-(id)_handleMediaLibraryPlaylistUpdate:(id)arg1 forLibrary:(id)arg2 andMessage:(id)arg3 returnSem:(id*)arg4 success:(BOOL*)arg5 added:(BOOL*)arg6 ;
-(id)_handleMediaLibraryItemUpdate:(id)arg1 forLibrary:(id)arg2 andMessage:(id)arg3 success:(BOOL*)arg4 added:(BOOL*)arg5 forceDelete:(BOOL)arg6 ;
-(void)_beginRadioLibraryUpdates;
-(id)_beginMediaLibraryUpdatesWithAnchor:(id)arg1 validity:(id)arg2 ;
-(void)_mediaLibraryChanged:(id)arg1 ;
-(void)_radioLibraryChanged:(id)arg1 ;
-(void)_registerForMPNotifications;
-(id)_getMediaItemForPID:(unsigned long long)arg1 ;
-(void)playWithQuery:(id)arg1 andFirstItem:(id)arg2 ;
-(void)_startPlaybackOfRadioStation:(unsigned long long)arg1 ;
-(id)_handleMediaLibraryCollectionUpdate:(id)arg1 forLibrary:(id)arg2 andMessage:(id)arg3 success:(BOOL*)arg4 added:(BOOL*)arg5 ;
-(id)initWithMediaLibrary:(id)arg1 Context:(id)arg2 LibraryType:(int)arg3 ;
-(void)handlePlaylistContentSent:(iAP2FileTransfer_st*)arg1 ;
-(id)mpMediaLibrary;
-(NSObject*<OS_dispatch_queue>)libraryUpdateQ;
-(int)libraryType;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(iAP2Connection *)connection;
@end

