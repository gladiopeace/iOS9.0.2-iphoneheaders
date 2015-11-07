/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ASFolder : ASItem <NSCoding> {

	char _renameOnCollision;
	NSString* _serverID;
	NSString* _parentID;
	NSString* _displayName;
	int _folderType;
	int _dataclass;
	int _localID;
	int _changeType;

}

@property (nonatomic,copy) NSString * serverID;                   //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,copy) NSString * parentID;                   //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int folderType;                      //@synthesize folderType=_folderType - In the implementation block
@property (assign,nonatomic) int dataclass;                       //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) int localID;                         //@synthesize localID=_localID - In the implementation block
@property (assign,nonatomic) int changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) char renameOnCollision;              //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)conciseDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)displayName;
-(NSString *)parentID;
-(void)setParentID:(NSString *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(int)dataclass;
-(void)setLocalID:(int)arg1 ;
-(int)localID;
-(id)_folderTypeString;
-(void)setFolderTypeNumber:(id)arg1 ;
-(char)mayContainDataclasses:(int)arg1 ;
-(id)initWithFolderType:(int)arg1 serverID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4 localID:(int)arg5 ;
-(char)renameOnCollision;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(void)setRenameOnCollision:(char)arg1 ;
-(void)setDataclass:(int)arg1 ;
-(int)folderType;
-(void)setFolderType:(int)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
@end

