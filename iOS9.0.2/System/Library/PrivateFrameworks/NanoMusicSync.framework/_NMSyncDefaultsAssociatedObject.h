/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject {

	MPMediaPlaylist* _assetSyncPlaylist;

}

@property (nonatomic,retain) MPMediaPlaylist * assetSyncPlaylist;              //@synthesize assetSyncPlaylist=_assetSyncPlaylist - In the implementation block
-(void)dealloc;
-(id)init;
-(MPMediaPlaylist *)assetSyncPlaylist;
-(void)setAssetSyncPlaylist:(MPMediaPlaylist *)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
@end

