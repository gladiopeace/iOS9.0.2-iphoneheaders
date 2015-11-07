/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMapTable, NSArray;

@interface GKRuleSystem : NSObject {

	NSMutableDictionary* _state;
	NSMutableArray* _rules;
	NSMutableArray* _agenda;
	NSMutableArray* _toBeExecuted;
	NSMutableArray* _executed;
	NSMapTable* _gradeByFact;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain,readonly) NSArray * rules; 
@property (nonatomic,retain,readonly) NSArray * agenda; 
@property (nonatomic,retain,readonly) NSArray * executed; 
@property (nonatomic,retain,readonly) NSArray * facts; 
-(void)_addRuleToAgenda:(id)arg1 ;
-(void)assertFact:(id)arg1 grade:(float)arg2 ;
-(void)retractFact:(id)arg1 grade:(float)arg2 ;
-(NSArray *)agenda;
-(NSArray *)executed;
-(void)addRulesFromArray:(id)arg1 ;
-(void)removeAllRules;
-(NSArray *)facts;
-(float)gradeForFact:(id)arg1 ;
-(float)minimumGradeForFacts:(id)arg1 ;
-(float)maximumGradeForFacts:(id)arg1 ;
-(void)assertFact:(id)arg1 ;
-(void)retractFact:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)state;
-(void)reset;
-(void)evaluate;
-(void)addRule:(id)arg1 ;
-(NSArray *)rules;
@end

