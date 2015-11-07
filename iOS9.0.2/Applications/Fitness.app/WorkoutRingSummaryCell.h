/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSDateFormatter, UILabel, UIImageView, UIImage, FIUIMetricColors;

@interface WorkoutRingSummaryCell : UITableViewCell {

	NSDateFormatter* _timeFormatter;
	UILabel* _descriptionLabel;
	UILabel* _goalLabel;
	UILabel* _timeLabel;
	float _topMargin;
	UIImageView* _ringImageView;
	UIImage* _thirdPartyAppIconImage;
	FIUIMetricColors* _colors;

}

@property (nonatomic,retain) FIUIMetricColors * colors;              //@synthesize colors=_colors - In the implementation block
-(void)_setRingImageView:(id)arg1 ;
-(void)setRingColors:(id)arg1 percent:(double)arg2 ;
-(void)setGoalCompletionFactor:(double)arg1 ;
-(void)setTimeStringWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)setColors:(FIUIMetricColors *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FIUIMetricColors *)colors;
-(void)setDescriptionString:(id)arg1 ;
@end

