/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNForkJoinResultReportingStrategy.h>

@class NSMutableArray, NSString;

@interface _CNForkJoinWhenCompleteResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy> {

	NSMutableArray* _results;
	unsigned _uncompletedObservableCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned)arg2 observer:(id)arg3 ;
-(void)observableAtIndex:(unsigned)arg1 didCompleteForObserver:(id)arg2 ;
@end

