/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICCreateContainerRequest : ICRequest
+(id)requestWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 playlistProperties:(id)arg3 trackList:(id)arg4 ;
-(id)_bodyDataForDatabaseRevision:(unsigned)arg1 playlistProperties:(id)arg2 trackList:(id)arg3 ;
-(id)initWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 playlistProperties:(id)arg3 trackList:(id)arg4 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

