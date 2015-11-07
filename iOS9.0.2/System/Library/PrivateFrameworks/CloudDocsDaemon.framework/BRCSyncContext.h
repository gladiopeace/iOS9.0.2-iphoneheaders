/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKContainer, NSString, CDAttribute, CDBudget, BRCAccountSession, BRCThrottleBase, BRCTransferStream, BRCUserDefaults;

@interface BRCSyncContext : NSObject {

	CKContainer* _ckContainer;
	NSString* _contextIdentifier;
	CDAttribute* _duetAttribute;
	CDBudget* _energyBudget;
	CDBudget* _dataBudget;
	NSString* _admissionTicket;
	char _isShared;
	char _isCancelled;
	BRCAccountSession* _session;
	BRCThrottleBase* _readerThrottle;
	BRCThrottleBase* _applyThrottle;
	BRCThrottleBase* _downloadThrottle;
	BRCThrottleBase* _uploadThrottle;
	BRCTransferStream* _uploadStream;
	BRCTransferStream* _downloadStream;

}

@property (nonatomic,readonly) BRCAccountSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * contextIdentifier;                    //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
@property (nonatomic,readonly) BRCUserDefaults * defaults; 
@property (nonatomic,readonly) char isShared;                                   //@synthesize isShared=_isShared - In the implementation block
@property (nonatomic,readonly) CKContainer * ckContainer; 
@property (nonatomic,readonly) BRCTransferStream * uploadStream;                //@synthesize uploadStream=_uploadStream - In the implementation block
@property (nonatomic,readonly) BRCTransferStream * downloadStream;              //@synthesize downloadStream=_downloadStream - In the implementation block
@property (nonatomic,readonly) NSString * admissionTicket; 
@property (nonatomic,readonly) CDBudget * energyBudget;                         //@synthesize energyBudget=_energyBudget - In the implementation block
@property (nonatomic,readonly) CDBudget * dataBudget;                           //@synthesize dataBudget=_dataBudget - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * readerThrottle;                //@synthesize readerThrottle=_readerThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * applyThrottle;                 //@synthesize applyThrottle=_applyThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * uploadThrottle;                //@synthesize uploadThrottle=_uploadThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * downloadThrottle;              //@synthesize downloadThrottle=_downloadThrottle - In the implementation block
+(id)contextIdentifierForZone:(id)arg1 ;
-(char)isShared;
-(BRCUserDefaults *)defaults;
-(BRCAccountSession *)session;
-(void)cancel;
-(id)description;
-(void)addOperation:(id)arg1 ;
-(void)resume;
-(void)close;
-(void)setupIfNeeded;
-(void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2 ;
-(BRCThrottleBase *)applyThrottle;
-(NSString *)contextIdentifier;
-(BRCTransferStream *)downloadStream;
-(BRCThrottleBase *)downloadThrottle;
-(BRCTransferStream *)uploadStream;
-(CKContainer *)ckContainer;
-(id)initWithZone:(id)arg1 ;
-(void)notifyDuetFromAccessByBundleID:(id)arg1 ;
-(BRCThrottleBase *)uploadThrottle;
-(BRCThrottleBase *)readerThrottle;
-(id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 isShared:(char)arg3 ;
-(void)_setupDuetIfNeeded;
-(id)_database;
-(NSString *)admissionTicket;
-(void)waitForAllOperations;
-(CDBudget *)energyBudget;
-(CDBudget *)dataBudget;
-(char)allowsCellularAccess;
@end

