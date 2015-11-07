/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@class NSMutableDictionary;

@interface MLDITunesSyncImportOperation : MLDImportOperation {

	char _sagaIsEnabled;
	char _resetSync;
	NSMutableDictionary* _cachedPIDToFilePathMap;
	NSMutableDictionary* _cachedPIDToLocationPropertyMap;
	NSMutableDictionary* _cachedSyncIDsToPIDsMap;
	long long _devicePrimaryContainer;

}
-(unsigned)importSource;
-(char)_performImportWithTransaction:(id)arg1 ;
-(char)_processSyncOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_performImportOfTrackData:(id)arg1 WithTransaction:(id)arg2 ;
-(char)_performImportFromPlistFilesWithTransaction:(id)arg1 ;
-(id)_syncPlistFiles;
-(id)_syncOperationsFromPlistFile:(id)arg1 ;
-(void)_recoverExistingAsset:(id)arg1 forTrackId:(long long)arg2 ;
-(char)_processInsertTrackOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processUpdateTrackOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processDeleteTrackOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processInsertPlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processUpdatePlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processDeletePlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processUpdateDBInfoOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(id)_dbInfoValuesForStep:(id)arg1 ;
-(void)_processGeniusConfigPlist:(id)arg1 ;
-(void)main;
@end

