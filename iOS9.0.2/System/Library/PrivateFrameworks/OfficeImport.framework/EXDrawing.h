/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXDrawing : NSObject
+(void)initialize;
+(id)readTwoCellAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readOneCellAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readAbsoluteAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromPart:(id)arg1 state:(id)arg2 ;
+(EDCellAnchorMarker)readAnchorMarkerFromNode:(xmlNode*)arg1 state:(id)arg2 ;
+(BOOL)hasCommentsInSheet:(id)arg1 ;
+(id)readDrawableNode:(xmlNode*)arg1 anchor:(id)arg2 state:(id)arg3 ;
@end

