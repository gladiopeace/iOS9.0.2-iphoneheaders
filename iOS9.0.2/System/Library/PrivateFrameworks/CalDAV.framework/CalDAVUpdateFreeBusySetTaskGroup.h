/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropFindTaskDelegate.h>
#import <libobjc.A.dylib/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString, CoreDAVPropFindTask;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {

	int _state;
	NSURL* _inboxURL;
	NSURL* _urlToAdd;
	NSString* _suffixToFilterOut;
	CoreDAVPropFindTask* _fetchTask;

}

@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (assign,nonatomic) int state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSURL * inboxURL;                                   //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) NSURL * urlToAdd;                                   //@synthesize urlToAdd=_urlToAdd - In the implementation block
@property (nonatomic,retain) NSString * suffixToFilterOut;                       //@synthesize suffixToFilterOut=_suffixToFilterOut - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;                    //@synthesize fetchTask=_fetchTask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)state;
-(void)setState:(int)arg1 ;
-(void)startTaskGroup;
-(NSURL *)inboxURL;
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)setUrlToAdd:(NSURL *)arg1 ;
-(void)setSuffixToFilterOut:(NSString *)arg1 ;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
-(void)_startFetchFreeBusySet;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(NSString *)suffixToFilterOut;
-(NSURL *)urlToAdd;
-(void)_startPropPatchWithURLs:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
@end

