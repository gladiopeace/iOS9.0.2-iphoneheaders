/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSString;

@interface AlarmScheduleLayoutAttributes : UICollectionViewLayoutAttributes {

	NSString* _alarmId;
	int _day;
	char _active;
	char _showsTitle;
	NSString* _title;

}

@property (nonatomic,retain) NSString * alarmId;                       //@synthesize alarmId=_alarmId - In the implementation block
@property (assign,nonatomic) int day;                                  //@synthesize day=_day - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) char showsTitle;                          //@synthesize showsTitle=_showsTitle - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)isActive;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)setDay:(int)arg1 ;
-(int)day;
-(char)showsTitle;
-(void)setShowsTitle:(char)arg1 ;
-(NSString *)alarmId;
-(void)setAlarmId:(NSString *)arg1 ;
@end

