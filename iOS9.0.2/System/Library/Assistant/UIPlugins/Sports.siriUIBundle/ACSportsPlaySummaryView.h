/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, SiriUIKeyline;

@interface ACSportsPlaySummaryView : UIView {

	UILabel* _goalTimeLabel;
	UILabel* _goalScorerLabel;
	char _isHome;
	NSString* _goalTime;
	NSString* _goalScorer;
	SiriUIKeyline* _leftKeyline;
	SiriUIKeyline* _rightKeyline;

}

@property (nonatomic,retain) NSString * goalTime;                       //@synthesize goalTime=_goalTime - In the implementation block
@property (nonatomic,retain) NSString * goalScorer;                     //@synthesize goalScorer=_goalScorer - In the implementation block
@property (nonatomic,retain) SiriUIKeyline * leftKeyline;               //@synthesize leftKeyline=_leftKeyline - In the implementation block
@property (nonatomic,retain) SiriUIKeyline * rightKeyline;              //@synthesize rightKeyline=_rightKeyline - In the implementation block
@property (assign,nonatomic) char isHome;                               //@synthesize isHome=_isHome - In the implementation block
-(void)setLeftKeyline:(SiriUIKeyline *)arg1 ;
-(SiriUIKeyline *)leftKeyline;
-(NSString *)goalScorer;
-(void)setRightKeyline:(SiriUIKeyline *)arg1 ;
-(SiriUIKeyline *)rightKeyline;
-(void)setGoalScorer:(NSString *)arg1 ;
-(char)isHome;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)goalTime;
-(void)setGoalTime:(NSString *)arg1 ;
-(void)setIsHome:(char)arg1 ;
@end

