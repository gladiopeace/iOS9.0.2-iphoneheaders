/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol QLScrubViewDataSource;
@class NSOperationQueue, NSMutableSet, NSMutableDictionary, NSMutableArray, QLThumbnailView, QLPageNumberView, NSString;

@interface QLScrubView : UIView <UIGestureRecognizerDelegate> {

	id<QLScrubViewDataSource> _dataSource;
	id _delegate;
	char _runOnMainThread;
	char _needsThumbLayout;
	float _thumbOrigin;
	float _thumbEnd;
	float _thumbHeight;
	int _pageCount;
	int _selectedPage;
	NSOperationQueue* _queue;
	NSMutableSet* _operations;
	NSMutableDictionary* _thumbViews;
	NSMutableArray* _visibleThumbIndexes;
	QLThumbnailView* _selectedThumbnailView;
	QLPageNumberView* _pageNumberLabel;
	float _topOffset;

}

@property (assign) id<QLScrubViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign) char runOnMainThread; 
@property (assign,nonatomic) float topOffset;                         //@synthesize topOffset=_topOffset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultWidth;
-(void)selectPageNumber:(int)arg1 ;
-(void)reloadThumbnails;
-(void)setRunOnMainThread:(char)arg1 ;
-(void)setTopOffset:(float)arg1 ;
-(void)panReceived:(id)arg1 ;
-(void)tapReceived:(id)arg1 ;
-(void)longTapReceived:(id)arg1 ;
-(void)_removeThumbviews;
-(void)_updateSelectedThumbnailView;
-(void)_notifyPageChanged;
-(void)_updatePageLabelPosition;
-(void)_notifyScrubingStarted;
-(void)_showPageLabel;
-(void)_handleSwipAtLocation:(CGPoint)arg1 ;
-(void)_notifyScrubingEnded;
-(void)_hidePageLabel;
-(float)topOffset;
-(CGRect)_thumbnailFrameForPageAtIndex:(int)arg1 ;
-(char)runOnMainThread;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id<QLScrubViewDataSource>)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<QLScrubViewDataSource>)dataSource;
-(id)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_cancelAllOperations;
@end

