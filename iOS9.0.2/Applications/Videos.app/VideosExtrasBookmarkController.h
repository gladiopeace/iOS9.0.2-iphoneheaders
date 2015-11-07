/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SBCPlaybackPositionDomain, SBCPlaybackPositionValueService, NSMutableDictionary;

@interface VideosExtrasBookmarkController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	SBCPlaybackPositionDomain* _domain;
	SBCPlaybackPositionValueService* _extrasService;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _updateTimeForEntities;

}
+(id)sharedInstance;
-(char)pushBookmarkForAsset:(id)arg1 bookmarkTime:(double)arg2 playedToNominalLength:(char)arg3 ;
-(void)pullBookmarksForAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_loadAllBookmarksWithRemainingAssets:(id)arg1 bookmarkTimes:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_ubiquitousIdentifierForAsset:(id)arg1 ;
-(id)init;
@end

