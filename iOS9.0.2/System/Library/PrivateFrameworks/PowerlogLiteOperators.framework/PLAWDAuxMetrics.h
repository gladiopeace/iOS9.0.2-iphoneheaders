/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLOperator, NSMutableSet;

@interface PLAWDAuxMetrics : NSObject {

	PLOperator* _operator;
	NSMutableSet* _runningMetrics;

}

@property (__weak) PLOperator * operator;                                //@synthesize operator=_operator - In the implementation block
@property (nonatomic,retain) NSMutableSet * runningMetrics;              //@synthesize runningMetrics=_runningMetrics - In the implementation block
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
-(id)initWithOperator:(id)arg1 ;
-(NSMutableSet *)runningMetrics;
-(PLOperator *)operator;
-(void)resetTableWithEntryKey:(id)arg1 ;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(char)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)handleChargerChangeWithState:(char)arg1 withDate:(id)arg2 ;
-(void)setOperator:(PLOperator *)arg1 ;
-(void)setRunningMetrics:(NSMutableSet *)arg1 ;
-(char)doesInterfereWithChargerWithStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(double)getRailEnergyWithEntry:(id)arg1 withFilter:(id)arg2 isRailForward:(char)arg3 ;
-(char)dropFirstEntryReceived:(id)arg1 usingFilter:(id)arg2 andStartTime:(id)arg3 ;
@end

