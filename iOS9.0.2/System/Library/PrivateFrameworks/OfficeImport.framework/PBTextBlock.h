/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBTextBlock : NSObject
+(void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3 ;
+(void)applyTextRuler:(PptTextRulerAtom*)arg1 toTextBlock:(id)arg2 ;
+(void)readFromTextBlock:(id)arg1 toStyledText:(CFAttributedStringRef)arg2 ;
+(void)readFromStyledText:(CFAttributedStringRef)arg1 toStyledPargraphs:(CFArrayRef)arg2 ;
+(void)readParagraph:(id)arg1 paragraph:(CFAttributedStringRef)arg2 textType:(int)arg3 state:(id)arg4 ;
@end

