/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEODirectionsProvider : NSObject {

	char _isLoading;
	int _requestType;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) char isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(char)isLoading;
-(void)cancelRequest;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)requestCompleted;
-(void)startProviderWithRequest:(id)arg1 ;
-(void)providerReceivedResponse:(id)arg1 ;
-(void)providerReceivedError:(id)arg1 problemDetails:(SCD_Struct_GE62*)arg2 ;
-(void)setIsLoading:(char)arg1 ;
-(void)setFinishedHandler:(id)arg1 ;
-(void)providerReceivedErrorCode:(int)arg1 userInfo:(id)arg2 problemDetails:(SCD_Struct_GE62*)arg3 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(id)finishedHandler;
-(void)providerDidCancel;
-(void)cancelProviderRequest;
@end

