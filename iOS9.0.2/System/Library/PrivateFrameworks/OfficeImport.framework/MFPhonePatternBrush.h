/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/MFPhoneBrush.h>

@class MFPhoneBitmap;

@interface MFPhonePatternBrush : MFPhoneBrush {

	MFPhoneBitmap* m_pattern;
	char m_usePaletteForBilevel;

}
+(id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(char)arg2 ;
-(void)dealloc;
-(void)fillPath:(id)arg1 :(id)arg2 ;
-(id)initWithBitmap:(id)arg1 usePaletteForBilevel:(char)arg2 ;
@end

