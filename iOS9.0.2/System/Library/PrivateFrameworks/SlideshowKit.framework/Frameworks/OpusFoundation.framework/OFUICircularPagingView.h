/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OFUICircularPagingViewDelegate;
@class OFUICircularPagingViewController, UIScrollView, UIView, NSString;

@interface OFUICircularPagingView : OFUIView <UIScrollViewDelegate> {

	float _gapBetweenPages;
	OFUICircularPagingViewController* _circularPagingViewController;
	id<OFUICircularPagingViewDelegate> _delegate;
	UIScrollView* _scrollView;
	UIView* _previousPagingView;
	UIView* _currentPagingView;
	UIView* _nextPagingView;
	char _rotationInProgress;
	char _scrollViewIsMoving;

}

@property (assign,nonatomic) OFUICircularPagingViewController * circularPagingViewController;              //@synthesize circularPagingViewController=_circularPagingViewController - In the implementation block
@property (assign,nonatomic) id<OFUICircularPagingViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<OFUICircularPagingViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<OFUICircularPagingViewDelegate>)delegate;
-(void)didRotate;
-(void)commonInit;
-(void)setCircularPagingViewController:(OFUICircularPagingViewController *)arg1 ;
-(void)willAnimateRotation;
-(CGRect)_frameForScrollView;
-(CGRect)_frameForPageAtIndex:(unsigned)arg1 ;
-(id)pagingViewAtIndex:(unsigned)arg1 ;
-(OFUICircularPagingViewController *)circularPagingViewController;
@end

