/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFClientServiceDelegate.h>

@class AFConnection, NSString;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {

	AFConnection* _connection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_connectionDelegate;
-(oneway void)shouldSpeakChanged:(char)arg1 ;
-(oneway void)requestDidFinish;
-(oneway void)requestDidReceiveCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)requestDidFailWithError:(id)arg1 requestClass:(id)arg2 ;
-(oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)requestRequestedOpenURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)requestRequestedDismissAssistant;
-(oneway void)acousticIDRequestWillStart;
-(oneway void)musicWasDetected;
-(oneway void)acousticIDRequestDidFinishWithSuccess:(char)arg1 ;
-(oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2 ;
-(oneway void)invalidateCurrentUserActivity;
-(oneway void)getBulletinContext:(/*^block*/id)arg1 ;
-(oneway void)speechRecordingWillBeginWithLevelsSharedMem:(id)arg1 ;
-(oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1 ;
-(oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1 ;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1 ;
-(oneway void)speechRecognized:(id)arg1 ;
-(oneway void)speechRecognizedPartialResult:(id)arg1 ;
-(oneway void)speechRecognitionDidFail:(id)arg1 ;
-(oneway void)aceConnectionWillRetryOnError:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

