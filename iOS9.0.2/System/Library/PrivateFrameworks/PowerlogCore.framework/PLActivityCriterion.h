/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLActivityCriterionDelegate;
@interface PLActivityCriterion : NSObject {

	char _satisfied;
	id<PLActivityCriterionDelegate> _delegate;

}

@property (assign,nonatomic) char satisfied;                              //@synthesize satisfied=_satisfied - In the implementation block
@property (__weak) id<PLActivityCriterionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PLActivityCriterionDelegate>)arg1 ;
-(id)init;
-(id<PLActivityCriterionDelegate>)delegate;
-(void)didEnableActivity:(id)arg1 ;
-(void)didCompleteActivity:(id)arg1 ;
-(void)didInterruptActivity:(id)arg1 ;
-(void)didDisableActivity:(id)arg1 ;
-(void)setSatisfied:(char)arg1 ;
-(char)satisfied;
@end

