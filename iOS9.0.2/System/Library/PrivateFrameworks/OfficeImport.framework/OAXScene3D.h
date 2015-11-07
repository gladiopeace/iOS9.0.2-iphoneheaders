/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXScene3D : NSObject
+(id)readScene3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(id)cameraTypeEnumMap;
+(id)lightRigTypeEnumMap;
+(id)lightRigDirectionEnumMap;
+(id)readCameraFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readLightRigFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readBackdropFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)writeBackdrop:(id)arg1 to:(id)arg2 ;
+(void)writeCamera:(id)arg1 to:(id)arg2 ;
+(void)writeLightRig:(id)arg1 to:(id)arg2 ;
+(void)writeScene3D:(id)arg1 to:(id)arg2 ;
+(char)isEmpty:(id)arg1 ;
+(void)writeRotation3D:(id)arg1 to:(id)arg2 ;
@end

