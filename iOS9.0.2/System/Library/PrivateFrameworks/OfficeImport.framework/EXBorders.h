/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXBorders : NSObject
+(void)initialize;
+(id)edBorderFromXmlElement:(xmlNode*)arg1 diagonalType:(int)arg2 state:(id)arg3 ;
+(int)edDiagStyleFromXmlElement:(xmlNode*)arg1 ;
+(id)edBordersFromXmlBordersElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edBorderStyleFromXmlBorderStyleString:(id)arg1 ;
@end

