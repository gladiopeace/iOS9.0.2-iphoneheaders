/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AirPortAssistant/AirPortAssistant-Structs.h>
@interface ImageStore : NSObject
+(id)imageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ofType:(id)arg3 ;
+(id)imageForInformationalDiagram:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 audioImage:(char)arg4 small:(char)arg5 ;
+(id)imageNameForInformationalDiagram:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 audioImage:(char)arg4 small:(char)arg5 useDataCache:(char*)arg6 ;
+(id)insetImageForInformationalDiagram:(unsigned)arg1 deviceKind:(int)arg2 audioImage:(char)arg3 small:(char)arg4 ;
+(id)imageNameForProductID:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 small:(char)arg4 cropped:(char)arg5 threeDee:(char)arg6 ;
+(id)kitImageOfType:(int)arg1 ;
+(id)sharedImageStore;
+(id)imageForInformationalDiagram:(unsigned)arg1 ;
+(float)informationDiagramBaseImageCenterOffset:(unsigned)arg1 small:(char)arg2 ;
+(float)informationDiagramBaseImageRightEdgeInset:(unsigned)arg1 small:(char)arg2 ;
+(id)imageForInformationalDiagramNamed:(id)arg1 small:(char)arg2 ;
+(id)insetImageForInformationalDiagram:(unsigned)arg1 ;
+(id)imageForBaseStationWithProductID:(unsigned)arg1 subProductID:(unsigned)arg2 deviceKind:(int)arg3 small:(char)arg4 cropped:(char)arg5 threeDee:(char)arg6 ;
+(CGImageRef)cgImageFromImage:(id)arg1 forContentsScale:(float)arg2 ;
@end

