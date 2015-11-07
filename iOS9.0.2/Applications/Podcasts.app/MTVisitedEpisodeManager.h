/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@class NSMutableSet;

@interface MTVisitedEpisodeManager : MTSingleton {

	NSMutableSet* _startedEpisodeUuids;
	NSMutableSet* _endedEpisodeUuids;

}

@property (nonatomic,retain) NSMutableSet * startedEpisodeUuids;              //@synthesize startedEpisodeUuids=_startedEpisodeUuids - In the implementation block
@property (nonatomic,retain) NSMutableSet * endedEpisodeUuids;                //@synthesize endedEpisodeUuids=_endedEpisodeUuids - In the implementation block
-(void)flushVisitedEpisodes;
-(void)startVisitingEpisode:(id)arg1 ;
-(unsigned)countOfStartedEpisodes;
-(void)setStartedEpisodeUuids:(NSMutableSet *)arg1 ;
-(void)setEndedEpisodeUuids:(NSMutableSet *)arg1 ;
-(NSMutableSet *)endedEpisodeUuids;
-(NSMutableSet *)startedEpisodeUuids;
-(void)endVisitingEpisode:(id)arg1 ;
-(char)hasEndedVisitingEpisode:(id)arg1 ;
-(unsigned)countOfEndedEpisodes;
-(id)init;
@end

