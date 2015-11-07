/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString;

@interface FMFEventDeleteCommand : FMFBaseCmd {

	NSString* _eventId;

}

@property (nonatomic,copy) NSString * eventId;              //@synthesize eventId=_eventId - In the implementation block
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)didSucceedNotification;
-(id)didFailNotification;
-(id)pathSuffix;
-(id)initWithEventId:(id)arg1 ;
-(id)jsonBodyDictionary;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
@end

