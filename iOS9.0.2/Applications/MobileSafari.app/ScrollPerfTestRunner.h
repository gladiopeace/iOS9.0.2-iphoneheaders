/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/PurplePageLoadTestRunner.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface ScrollPerfTestRunner : PurplePageLoadTestRunner {

	NSObject*<OS_dispatch_queue> _eventGeneratorQueue;
	int _gestureState;
	double _gestureStartTime;
	unsigned _scrollGestureCount;
	CGPoint _scrollOffsetAtGestureStart;
	int _scrollDirection;
	int _pageIndex;
	double _startLoadTime;
	double _endLoadTime;
	double _startScrollingTime;
	double _endScrollingTime;
	double _lastFramerateTime;
	unsigned _lastFrameCounter;
	NSMutableArray* _framerateHistory;
	NSMutableDictionary* _outputData;

}
-(void)startingTestPage:(id)arg1 ;
-(void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3 ;
-(void)finishedTestRunner;
-(char)startPageAction:(id)arg1 ;
-(void)finishedTestPage:(id)arg1 ;
-(char)performActionForPage:(id)arg1 ;
-(id)pageWebView;
-(id)pageScrollView;
-(id)machineConfigInfo;
-(void)writeOutputData;
-(void)appendToFramerateHistory;
-(void)advanceGesture;
-(void)determineScrollDirection;
-(CGPoint)touchPointForMoveIndex:(unsigned)arg1 ;
-(char)isPageTooShortToScroll;
-(id)outputDataForPage:(id)arg1 ;
-(id)finalStatusForPage:(id)arg1 ;
-(id)initWithTestName:(id)arg1 ;
@end

