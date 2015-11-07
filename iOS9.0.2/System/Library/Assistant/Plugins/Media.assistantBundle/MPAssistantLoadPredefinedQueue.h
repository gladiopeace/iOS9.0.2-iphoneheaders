/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMPLoadPredefinedQueue.h>
#import <Accessibility/AFServiceCommand.h>

@protocol AFServiceHelper;
@class NSString;

@interface MPAssistantLoadPredefinedQueue : SAMPLoadPredefinedQueue <AFServiceCommand> {

	id<AFServiceHelper> _serviceHelper;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_performWithNowPlayingItem:(id)arg1 ;
-(char)_radioIsAvailable;
-(void)_shuffleIfRequested;
-(void)_prepare;
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
@end

