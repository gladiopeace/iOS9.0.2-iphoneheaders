/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Audio.qldisplay/Audio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UISlider;

@interface QLAudioScrubberViewController : UIViewController {

	UILabel* _totalTimeLabel;
	UILabel* _currentTimeLabel;
	UISlider* _timeScrubber;
	float _totalTime;
	float _currentTime;
	/*^block*/id _pauseCallback;
	/*^block*/id _seekToTime;

}

@property (assign,nonatomic) float totalTime;                //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) float currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,copy) id pauseCallback;                 //@synthesize pauseCallback=_pauseCallback - In the implementation block
@property (nonatomic,copy) id seekToTime;                    //@synthesize seekToTime=_seekToTime - In the implementation block
-(id)pauseCallback;
-(void)sliderChange;
-(void)sliderStart;
-(id)seekToTime;
-(void)setSeekToTime:(id)arg1 ;
-(void)setPauseCallback:(id)arg1 ;
-(void)setCurrentTime:(float)arg1 ;
-(float)currentTime;
-(void)viewWillAppear:(char)arg1 ;
-(float)totalTime;
-(void)setTotalTime:(float)arg1 ;
@end

