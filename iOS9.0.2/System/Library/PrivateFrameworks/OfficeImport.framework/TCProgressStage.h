/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, TCProgressContext;

@interface TCProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	NSString* m_name;
	TCProgressStage* m_parentStage;
	TCProgressContext* m_context;

}
-(void)dealloc;
-(void)setProgress:(double)arg1 ;
-(void)end;
-(id)initRootStageInContext:(id)arg1 ;
-(id)parentStage;
-(void)advanceProgress:(double)arg1 ;
-(double)currentPosition;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4 ;
-(id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4 ;
@end

