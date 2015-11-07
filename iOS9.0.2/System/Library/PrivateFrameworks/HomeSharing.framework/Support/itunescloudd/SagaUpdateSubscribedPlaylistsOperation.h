/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface SagaUpdateSubscribedPlaylistsOperation : CloudLibraryOperation {

	NSArray* _playlistSagaIDs;
	char _ignoreMinRefreshInterval;
	long long _requestReason;

}
-(id)initWithSubscribedPlaylistSagaIDs:(id)arg1 ignoreMinRefreshInterval:(char)arg2 requestReason:(long long)arg3 ;
-(void)main;
@end

