/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface _DKEventQuery : _DKQuery <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	NSArray* _eventStreams;
	/*^block*/id _resultsHandler;

}

@property (retain) NSArray * eventStreams;              //@synthesize eventStreams=_eventStreams - In the implementation block
@property (copy) id resultsHandler;                     //@synthesize resultsHandler=_resultsHandler - In the implementation block
+(char)supportsSecureCoding;
+(id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned)arg3 limit:(unsigned)arg4 sortDescriptors:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)handleResults:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 ;
-(void)executeUsingCoreDataStorage:(id)arg1 reponseQueue:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned)arg3 limit:(unsigned)arg4 sortDescriptors:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(NSArray *)eventStreams;
-(void)setEventStreams:(NSArray *)arg1 ;
-(id)resultsHandler;
-(void)setResultsHandler:(id)arg1 ;
@end

