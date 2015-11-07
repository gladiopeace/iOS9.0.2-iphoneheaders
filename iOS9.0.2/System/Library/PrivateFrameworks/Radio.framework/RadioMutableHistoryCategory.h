/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioHistoryCategory.h>

@class NSString, NSArray;

@interface RadioMutableHistoryCategory : RadioHistoryCategory

@property (nonatomic,copy) NSString * categoryDescription; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@property (assign,nonatomic) int type; 
-(void)setName:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setCategoryDescription:(NSString *)arg1 ;
@end

