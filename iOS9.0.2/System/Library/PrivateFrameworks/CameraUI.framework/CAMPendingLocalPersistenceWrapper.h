/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMCaptureRequest;

@interface CAMPendingLocalPersistenceWrapper : NSObject {

	CAMCaptureRequest* _request;
	id _result;

}

@property (nonatomic,readonly) CAMCaptureRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id result;                                //@synthesize result=_result - In the implementation block
-(CAMCaptureRequest *)request;
-(id)result;
-(id)initWithRequest:(id)arg1 result:(id)arg2 ;
@end

