/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UICollectionView.h>

@class UIRefreshControl, NSIndexPath, UIPanGestureRecognizer;

@interface MTCollectionView : UICollectionView {

	char _editing;
	char _disableRefreshControlWhileEditing;
	char _lockContentOffset;
	UIRefreshControl* _refreshControl;
	NSIndexPath* _swipedCellIndexPath;
	UIPanGestureRecognizer* _swipeGesture;

}

@property (assign,nonatomic) id<MTCollectionViewDelegate> delegate; 
@property (nonatomic,readonly) UIEdgeInsets appliedInsets; 
@property (nonatomic,readonly) CGPoint appliedContentOffset; 
@property (assign,getter=isEditing,nonatomic) char editing;                       //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                   //@synthesize refreshControl=_refreshControl - In the implementation block
@property (assign,nonatomic) char disableRefreshControlWhileEditing;              //@synthesize disableRefreshControlWhileEditing=_disableRefreshControlWhileEditing - In the implementation block
@property (assign,nonatomic) char lockContentOffset;                              //@synthesize lockContentOffset=_lockContentOffset - In the implementation block
@property (nonatomic,retain) NSIndexPath * swipedCellIndexPath;                   //@synthesize swipedCellIndexPath=_swipedCellIndexPath - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * swipeGesture;               //@synthesize swipeGesture=_swipeGesture - In the implementation block
-(void)setSwipeGesture:(UIPanGestureRecognizer *)arg1 ;
-(void)swipeEnded:(id)arg1 ;
-(NSIndexPath *)swipedCellIndexPath;
-(void)swipeBegan:(id)arg1 ;
-(UIEdgeInsets)appliedInsets;
-(CGPoint)appliedContentOffset;
-(char)disableRefreshControlWhileEditing;
-(void)disablePullToRefresh;
-(void)enablePullToRefresh;
-(void)setDisableRefreshControlWhileEditing:(char)arg1 ;
-(void)updateRefreshEnabledState;
-(void)setSwipedCellIndexPath:(NSIndexPath *)arg1 ;
-(char)lockContentOffset;
-(void)setLockContentOffset:(char)arg1 ;
-(UIPanGestureRecognizer *)swipeGesture;
-(void)layoutSubviews;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(float)_rubberBandOffsetForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(char*)arg5 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(float)_offsetForRubberBandOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 ;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)_sendDidEndEditingForIndexPath:(id)arg1 ;
-(void)_sendWillBeginEditingForIndexPath:(id)arg1 ;
-(void)setEditing:(char)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
@end

