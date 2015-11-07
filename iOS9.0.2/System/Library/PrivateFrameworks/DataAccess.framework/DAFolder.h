/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DAFolder : NSObject {

	char _isDefault;
	char _hasRemoteChanges;
	NSString* _folderName;
	NSString* _folderID;
	NSString* _parentFolderID;
	int _dataclass;

}

@property (nonatomic,copy) NSString * folderName;                  //@synthesize folderName=_folderName - In the implementation block
@property (nonatomic,copy) NSString * folderID;                    //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * parentFolderID;              //@synthesize parentFolderID=_parentFolderID - In the implementation block
@property (assign,nonatomic) int dataclass;                        //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) char isDefault;                       //@synthesize isDefault=_isDefault - In the implementation block
@property (assign,nonatomic) char hasRemoteChanges;                //@synthesize hasRemoteChanges=_hasRemoteChanges - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)parentMailboxID;
-(char)hasRemoteChanges;
-(void)setHasRemoteChanges:(char)arg1 ;
-(int)dataclass;
-(char)isDefault;
-(void)setIsDefault:(char)arg1 ;
-(id)mailboxID;
-(NSString *)folderID;
-(NSString *)folderName;
-(NSString *)parentFolderID;
-(void)setFolderID:(NSString *)arg1 ;
-(void)setFolderName:(NSString *)arg1 ;
-(void)setParentFolderID:(NSString *)arg1 ;
-(void)setDataclass:(int)arg1 ;
@end

