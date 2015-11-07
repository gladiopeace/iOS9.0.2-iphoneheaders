/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/CloudTabItemViewDelegate.h>
#import <MobileSafari/ViewReuseManagerDelegate.h>

@protocol CloudTabTableDelegate;
@class WBSCloudTabDevice, CloudTabHeaderView, ViewReuseManager, WBSCloudTab, NSString;

@interface CloudTabTable : UIView <CloudTabItemViewDelegate, ViewReuseManagerDelegate> {

	int _style;
	WBSCloudTabDevice* _device;
	CloudTabHeaderView* _headerView;
	unsigned _indexOfFocusedTab;
	ViewReuseManager* _itemViewReuseManager;
	NSRange _trackedItemViewRange;
	id<CloudTabTableDelegate> _delegate;
	WBSCloudTab* _focusedTab;
	float _offsetAboveFocusedTab;
	float _offsetBelowFocusedTab;
	/*^block*/id _layoutAnimator;
	CGRect _visibleRect;

}

@property (assign,nonatomic,__weak) id<CloudTabTableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                     //@synthesize visibleRect=_visibleRect - In the implementation block
@property (nonatomic,retain) WBSCloudTab * focusedTab;                               //@synthesize focusedTab=_focusedTab - In the implementation block
@property (assign,nonatomic) float offsetAboveFocusedTab;                            //@synthesize offsetAboveFocusedTab=_offsetAboveFocusedTab - In the implementation block
@property (assign,nonatomic) float offsetBelowFocusedTab;                            //@synthesize offsetBelowFocusedTab=_offsetBelowFocusedTab - In the implementation block
@property (nonatomic,copy) id layoutAnimator;                                        //@synthesize layoutAnimator=_layoutAnimator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)_rectForItemAtIndex:(unsigned)arg1 ;
-(void)_layoutItemView:(id)arg1 representingItemAtIndex:(unsigned)arg2 ;
-(void)_didSelectItemView:(id)arg1 ;
-(char)_shouldShowSeparatorForItemViewAtIndex:(unsigned)arg1 ;
-(void)cloudTabItemViewDidStartEditing:(id)arg1 ;
-(void)cloudTabItemViewDidFinishEditing:(id)arg1 ;
-(void)cloudTabItemViewDeleteButtonWasTapped:(id)arg1 ;
-(void)cloudTabItemViewHighlightStateDidChange:(id)arg1 ;
-(void)viewReuseManager:(id)arg1 willRecycleView:(id)arg2 ;
-(void)viewReuseManager:(id)arg1 prepareView:(id)arg2 toRepresentObjectAtIndex:(unsigned)arg3 ;
-(id)initWithDevice:(id)arg1 style:(int)arg2 ;
-(void)setFocusedTab:(WBSCloudTab *)arg1 ;
-(void)setOffsetAboveFocusedTab:(float)arg1 ;
-(void)setOffsetBelowFocusedTab:(float)arg1 ;
-(CGRect)rectForTab:(id)arg1 ;
-(WBSCloudTab *)focusedTab;
-(float)offsetAboveFocusedTab;
-(float)offsetBelowFocusedTab;
-(id)layoutAnimator;
-(void)setLayoutAnimator:(id)arg1 ;
-(void)setDelegate:(id<CloudTabTableDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CloudTabTableDelegate>)delegate;
-(CGRect)visibleRect;
-(void)setVisibleRect:(CGRect)arg1 ;
-(NSRange)_visibleItemRange;
@end

