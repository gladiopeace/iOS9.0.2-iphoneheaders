/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKObjectToOneRelation, NSString, NSURL, NSDate, EKStructuredLocation, EKObject, EKCalendar, EKCalendarItem, NSArray;

@interface EKAlarm : EKObject <NSCopying> {

	EKObjectToOneRelation* _locationRelation;
	int _type;
	NSString* _emailAddress;
	NSString* _soundName;
	NSURL* _url;

}

@property (assign,nonatomic) double relativeOffset; 
@property (nonatomic,copy) NSDate * absoluteDate; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (assign,nonatomic) int proximity; 
@property (nonatomic,readonly) int type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                 //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * soundName;                                    //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,copy) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) char isAbsolute; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) EKObject * owner; 
@property (nonatomic,retain) EKCalendar * calendarOwner; 
@property (nonatomic,retain) EKCalendarItem * calendarItemOwner; 
@property (nonatomic,copy) NSDate * acknowledgedDate; 
@property (nonatomic,readonly) NSString * externalID; 
@property (assign,getter=isDefaultAlarm,nonatomic) char defaultAlarm; 
@property (nonatomic,retain) EKAlarm * originalAlarm; 
@property (nonatomic,copy) NSArray * snoozedAlarms; 
@property (nonatomic,readonly) char isSnoozedAlarm; 
@property (nonatomic,retain) EKObjectToOneRelation * locationRelation;              //@synthesize locationRelation=_locationRelation - In the implementation block
+(int)maxPublicProximity;
+(int)_currentAuthorizationStatus;
+(char)areLocationsAllowedWithAuthorizationStatus:(int)arg1 ;
+(char)areLocationsAvailable;
+(char)areLocationsAllowed;
+(char)areLocationsCurrentlyEnabled;
+(double)defaultGeofencedReminderRadius;
+(id)alarmWithAbsoluteDate:(id)arg1 ;
+(id)alarmWithRelativeOffset:(double)arg1 ;
-(id)_localizedDescription:(char)arg1 isAllDay:(char)arg2 ;
-(id)longLocalizedDescription;
-(id)longLocalizedAllDayDescription;
-(id)localizedAllDayDescription;
-(id)localizedDescription;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(char)rebase;
-(id)_locationRelation;
-(char)isSnoozedAlarm;
-(NSArray *)snoozedAlarms;
-(EKCalendarItem *)calendarItemOwner;
-(EKAlarm *)originalAlarm;
-(void)setAcknowledgedDate:(NSDate *)arg1 ;
-(void)setOriginalAlarm:(EKAlarm *)arg1 ;
-(NSDate *)acknowledgedDate;
-(EKCalendar *)calendarOwner;
-(char)isDefaultAlarm;
-(void)setDefaultAlarm:(char)arg1 ;
-(void)setSnoozedAlarms:(NSArray *)arg1 ;
-(id)initWithAbsoluteDate:(id)arg1 ;
-(id)initWithRelativeOffset:(double)arg1 ;
-(id)_originalAlarmRelation;
-(id)_snoozedAlarmsRelation;
-(id)ownerUUID;
-(void)addSnoozedAlarm:(id)arg1 ;
-(void)removeSnoozedAlarm:(id)arg1 ;
-(EKObjectToOneRelation *)locationRelation;
-(void)setLocationRelation:(EKObjectToOneRelation *)arg1 ;
-(EKStructuredLocation *)structuredLocation;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(NSString *)externalID;
-(char)isAbsolute;
-(NSDate *)absoluteDate;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(void)setRelativeOffset:(double)arg1 ;
-(double)relativeOffset;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)compare:(id)arg1 ;
-(NSURL *)url;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)soundName;
-(char)validate:(id*)arg1 ;
-(EKObject *)owner;
-(int)proximity;
-(void)setProximity:(int)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

