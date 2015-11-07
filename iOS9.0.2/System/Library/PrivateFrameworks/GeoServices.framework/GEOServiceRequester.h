/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOServiceRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;

}
+(unsigned)_urlType;
+(id)_throttleKey;
+(id)_debugRequestName;
+(int)_experimentDispatcherRequestTypeForRequest:(id)arg1 ;
+(char)_shouldThrottleRequests;
+(int)_experimentType;
+(id)_serviceTypeNumber;
-(void)dealloc;
-(id)init;
-(id)_validateResponse:(id)arg1 ;
-(void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_cancelRequest:(id)arg1 ;
-(void)_startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end
