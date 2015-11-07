/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject {

	MPAVItem* _item;
	NSString* _path;
	double _startTime;
	double _stopTime;

}

@property (nonatomic,readonly) MPAVItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double stopTime;                //@synthesize stopTime=_stopTime - In the implementation block
-(double)stopTime;
-(id)initWithMPAVItem:(id)arg1 ;
-(void)setStopTime:(double)arg1 ;
-(id)init;
-(MPAVItem *)item;
-(void)setStartTime:(double)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(double)startTime;
@end

