/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ondemandd/ODRDownloadRequest.h>

@interface ODRLocalRequest : ODRDownloadRequest
-(id)initWithURL:(id)arg1 destinationPath:(id)arg2 applicationBundleID:(id)arg3 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 refreshHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
@end

