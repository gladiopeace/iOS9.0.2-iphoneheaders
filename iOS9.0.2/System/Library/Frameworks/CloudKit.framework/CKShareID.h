/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKShareID : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying> {

	NSString* _shareName;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,copy) NSString * shareName;                 //@synthesize shareName=_shareName - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(char)supportsSecureCoding;
-(void)setShareName:(NSString *)arg1 ;
-(id)CKXPCSuitableString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKRecordZoneID *)zoneID;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(NSString *)shareName;
-(id)initWithShareName:(id)arg1 zoneID:(id)arg2 ;
@end

