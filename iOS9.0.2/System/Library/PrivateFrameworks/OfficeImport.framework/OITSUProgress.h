/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface OITSUProgress : NSObject {

	NSMutableSet* mProgressObservers;
	NSObject*<OS_dispatch_queue> mProgressObserversQueue;
	NSString* mMessage;

}

@property (readonly) double value; 
@property (readonly) double maxValue; 
@property (getter=isIndeterminate,readonly) char indeterminate; 
@property (copy) NSString * message; 
-(double)maxValue;
-(void)dealloc;
-(id)init;
-(double)value;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(char)isIndeterminate;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)protected_progressDidChange;
-(char)protected_hasProgressObservers;
-(double)protected_minProgressObserverValueInterval;
@end

