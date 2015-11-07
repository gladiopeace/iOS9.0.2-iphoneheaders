/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface WeekDayInitialsHeaderView : UIView {

	NSArray* _dayFrames;
	char _useCustomDayFrames;

}

@property (assign,nonatomic) char useCustomDayFrames;              //@synthesize useCustomDayFrames=_useCustomDayFrames - In the implementation block
-(void)setDayFrames:(id)arg1 ;
-(id)dayFrames;
-(id)weekdayAbbreviations;
-(id)dayInitialFont;
-(int)dayInitialTextAlignment;
-(float)dayFrameRightInset;
-(id)_automaticDayFrames;
-(void)setUseCustomDayFrames:(char)arg1 ;
-(char)useCustomDayFrames;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(float)bottomPadding;
@end

