/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol SymptomAdditionalProtocol;
@class NSMutableDictionary, NSString;

@interface SimpleRuleCondition : NSObject <ConfigurableObjectProtocol> {

	NSMutableDictionary* _resetSources;
	NSString* _conditionName;
	int _conditionMinCount;
	int _conditionType;
	NSString* _conditionPrevSymptom;
	int _conditionMaxAge;
	int _conditionFlags;
	NSString* _conditionStringID;
	int _conditionStringLength;
	id<SymptomAdditionalProtocol> _additionalHandler;
	SEL _additionalSelector;

}

@property (nonatomic,retain) NSString * conditionName;                                     //@synthesize conditionName=_conditionName - In the implementation block
@property (assign,nonatomic) int conditionMinCount;                                        //@synthesize conditionMinCount=_conditionMinCount - In the implementation block
@property (assign,nonatomic) int conditionType;                                            //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,retain) NSString * conditionPrevSymptom;                              //@synthesize conditionPrevSymptom=_conditionPrevSymptom - In the implementation block
@property (assign,nonatomic) int conditionMaxAge;                                          //@synthesize conditionMaxAge=_conditionMaxAge - In the implementation block
@property (assign,nonatomic) int conditionFlags;                                           //@synthesize conditionFlags=_conditionFlags - In the implementation block
@property (nonatomic,retain) NSString * conditionStringID;                                 //@synthesize conditionStringID=_conditionStringID - In the implementation block
@property (assign,nonatomic) int conditionStringLength;                                    //@synthesize conditionStringLength=_conditionStringLength - In the implementation block
@property (nonatomic,retain) id<SymptomAdditionalProtocol> additionalHandler;              //@synthesize additionalHandler=_additionalHandler - In the implementation block
@property (assign,nonatomic) SEL additionalSelector;                                       //@synthesize additionalSelector=_additionalSelector - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithName:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
-(void)setConditionType:(int)arg1 ;
-(NSString *)description;
-(void)_reset:(id)arg1 ;
-(int)conditionType;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)setConditionName:(NSString *)arg1 ;
-(BOOL)evaluatePrevSymptom:(id)arg1 showingWorkAt:(id)arg2 ;
-(BOOL)evaluateHandler:(id)arg1 showingWorkAt:(id)arg2 ;
-(BOOL)evaluate:(id)arg1 showingWorkAt:(id)arg2 ;
-(NSString *)conditionName;
-(int)conditionMinCount;
-(void)setConditionMinCount:(int)arg1 ;
-(NSString *)conditionPrevSymptom;
-(void)setConditionPrevSymptom:(NSString *)arg1 ;
-(int)conditionMaxAge;
-(void)setConditionMaxAge:(int)arg1 ;
-(int)conditionFlags;
-(void)setConditionFlags:(int)arg1 ;
-(NSString *)conditionStringID;
-(void)setConditionStringID:(NSString *)arg1 ;
-(int)conditionStringLength;
-(void)setConditionStringLength:(int)arg1 ;
-(id<SymptomAdditionalProtocol>)additionalHandler;
-(void)setAdditionalHandler:(id<SymptomAdditionalProtocol>)arg1 ;
-(SEL)additionalSelector;
-(void)setAdditionalSelector:(SEL)arg1 ;
@end

