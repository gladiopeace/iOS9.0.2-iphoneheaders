/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NEAgentSessionDelegate
@required
-(id)initWithSession:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(CFBundleRef)arg4;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleMessage:(id)arg1 withOuterMessage:(id)arg2;
-(void)handleCancel;

@end

