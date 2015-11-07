/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, CKRecordID;

@interface CKQueryNotification : CKNotification <NSSecureCoding> {

	int _queryNotificationReason;
	NSDictionary* _recordFields;
	CKRecordID* _recordID;
	int _databaseScope;

}

@property (assign,nonatomic) int queryNotificationReason;              //@synthesize queryNotificationReason=_queryNotificationReason - In the implementation block
@property (nonatomic,copy) NSDictionary * recordFields;                //@synthesize recordFields=_recordFields - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                      //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) char isPublicDatabase; 
@property (assign,nonatomic) int databaseScope;                        //@synthesize databaseScope=_databaseScope - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setQueryNotificationReason:(int)arg1 ;
-(void)setRecordFields:(NSDictionary *)arg1 ;
-(int)queryNotificationReason;
-(NSDictionary *)recordFields;
-(char)isPublicDatabase;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setDatabaseScope:(int)arg1 ;
-(id)CKPropertiesDescription;
-(int)databaseScope;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
@end

