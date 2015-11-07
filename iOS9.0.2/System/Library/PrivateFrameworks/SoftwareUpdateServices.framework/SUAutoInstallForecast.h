/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface SUAutoInstallForecast : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _unlockStartDate;
	NSDate* _unlockEndDate;
	NSDate* _suStartDate;
	NSDate* _suEndDate;

}

@property (nonatomic,retain) NSDate * unlockStartDate;              //@synthesize unlockStartDate=_unlockStartDate - In the implementation block
@property (nonatomic,retain) NSDate * unlockEndDate;                //@synthesize unlockEndDate=_unlockEndDate - In the implementation block
@property (nonatomic,retain) NSDate * suStartDate;                  //@synthesize suStartDate=_suStartDate - In the implementation block
@property (nonatomic,retain) NSDate * suEndDate;                    //@synthesize suEndDate=_suEndDate - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUnlockStartDate:(NSDate *)arg1 ;
-(void)setUnlockEndDate:(NSDate *)arg1 ;
-(void)setSuStartDate:(NSDate *)arg1 ;
-(void)setSuEndDate:(NSDate *)arg1 ;
-(NSDate *)unlockStartDate;
-(NSDate *)unlockEndDate;
-(NSDate *)suStartDate;
-(NSDate *)suEndDate;
@end

