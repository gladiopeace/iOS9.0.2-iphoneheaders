/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetRecommendation/_DRTopicInterestModeling.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, _DRTopicInterestSummary, NSObject;

@interface _DRInMemoryTopicInterestModel : NSObject <_DRTopicInterestModeling> {

	NSMutableArray* _topics;
	_DRTopicInterestSummary* _summary;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)predicateForTopicInteractionsBefore:(id)arg1 ;
+(id)predicateForTopicsWithPrefix:(id)arg1 ;
+(id)predicateForTopicInteractionsAfter:(id)arg1 ;
-(void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2 ;
-(void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2 ;
-(void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2 ;
-(id)computeSummaryWithFilter:(id)arg1 ;
-(void)enumerateTopicCountsWithFilter:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)purgeEntriesEarlierThanDate:(id)arg1 ;
-(id)init;
@end

