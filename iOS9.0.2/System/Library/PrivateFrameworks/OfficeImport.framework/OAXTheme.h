/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTheme : NSObject
+(void)readObjectDefaults:(xmlNode*)arg1 theme:(id)arg2 drawingState:(id)arg3 ;
+(void)readFromPackagePart:(id)arg1 toTheme:(id)arg2 state:(id)arg3 ;
+(void)readFromThemeData:(const char*)arg1 themeDataSize:(unsigned long)arg2 toTheme:(id)arg3 xmlDrawingState:(id)arg4 ;
+(void)readDefaultProperties:(xmlNode*)arg1 fallback:(xmlNode*)arg2 defaultProperties:(id)arg3 drawingState:(id)arg4 ;
+(void)readObjectDefaultsFromParent:(xmlNode*)arg1 defaultsName:(const char*)arg2 toObjectDefaults:(id)arg3 drawingState:(id)arg4 ;
+(xmlNode*)childNamed:(const char*)arg1 inParent:(xmlNode*)arg2 fallbackParent:(xmlNode*)arg3 drawingState:(id)arg4 ;
@end

