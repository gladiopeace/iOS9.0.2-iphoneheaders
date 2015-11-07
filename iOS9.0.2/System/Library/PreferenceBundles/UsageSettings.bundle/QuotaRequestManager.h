/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, QuotaInfoResponse, NSMutableDictionary;

@interface QuotaRequestManager : NSObject {

	NSOperationQueue* _requestQueue;
	NSObject*<OS_dispatch_queue> _quota_info_queue;
	QuotaInfoResponse* _quotaInfo;
	char _quotaInfoIsDetailed;
	NSMutableDictionary* _appDetailsCache;

}
+(id)noAccountError;
+(id)sharedManager;
-(void)clearCachedQuotaInfo;
-(void)getAppDetailsForBundleIDs:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)noteQuotaInfoChanged;
-(id)_sendSynchronousAARequest:(id)arg1 ;
-(id)quotaInfoDetailed:(char)arg1 error:(id*)arg2 ;
-(id)appDetailsForBundleIDs:(id)arg1 error:(id*)arg2 ;
-(void)clearCachedAppDetails;
-(id)init;
-(void)getQuotaInfoDetailed:(char)arg1 handler:(/*^block*/id)arg2 ;
@end

