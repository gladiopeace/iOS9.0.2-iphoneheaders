/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface MFObjectTable : NSObject {

	NSMutableArray* m_objects;

}
-(int)size;
-(void)dealloc;
-(id)init;
-(void)clear;
-(id)getObject:(unsigned)arg1 ;
-(int)selectInto:(int)arg1 :(id)arg2 ;
-(int)deleteObject:(unsigned)arg1 ;
-(int)putObject:(id)arg1 :(unsigned)arg2 ;
-(unsigned)insertPos;
@end

