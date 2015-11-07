/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class EKEventStore;


@protocol CalAssistantCommand <AFServiceCommand,NSObject>
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (assign,nonatomic) CalDatabase* database; 
@required
-(EKEventStore *)eventStore;
-(void)setEventStore:(id)arg1;
-(void)setDatabase:(CalDatabase*)arg1;
-(CalDatabase*)database;

@end

