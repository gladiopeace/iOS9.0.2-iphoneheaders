/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol JSONHTTPRequestDelegate <NSObject>
@optional
-(void)request:(id)arg1 hasWrittenBytes:(int)arg2 expectsToWrite:(int)arg3;

@required
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)request:(id)arg1 didReceiveObject:(id)arg2;

@end

