/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarAvailabilityResponseConsumer.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, NSArray, NSObject;

@interface DADClientCalendarAvailabilityResponseDelegate : DADClientDelegate <DAEventsCalendarAvailabilityResponseConsumer> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _ignoredEventID;
	NSArray* _addresses;
	id _requestID;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)performRequest;
-(void)calendarAvailabilityRequestFinishedWithError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ignoredEventID:(id)arg5 addresses:(id)arg6 ;
-(void)calendarAvailabilityRequestReturnedResults:(id)arg1 ;
@end

