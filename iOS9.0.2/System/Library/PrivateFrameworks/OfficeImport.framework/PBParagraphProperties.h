/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBParagraphProperties : NSObject
+(void)readParagraphProperties:(id)arg1 paragraphProperty:(PptParaProperty*)arg2 bulletStyle:(PptParaProperty9*)arg3 isMaster:(char)arg4 state:(id)arg5 ;
+(void)readAlign:(id)arg1 pptAlignmentType:(int)arg2 ;
+(short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2 ;
+(int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1 ;
+(int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1 ;
+(void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(PptParaRun*)arg2 bulletStyle:(PptParaProperty9*)arg3 state:(id)arg4 ;
@end

