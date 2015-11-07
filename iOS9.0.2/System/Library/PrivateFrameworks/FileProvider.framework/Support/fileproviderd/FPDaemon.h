/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Support/fileproviderd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FPDaemon
@required
-(void)providersCompletionHandler:(/*^block*/id)arg1;
-(void)wakeUpCompletion:(/*^block*/id)arg1;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)providePlaceholderForItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)stopProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)documentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2;

@end

