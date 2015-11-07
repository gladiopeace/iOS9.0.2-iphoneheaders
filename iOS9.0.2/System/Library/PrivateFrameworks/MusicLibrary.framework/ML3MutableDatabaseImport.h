/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseImport.h>

@class NSString, NSData, NSFileHandle;

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (nonatomic,copy) NSString * libraryPath; 
@property (nonatomic,copy) NSData * trackData; 
@property (nonatomic,copy) NSData * playlistData; 
@property (nonatomic,retain) NSFileHandle * fileHandle; 
@property (nonatomic,copy) NSString * syncAnchor; 
@property (assign,getter=isResetSync,nonatomic) char resetSync; 
@property (assign,getter=isSagaEnabled,nonatomic) char sagaEnabled; 
@property (assign,nonatomic) long long storeAccountID; 
@property (assign,nonatomic) long long preferredVideoQuality; 
@property (assign,nonatomic) unsigned homeSharingBasePlaylistID; 
@property (assign,nonatomic) char tracksAreLibraryOwnedContent; 
@property (assign,nonatomic) char playlistsAreLibraryOwnedContent; 
@property (assign,getter=isPendingMatch,nonatomic) char pendingMatch; 
@property (assign,nonatomic) char isServerImport; 
@property (nonatomic,copy) NSString * syncLibraryID; 
-(void)setTracksAreLibraryOwnedContent:(char)arg1 ;
-(void)setPendingMatch:(char)arg1 ;
-(void)setPlaylistsAreLibraryOwnedContent:(char)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)setSyncLibraryID:(NSString *)arg1 ;
-(void)setLibraryPath:(NSString *)arg1 ;
-(void)setTrackData:(NSData *)arg1 ;
-(void)setPlaylistData:(NSData *)arg1 ;
-(void)setResetSync:(char)arg1 ;
-(void)setSagaEnabled:(char)arg1 ;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(void)setHomeSharingBasePlaylistID:(unsigned)arg1 ;
-(void)setIsServerImport:(char)arg1 ;
-(void)setSyncAnchor:(NSString *)arg1 ;
-(void)setStoreAccountID:(long long)arg1 ;
@end

