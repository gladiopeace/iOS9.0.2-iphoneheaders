/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _ATXScoreInterpreter : NSObject {

	NSMutableDictionary* _varPrograms;
	id _subscoreKeys;

}
-(void)_compileRoot:(id)arg1 ;
-(double)_evalVariable:(id)arg1 withCtx:(id)arg2 ;
-(id)initWithParseRoot:(id)arg1 ;
-(id)evaluateWithInputScores:(id)arg1 ;
@end

