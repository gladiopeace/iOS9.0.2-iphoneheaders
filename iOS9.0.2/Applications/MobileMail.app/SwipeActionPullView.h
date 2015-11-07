/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol SwipeActionPullViewDelegate;
@class NSMutableArray, NSArray, UIView, UIColor;

@interface SwipeActionPullView : UIView {

	NSMutableArray* _buttons;
	NSArray* _actions;
	UIView* _backgroundView;
	char _swipeActionsDidChange;
	float _openThreshold;
	float _confirmationThreshold;
	unsigned _cellEdge;
	unsigned _state;
	float _currentOffset;
	id<SwipeActionPullViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SwipeActionPullViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned cellEdge;                                   //@synthesize cellEdge=_cellEdge - In the implementation block
@property (nonatomic,readonly) unsigned primarySwipeAction; 
@property (nonatomic,readonly) float currentOffset;                                 //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) float openThreshold; 
@property (nonatomic,readonly) float confirmationThreshold; 
@property (nonatomic,readonly) UIColor * primaryActionColor; 
@property (nonatomic,readonly) char primaryActionIsDestructive; 
@property (nonatomic,readonly) char hasActions; 
@property (assign,nonatomic) unsigned state;                                        //@synthesize state=_state - In the implementation block
-(unsigned)_swipeActionCount;
-(unsigned)_actionAtIndex:(unsigned)arg1 ;
-(unsigned)primarySwipeAction;
-(float)_directionalMultiplier;
-(unsigned)cellEdge;
-(float)confirmationThreshold;
-(void)_tappedButton:(id)arg1 ;
-(void)_rebuildButtons;
-(id)_actionColorForSwipeAction:(unsigned)arg1 highlighted:(char)arg2 ;
-(unsigned)_nextStateForPullView;
-(char)_offsetMeetsConfirmationThreshold:(float)arg1 ;
-(id)initWithCellEdge:(unsigned)arg1 ;
-(char)primaryActionIsDestructive;
-(UIColor *)primaryActionColor;
-(float)openThreshold;
-(void)resetView;
-(void)configureWithSwipeActions:(id)arg1 ;
-(void)moveToOffset:(float)arg1 animated:(char)arg2 usingSpringWithStiffness:(float)arg3 initialVelocity:(float)arg4 ;
-(float)currentOffset;
-(void)setDelegate:(id<SwipeActionPullViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<SwipeActionPullViewDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(char)hasActions;
@end

