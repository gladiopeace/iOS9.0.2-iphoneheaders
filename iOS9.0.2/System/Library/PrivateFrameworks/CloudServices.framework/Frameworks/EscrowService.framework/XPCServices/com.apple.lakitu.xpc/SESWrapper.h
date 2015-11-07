/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Frameworks/EscrowService.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <com.apple.lakitu/com.apple.lakitu-Structs.h>
@class NSString, NSDate, NSDictionary;

@interface SESWrapper : NSObject {

	ccses_crypto_t* ccses;
	ccsrp_ctx* client_srp;
	NSString* _decodedLabel;
	NSDate* _escrowDate;
	NSString* _dsid;
	NSString* _recoveryPassphrase;
	NSString* _label;
	NSString* _recordID;
	NSDictionary* _escrowRecord;

}

@property (copy) NSString * decodedLabel;                             //@synthesize decodedLabel=_decodedLabel - In the implementation block
@property (copy) NSDate * escrowDate;                                 //@synthesize escrowDate=_escrowDate - In the implementation block
@property (copy,readonly) NSString * dsid;                            //@synthesize dsid=_dsid - In the implementation block
@property (copy,readonly) NSString * recoveryPassphrase;              //@synthesize recoveryPassphrase=_recoveryPassphrase - In the implementation block
@property (copy,readonly) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (copy,readonly) NSString * recordID;                        //@synthesize recordID=_recordID - In the implementation block
@property (retain,readonly) NSDictionary * escrowRecord;              //@synthesize escrowRecord=_escrowRecord - In the implementation block
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;
-(void)setEscrowDate:(NSDate *)arg1 ;
-(void)setDecodedLabel:(NSString *)arg1 ;
-(id)srpInitBlob;
-(id)srpRecoveryBlobFromData:(id)arg1 ;
-(id)encodedEscrowRecordWithPublicKey:(SecKeyRef)arg1 error:(id*)arg2 ;
-(id)decodedEscrowRecordFromData:(id)arg1 ;
-(NSString *)decodedLabel;
-(NSDate *)escrowDate;
-(void)dealloc;
-(NSString *)label;
-(id)initWithRequest:(id)arg1 ;
-(NSString *)recordID;
-(NSString *)dsid;
@end
