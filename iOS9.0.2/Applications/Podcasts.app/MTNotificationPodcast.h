/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray;

@interface MTNotificationPodcast : NSObject {

	NSMutableArray* _episodes;
	NSString* _uuid;
	NSString* _title;

}

@property (nonatomic,retain) NSString * uuid;                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * episodes; 
-(NSArray *)episodes;
-(id)addEpisodeWithTitle:(id)arg1 uuid:(id)arg2 ;
-(void)addEpisode:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
@end

