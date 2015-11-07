/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSISRowBody.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString;

@interface NSISLinearExpression : NSObject <NSISRowBody, NSFastEnumeration> {

	unsigned inline_capacity;
	unsigned var_count;
	double constant;
	SCD_Union_NS80* data;

}

@property (assign) double constant; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acquireFromPoolForUseCase:(int)arg1 ;
+(id)newExpressionWithCapacity:(unsigned)arg1 ;
-(void)verifyInternalIntegrity;
-(void)enumerateVariablesAndCoefficients:(/*^block*/id)arg1 ;
-(void)enumerateVariables:(/*^block*/id)arg1 ;
-(void)removeVariable:(id)arg1 ;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(double)coefficientForVariable:(id)arg1 ;
-(void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3 ;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(/*^block*/id)arg4 processVariableDroppedFromReceiver:(/*^block*/id)arg5 ;
-(id)copyContentsAndReturnToPool;
-(char)enumerateVariablesAndCoefficientsUntil:(/*^block*/id)arg1 ;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 ;
-(unsigned)variableCount;
-(id)initWithInlineCapacity:(unsigned)arg1 ;
-(void)setCoefficient:(double)arg1 forVariable:(id)arg2 ;
-(id)variablesArray;
-(void)returnToPool;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConstant:(double)arg1 ;
-(double)constant;
-(char)isConstant;
-(double)incrementConstant:(double)arg1 ;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 ;
-(void)addExpression:(id)arg1 times:(double)arg2 ;
-(void)scaleBy:(double)arg1 ;
@end

