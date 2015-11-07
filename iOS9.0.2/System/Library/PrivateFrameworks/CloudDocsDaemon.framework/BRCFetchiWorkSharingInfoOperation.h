/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKRecordID, NSString;

@interface BRCFetchiWorkSharingInfoOperation : _BRCOperation <BRCOperationSubclass> {

	CKRecordID* _recordID;

}

@property (nonatomic,retain) CKRecordID * recordID;                 //@synthesize recordID=_recordID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(char)shouldRetryForError:(id)arg1 ;
-(id)initWithDocumentItem:(id)arg1 ;
-(unsigned long long)startActivity;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
@end

