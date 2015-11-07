/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MZUniversalPlaybackPositionMediaItem.h>

@class NSDictionary, MTEpisode, NSString;

@interface MTUniversalPlaybackPositionMediaItem : NSObject <MZUniversalPlaybackPositionMediaItem> {

	NSDictionary* _mediaItemDictionary;
	MTEpisode* _episode;

}

@property (nonatomic,retain) NSDictionary * mediaItemDictionary;              //@synthesize mediaItemDictionary=_mediaItemDictionary - In the implementation block
@property (nonatomic,retain) MTEpisode * episode;                             //@synthesize episode=_episode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTEpisode *)episode;
-(void)setEpisode:(MTEpisode *)arg1 ;
-(void)populateEpisodeDictionary;
-(NSDictionary *)mediaItemDictionary;
-(void)setMediaItemDictionary:(NSDictionary *)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSString *)description;
@end

