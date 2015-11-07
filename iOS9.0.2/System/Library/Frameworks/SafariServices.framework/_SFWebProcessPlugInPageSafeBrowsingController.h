/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFSafeBrowsingWebProcessController.h>

@protocol _SFSafeBrowsingWarningResponseObserver;
@class WBUWebProcessPlugInPageController, _WKRemoteObjectInterface, _SFSecurityInfo, NSDictionary, NSString;

@interface _SFWebProcessPlugInPageSafeBrowsingController : NSObject <_SFSafeBrowsingWebProcessController> {

	WBUWebProcessPlugInPageController* _pageController;
	_WKRemoteObjectInterface* _safeBrowsingControllerInterface;
	_SFSecurityInfo* _securityInfo;
	/*^block*/id _completionHandler;
	id<_SFSafeBrowsingWarningResponseObserver> _responseObserver;
	NSDictionary* _localizedStrings;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(char)arg2 ;
-(void)safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1 localizedStrings:(id)arg2 ;
-(void)_setUpSafeBrowsingControllerInterface;
-(void)_clearSafeBrowsingControllerInterface;
-(char)urlPassesFastSafeBrowsingCheck:(id)arg1 ;
-(char)_canSkipSafeBrowsingCheckForURL:(id)arg1 ;
-(id)_responseObserverProxy;
-(void)performSafeBrowsingCheckForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)injectPhishingAlertBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)securityWarningPageLoaded;
-(void)didRespondToSecurityWarning:(int)arg1 ;
-(id)localizedStringForString:(id)arg1 ;
-(void)dealloc;
-(id)initWithPageController:(id)arg1 ;
@end

