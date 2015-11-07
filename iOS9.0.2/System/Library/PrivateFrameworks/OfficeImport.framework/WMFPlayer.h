/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFGraphicsDevice;

@interface WMFPlayer : NSObject {

	MFGraphicsDevice* m_gdi;
	int m_records;
	unsigned short m_windowsVersion;
	char m_boundsSet;
	char m_ignoreSetWindowOrg;

}
+(CGRect)placeableBounds:(const char*)arg1 ;
+(CGRect)windowBounds:(id)arg1 ;
+(CGRect)boundsInLogicalUnits:(id)arg1 ;
+(CGRect)boundsInPoints:(id)arg1 ;
-(void)dealloc;
-(void)done;
-(int)records;
-(int)play:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetBkColour:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetBkMode:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetMapMode:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetROP2:(unsigned)arg1 :(const char*)arg2 ;
-(int)playUnsupported:(unsigned)arg1 :(const char*)arg2 :(const char*)arg3 ;
-(int)playSetPolyFillMode:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetStretchBltMode:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetTextCharExtra:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetTextColour:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetTextJustification:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetWindowOrg:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetWindowExt:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetViewportOrg:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetViewportExt:(unsigned)arg1 :(const char*)arg2 ;
-(int)playOffsetWindowOrg:(unsigned)arg1 :(const char*)arg2 ;
-(int)playScaleWindowExt:(unsigned)arg1 :(const char*)arg2 ;
-(int)playOffsetViewportOrg:(unsigned)arg1 :(const char*)arg2 ;
-(int)playScaleViewportExt:(unsigned)arg1 :(const char*)arg2 ;
-(int)playLineTo:(unsigned)arg1 :(const char*)arg2 ;
-(int)playMoveTo:(unsigned)arg1 :(const char*)arg2 ;
-(int)playExcludeClipRect:(unsigned)arg1 :(const char*)arg2 ;
-(int)playIntersectClipRect:(unsigned)arg1 :(const char*)arg2 ;
-(int)playArc:(unsigned)arg1 :(const char*)arg2 ;
-(int)playEllipse:(unsigned)arg1 :(const char*)arg2 ;
-(int)playPie:(unsigned)arg1 :(const char*)arg2 ;
-(int)playRectangle:(unsigned)arg1 :(const char*)arg2 ;
-(int)playRoundRect:(unsigned)arg1 :(const char*)arg2 ;
-(int)playPatBlt:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSaveDC:(unsigned)arg1 :(const char*)arg2 ;
-(int)playOffsetClipRegion:(unsigned)arg1 :(const char*)arg2 ;
-(int)playTextOut:(unsigned)arg1 :(const char*)arg2 ;
-(int)playBitBlt:(unsigned)arg1 :(const char*)arg2 ;
-(int)playPolygon:(unsigned)arg1 :(const char*)arg2 ;
-(int)playPolyline:(unsigned)arg1 :(const char*)arg2 ;
-(int)playRestoreDC:(unsigned)arg1 :(const char*)arg2 ;
-(int)playFillRegion:(unsigned)arg1 :(const char*)arg2 ;
-(int)playFrameRegion:(unsigned)arg1 :(const char*)arg2 ;
-(int)playInvertRegion:(unsigned)arg1 :(const char*)arg2 ;
-(int)playPaintRegion:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSelectClipRegion:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSelectObject:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetTextAlign:(unsigned)arg1 :(const char*)arg2 ;
-(int)playChord:(unsigned)arg1 :(const char*)arg2 ;
-(int)playExtTextOut:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSelectPalette:(unsigned)arg1 :(const char*)arg2 ;
-(int)playRealizePalette:(unsigned)arg1 :(const char*)arg2 ;
-(int)playSetPaletteEntries:(unsigned)arg1 :(const char*)arg2 ;
-(int)playPolyPolygon:(unsigned)arg1 :(const char*)arg2 ;
-(int)playResizePalette:(unsigned)arg1 :(const char*)arg2 ;
-(int)playDibBitBlt:(unsigned)arg1 :(const char*)arg2 ;
-(int)playDibStretchBlt:(unsigned)arg1 :(const char*)arg2 ;
-(int)playCreateDIBPatternBrush:(unsigned)arg1 :(const char*)arg2 ;
-(int)playStretchDib:(unsigned)arg1 :(const char*)arg2 ;
-(int)playDeleteObject:(unsigned)arg1 :(const char*)arg2 ;
-(int)playCreatePalette:(unsigned)arg1 :(const char*)arg2 ;
-(int)playCreatePatternBrush:(unsigned)arg1 :(const char*)arg2 ;
-(int)playCreatePenIndirect:(unsigned)arg1 :(const char*)arg2 ;
-(int)playCreateFontIndirect:(unsigned)arg1 :(const char*)arg2 ;
-(int)playCreateBrushIndirect:(unsigned)arg1 :(const char*)arg2 ;
-(int)playCreateRegion:(unsigned)arg1 :(const char*)arg2 ;
-(int)playUnknown:(unsigned)arg1 :(unsigned)arg2 :(const char*)arg3 ;
-(id)parseRegion:(unsigned)arg1 :(const char*)arg2 ;
-(id)initWithGraphicsDevice:(id)arg1 ;
-(int)playHeader:(unsigned)arg1 :(const char*)arg2 ;
@end

