/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, WKNavigation, NSDate, NSError;

@interface PageLoadTestStatistics : NSObject {

	int _framesToLoad;
	int _onloadEventsHandled;
	char _pendingResourceLoad;
	NSTimer* _waitForNewPageLoadEventsTimer;
	WKNavigation* _navigation;
	NSDate* _firstVisualLayoutDate;
	NSDate* _loadStartDate;
	NSDate* _lastOnloadEventDate;
	NSDate* _mainFrameLoadDate;
	NSDate* _lastResourceLoadDate;
	NSDate* _lastPageLoadEventDate;
	NSError* _loadError;
	/*^block*/id _callbackBlock;

}

@property (nonatomic,retain) WKNavigation * navigation;                   //@synthesize navigation=_navigation - In the implementation block
@property (nonatomic,retain) NSDate * firstVisualLayoutDate;              //@synthesize firstVisualLayoutDate=_firstVisualLayoutDate - In the implementation block
@property (nonatomic,retain) NSDate * loadStartDate;                      //@synthesize loadStartDate=_loadStartDate - In the implementation block
@property (nonatomic,retain) NSDate * lastOnloadEventDate;                //@synthesize lastOnloadEventDate=_lastOnloadEventDate - In the implementation block
@property (nonatomic,retain) NSDate * mainFrameLoadDate;                  //@synthesize mainFrameLoadDate=_mainFrameLoadDate - In the implementation block
@property (nonatomic,retain) NSDate * lastResourceLoadDate;               //@synthesize lastResourceLoadDate=_lastResourceLoadDate - In the implementation block
@property (nonatomic,retain) NSDate * lastPageLoadEventDate;              //@synthesize lastPageLoadEventDate=_lastPageLoadEventDate - In the implementation block
@property (nonatomic,retain) NSError * loadError;                         //@synthesize loadError=_loadError - In the implementation block
@property (nonatomic,copy) id callbackBlock;                              //@synthesize callbackBlock=_callbackBlock - In the implementation block
+(void)setRestInterval:(double)arg1 ;
-(NSError *)loadError;
-(NSDate *)loadStartDate;
-(NSDate *)lastPageLoadEventDate;
-(NSDate *)firstVisualLayoutDate;
-(void)setFirstVisualLayoutDate:(NSDate *)arg1 ;
-(void)_cancelWaitForNewPageLoadEventsTimer;
-(void)_maybePageLoadFinishedForTests;
-(void)_pageLoadFinishedForTests;
-(char)_pageLoadEventsAreStillPending;
-(void)_scheduleWaitForNewPageLoadEventsTimer;
-(void)_waitForNewPageLoadEventsTimerFired:(id)arg1 ;
-(void)handledOnloadEvents;
-(void)startedPageLoad;
-(void)startedNavigation:(id)arg1 ;
-(void)finishedLoadingResources;
-(void)startedLoadingResources;
-(void)finishedFirstVisualLayout;
-(void)failedNavigation:(id)arg1 withError:(id)arg2 ;
-(void)finishedNavigation:(id)arg1 ;
-(void)pageLoadFinishedForTestsWK2WithLoadData:(id)arg1 ;
-(WKNavigation *)navigation;
-(void)setNavigation:(WKNavigation *)arg1 ;
-(void)setLoadStartDate:(NSDate *)arg1 ;
-(NSDate *)lastOnloadEventDate;
-(void)setLastOnloadEventDate:(NSDate *)arg1 ;
-(NSDate *)mainFrameLoadDate;
-(void)setMainFrameLoadDate:(NSDate *)arg1 ;
-(NSDate *)lastResourceLoadDate;
-(void)setLastResourceLoadDate:(NSDate *)arg1 ;
-(void)setLastPageLoadEventDate:(NSDate *)arg1 ;
-(void)setLoadError:(NSError *)arg1 ;
-(id)callbackBlock;
-(void)setCallbackBlock:(id)arg1 ;
-(void)dealloc;
-(id)initWithCallback:(/*^block*/id)arg1 ;
@end

