/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, NSString, NSMutableArray;

@interface WDListDefinition : NSObject <NSCopying> {

	WDDocument* mDocument;
	long mListDefinitionId;
	NSString* mStyleId;
	NSString* mStyleRefId;
	int mType;
	NSMutableArray* mLevels;

}

@property (nonatomic,readonly) long listDefinitionId; 
@property (nonatomic,readonly) NSString * styleId; 
@property (nonatomic,copy) NSString * styleRefId; 
-(void)dealloc;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long)listDefinitionId;
-(id)levelAt:(int)arg1 ;
-(int)levelCount;
-(NSString *)styleId;
-(id)addLevel;
-(id)initWithDocument:(id)arg1 listDefinitionId:(long)arg2 styleId:(id)arg3 ;
-(NSString *)styleRefId;
-(void)setStyleRefId:(NSString *)arg1 ;
@end

