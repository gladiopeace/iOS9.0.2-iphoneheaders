/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CKRecordID;

@interface CKUserIdentityFetchInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _emailAddress;
	CKRecordID* _recordID;

}

@property (nonatomic,copy) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                //@synthesize recordID=_recordID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(id)initWithUserRecordID:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

