/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@class NSError;

@interface MLDDAAPImportOperation : MLDImportOperation {

	ML3ImportSession* _importSession;
	NSError* _importError;
	shared_ptr<DAAPParserDelegate>* _delegate;
	unsigned char _updateType;
	long long _totalTrackCount;
	long long _totalContainerCount;
	long long _processedTrackCount;
	long long _processedContainerCount;
	BOOL _importSessionStarted;
	int _sourceType;

}
-(char)performImportOfSourceType:(int)arg1 usingConnection:(id)arg2 ;
-(shared_ptr<MLDDAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 ;
-(shared_ptr<MLDDAAPImportItem>*)containerImportItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 ;
-(void)updateImportProgress:(float)arg1 ;
-(void)_logImportDataFilePath:(id)arg1 forSourceType:(int)arg2 isPlaylist:(char)arg3 ;
-(char)_importDAAPPayloadFromFile:(id)arg1 shouldProcessPlaylists:(char)arg2 ;
-(char)_startImportSessionIfNeeded;
-(void)_finishParsingWithError:(id)arg1 ;
-(char)_processUpdateType:(unsigned char)arg1 ;
-(char)_processTrackItemCount:(int)arg1 ;
-(char)_processTrackElement:(shared_ptr<DAAP::Element>*)arg1 ;
-(char)_processDeletedTrackId:(long long)arg1 ;
-(char)_processContainerItemCount:(int)arg1 ;
-(char)_processContainerElement:(shared_ptr<DAAP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 ;
-(char)_processDeletedContainerId:(long long)arg1 ;
-(void)dealloc;
@end

