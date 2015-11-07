/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlayEvent.h>

@class NSDate, NSString, NSData, NSDictionary;

@interface RadioMutablePlayEvent : RadioPlayEvent

@property (nonatomic,retain) NSDate * datePlayed; 
@property (assign,nonatomic) int endReason; 
@property (assign,nonatomic) double endTimeInTrack; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (assign,nonatomic) double startTimeInTrack; 
@property (assign,nonatomic) long long storeID; 
@property (nonatomic,copy) NSData * timedMetadata; 
@property (nonatomic,copy) NSDictionary * trackInfo; 
@property (assign,nonatomic) int type; 
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDatePlayed:(NSDate *)arg1 ;
-(void)setEndReason:(int)arg1 ;
-(void)setEndTimeInTrack:(double)arg1 ;
-(void)setStartTimeInTrack:(double)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSDictionary *)arg1 ;
@end

