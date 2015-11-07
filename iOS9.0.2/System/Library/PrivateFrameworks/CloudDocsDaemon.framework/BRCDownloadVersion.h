/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCDownload.h>

@class CKRecordID, CKRecord, GSPermanentStorage, NSError, BRCProgress;

@interface BRCDownloadVersion : BRCDownload {

	CKRecordID* _secondaryRecordID;
	CKRecord* _secondaryRecord;
	char _sharedZone;
	char _isLoser;
	GSPermanentStorage* _storage;
	NSError* _gsError;

}

@property (nonatomic,readonly) GSPermanentStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) BRCProgress * progress; 
@property (nonatomic,readonly) NSError * gsError;                         //@synthesize gsError=_gsError - In the implementation block
@property (nonatomic,readonly) char isLoser;                              //@synthesize isLoser=_isLoser - In the implementation block
-(GSPermanentStorage *)storage;
-(id)description;
-(void)setProgress:(BRCProgress *)arg1 ;
-(BRCProgress *)progress;
-(int)kind;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(char)arg4 ;
-(NSError *)gsError;
-(id)secondaryRecordID;
-(id)secondaryRecord;
-(void)setSecondaryRecord:(id)arg1 ;
-(id)_stageContentWithSession:(id)arg1 error:(id*)arg2 ;
-(id)_stageWithSession:(id)arg1 creationInfo:(id*)arg2 error:(id*)arg3 ;
-(char)isLoser;
@end

