/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CKDApplicationMetadata : NSObject {

	char _isCKSystemService;
	NSString* _apsEnvironmentString;
	int _isApplication;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (assign,nonatomic) int isApplication;                            //@synthesize isApplication=_isApplication - In the implementation block
@property (assign,nonatomic) char isCKSystemService;                       //@synthesize isCKSystemService=_isCKSystemService - In the implementation block
-(id)init;
-(NSString *)apsEnvironmentString;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(char)isCKSystemService;
-(void)setIsCKSystemService:(char)arg1 ;
-(void)setIsApplication:(int)arg1 ;
-(int)isApplication;
@end

