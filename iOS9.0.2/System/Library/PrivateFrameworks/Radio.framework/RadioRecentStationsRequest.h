/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioStation, NSString;

@interface RadioRecentStationsRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	RadioStation* _currentStation;
	NSString* _currentStationStringID;
	char _shouldGroupResponses;
	unsigned _stationCount;

}

@property (assign,nonatomic) char shouldGroupResponses;              //@synthesize shouldGroupResponses=_shouldGroupResponses - In the implementation block
@property (assign,nonatomic) unsigned stationCount;                  //@synthesize stationCount=_stationCount - In the implementation block
-(unsigned)stationCount;
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCachedRecentStationsResponseWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCurrentStation:(id)arg1 ;
-(void)setShouldGroupResponses:(char)arg1 ;
-(id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg1 ;
-(id)_recentStationsResponseWithConnectionResponse:(id)arg1 returningError:(id*)arg2 ;
-(void)_configureRequestPropertiesForCaching:(id)arg1 returningCacheKey:(id*)arg2 ;
-(id)initWithCurrentStationStringID:(id)arg1 ;
-(char)shouldGroupResponses;
-(void)setStationCount:(unsigned)arg1 ;
@end

