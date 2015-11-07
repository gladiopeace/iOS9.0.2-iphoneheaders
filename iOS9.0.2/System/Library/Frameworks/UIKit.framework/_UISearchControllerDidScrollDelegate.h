/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIScrollNotification.h>

@protocol _UIScrollNotification;
@class UIScrollView, NSString;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollNotification> {

	id<_UIScrollNotification> _controller;
	UIScrollView* _scrollView;

}

@property (assign,nonatomic,__weak) id<_UIScrollNotification> controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                         //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)_updateBackdropMaskViewsInScrollView:(id)arg1 ;
-(void)_didScroll;
-(id<_UIScrollNotification>)controller;
-(void)setController:(id<_UIScrollNotification>)arg1 ;
@end

