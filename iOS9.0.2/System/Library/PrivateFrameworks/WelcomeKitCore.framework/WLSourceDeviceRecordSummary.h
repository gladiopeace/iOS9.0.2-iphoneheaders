/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WLSourceDeviceAccount, NSString, NSDate, NSDictionary;

@interface WLSourceDeviceRecordSummary : NSObject {

	char _storeDataAsFile;
	WLSourceDeviceAccount* _account;
	unsigned _sqlID;
	NSString* _identifier;
	unsigned _itemSize;
	NSString* _relativePath;
	NSDate* _modifiedDate;
	NSDictionary* _metadata;
	NSString* _dataFilePath;
	unsigned _downloadSegmentCount;

}

@property (nonatomic,retain) WLSourceDeviceAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) unsigned sqlID;                               //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned itemSize;                            //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,copy) NSString * relativePath;                        //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,copy) NSDate * modifiedDate;                          //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                        //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) char storeDataAsFile;                         //@synthesize storeDataAsFile=_storeDataAsFile - In the implementation block
@property (nonatomic,copy) NSString * dataFilePath;                        //@synthesize dataFilePath=_dataFilePath - In the implementation block
@property (assign,nonatomic) unsigned downloadSegmentCount;                //@synthesize downloadSegmentCount=_downloadSegmentCount - In the implementation block
+(id)_numberFormatter;
+(id)summaryWithInfo:(id)arg1 account:(id)arg2 ;
-(NSDate *)modifiedDate;
-(void)setItemSize:(unsigned)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned)itemSize;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(NSString *)relativePath;
-(NSDictionary *)metadata;
-(void)setAccount:(WLSourceDeviceAccount *)arg1 ;
-(WLSourceDeviceAccount *)account;
-(unsigned)downloadSegmentCount;
-(NSString *)dataFilePath;
-(char)storeDataAsFile;
-(void)setStoreDataAsFile:(char)arg1 ;
-(void)setDataFilePath:(NSString *)arg1 ;
-(void)setDownloadSegmentCount:(unsigned)arg1 ;
-(id)initWithInfo:(id)arg1 account:(id)arg2 ;
-(unsigned)sqlID;
-(void)setSqlID:(unsigned)arg1 ;
-(void)setRelativePath:(NSString *)arg1 ;
@end

