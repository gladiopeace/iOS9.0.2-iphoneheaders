/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABBlip : NSObject
+(id)readBlipFromEshBlip:(EshBlip*)arg1 ;
+(id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo*)arg1 ;
+(void)setMetafileBoundsFromPictData:(id)arg1 info:(EshMetafileBlipInfo*)arg2 ;
+(id)compressMetafileData:(id)arg1 info:(EshMetafileBlipInfo*)arg2 ;
+(void)writeEmptyBlipStoreEntry:(EshBSE*)arg1 ;
+(EshBlip*)writeBlip:(id)arg1 ;
+(id)readBlipFromBse:(id)arg1 ;
+(void)writeBlip:(id)arg1 toBlipStoreEntry:(EshBSE*)arg2 ;
+(int)blipTypeForBlipSignature:(int)arg1 ;
+(id)dibFileContentsWithDibBlipData:(const OcBinaryData*)arg1 ;
+(id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo*)arg1 ;
@end

