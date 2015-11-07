/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSLookupItem, NSData, NSDictionary;

@interface ML3StoreItemPlaylistData : NSObject {

	SSLookupItem* _lookupItem;
	NSData* _playlistData;
	NSDictionary* _parsedPlaylistImportProperties;

}

@property (nonatomic,readonly) NSData * playlistData; 
@property (nonatomic,readonly) NSDictionary * parsedPlaylistImportProperties; 
-(id)initWithLookupItem:(id)arg1 ;
-(NSData *)playlistData;
-(NSDictionary *)parsedPlaylistImportProperties;
-(id)_playlistPropertiesForLookupItem:(id)arg1 ;
-(id)_playlistPropertiesFromPlaylistData:(id)arg1 ;
-(id)initWithPlaylistData:(id)arg1 ;
@end

