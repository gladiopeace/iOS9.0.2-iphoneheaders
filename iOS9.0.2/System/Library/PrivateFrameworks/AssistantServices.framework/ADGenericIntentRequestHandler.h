/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriRequestHandling.h>

@class NSString;

@interface ADGenericIntentRequestHandler : NSObject <AFSiriRequestHandling>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_buildPreLaunchMetricsInformationForRequest:(id)arg1 legacyTimingsKey:(id*)arg2 ;
-(id)_makeMetrics;
-(void)_updateMetricsInfo:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_handleGenericIntentRequest:(id)arg1 deliveryHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleSiriRequest:(id)arg1 deliveryHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

