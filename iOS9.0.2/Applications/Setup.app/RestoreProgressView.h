/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class UIProgressView, UILabel;

@interface RestoreProgressView : UIView {

	UIProgressView* _restoreProgressBar;
	UILabel* _titleLabel;
	UILabel* _timeRemainingLabel;

}
-(void)setTimeRemainingEstimateString:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
@end
