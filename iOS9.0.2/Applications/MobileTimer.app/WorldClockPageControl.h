/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIPageControl.h>

@class UIImage;

@interface WorldClockPageControl : UIPageControl {

	UIImage* _indicator;
	UIImage* _currentIndicator;

}
-(id)initWithFrame:(CGRect)arg1 useNeutralColor:(char)arg2 ;
-(id)_pageIndicatorImageForPage:(int)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(int)arg1 ;
@end

