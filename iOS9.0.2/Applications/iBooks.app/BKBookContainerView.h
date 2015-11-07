/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, BKPanGestureRecognizer, BKSwipeGestureRecognizer, BKPageCurl, NSTimer, NSArray, NSString;

@interface BKBookContainerView : UIView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _leftTapRecognizer;
	UITapGestureRecognizer* _rightTapRecognizer;
	BKPanGestureRecognizer* _manualCurlRecognizer;
	BKSwipeGestureRecognizer* _previousPageSwipeRecognizer;
	BKSwipeGestureRecognizer* _nextPageSwipeRecognizer;
	BKSwipeGestureRecognizer* _previousChapterSwipeRecognizer;
	BKSwipeGestureRecognizer* _nextChapterSwipeRecognizer;
	CGPoint _startPoint;
	CGPoint _lastPoint;
	BKPageCurl* _manualCurl;
	char _trackingManualCurl;
	char _finishingManualCurl;
	char _startedWhilePreviousFinishing;
	int _pagesToTurnAfterFinishing;
	char _swipeBeforeManualCurl;
	int _swipeDirection;
	char _chapterTurn;
	NSTimer* _cancelLeftTapTimer;
	NSTimer* _cancelRightTapTimer;
	char _cancelLeftTap;
	char _cancelRightTap;
	char _internalGestureRecognizersSet;
	id _delegate;
	int _spineLocation;
	unsigned _externalGestureRecognizerCount;

}

@property (assign,nonatomic) id delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int spineLocation;                                    //@synthesize spineLocation=_spineLocation - In the implementation block
@property (nonatomic,readonly) char inManualCurl; 
@property (nonatomic,retain,readonly) NSArray * gestureRecognizers; 
@property (assign,nonatomic) char internalGestureRecognizersSet;                   //@synthesize internalGestureRecognizersSet=_internalGestureRecognizersSet - In the implementation block
@property (assign,nonatomic) unsigned externalGestureRecognizerCount;              //@synthesize externalGestureRecognizerCount=_externalGestureRecognizerCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)manualCurlGesture:(id)arg1 ;
-(void)setSpineLocation:(int)arg1 ;
-(char)unhandledClickAtPoint:(CGPoint)arg1 ;
-(void)leftPageGesture:(id)arg1 ;
-(void)rightPageGesture:(id)arg1 ;
-(void)leftChapterGesture:(id)arg1 ;
-(void)rightChapterGesture:(id)arg1 ;
-(void)setInternalGestureRecognizersSet:(char)arg1 ;
-(void)_turnPendingPagesAfterFinishing;
-(int)_tapLocationForTouchLocation:(CGPoint)arg1 ;
-(char)shouldHandleSwipeGesture:(id)arg1 ;
-(unsigned)externalGestureRecognizerCount;
-(char)_shouldIgnoreNavigationTouch:(id)arg1 ;
-(void)cancelTapTimer:(id)arg1 ;
-(char)_tapLocationIsInTextOverlapArea:(CGPoint)arg1 ;
-(char)internalGestureRecognizersSet;
-(void)setExternalGestureRecognizerCount:(unsigned)arg1 ;
-(void)manualCurlFinished:(id)arg1 ;
-(char)inManualCurl;
-(void)killCurl;
-(void)tapGesture:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)delegate;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(NSArray *)gestureRecognizers;
-(void)_setupGestureRecognizers;
-(void)_commonInit;
-(char)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(int)spineLocation;
@end

