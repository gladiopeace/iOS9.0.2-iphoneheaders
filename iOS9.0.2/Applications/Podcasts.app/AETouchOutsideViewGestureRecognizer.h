/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSMutableSet, NSString;

@interface AETouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	UIView* mWatchView;
	NSMutableSet* mTargets;

}

@property (assign,nonatomic) UIView * watchView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)watchView;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 watchView:(id)arg3 ;
-(void)setWatchView:(UIView *)arg1 ;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
@end

