/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVMetadataItem, NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {

	AVMetadataItem* _metadataItem;

}

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSString * keyspace; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) NSDictionary * allMetadata; 
-(id)_initWithMetadataItem:(id)arg1 ;
-(NSString *)keyspace;
-(NSDictionary *)allMetadata;
-(id)init;
-(double)timestamp;
-(NSString *)key;
-(id)value;
@end

