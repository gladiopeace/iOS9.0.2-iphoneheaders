/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSURL;

@interface CAMTransientPairedVideo : NSObject {

	NSURL* _url;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;              //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
-(NSURL *)url;
-(id)initWithURL:(id)arg1 stillDisplayTime:(SCD_Struct_CA2)arg2 ;
-(SCD_Struct_CA2)stillDisplayTime;
@end

