/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSWebProcessPlugInPageController.h>

@protocol WBSTouchIconObserver;
@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController {

	id<WBSTouchIconObserver> _touchIconObserver;
	unsigned long long _mainFrameMainResourceId;
	char _didRecieveDidHandleOnloadEventsForFrameCallback;
	char _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;

}

@property (nonatomic,readonly) id<WBSTouchIconObserver> touchIconObserver; 
-(id)_extractIconURLsIncludingDefaultURLs:(char)arg1 didExtractNonDefaultIconURLs:(char*)arg2 ;
-(id<WBSTouchIconObserver>)touchIconObserver;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 pageIsProvisionallyLoading:(char)arg5 ;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2 ;
@end

