/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMProperty.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDBorders, OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {

	EDBorders* edValue;
	OITSUColor* mBorderColor;
	OITSUColor* mBorderTopColor;
	OITSUColor* mBorderLeftColor;
	OITSUColor* mBorderBottomColor;
	OITSUColor* mBorderRightColor;
	int mBorderStyle[5];
	int mBorderWidth[5];

}
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)styleString;
-(id)borderColor;
-(id)cssStringForName:(id)arg1 ;
-(id)initWithOADStroke:(id)arg1 ;
-(id)cssString;
-(id)widthString;
-(id)colorString;
-(id)stringFromStyleEnum:(int)arg1 ;
-(id)stringFromWidthEnum:(int)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(char)isNoneAtLocation:(int)arg1 ;
-(void)setNoneAtLocation:(int)arg1 ;
-(char)hasSameColorsAs:(id)arg1 ;
-(char)hasSameStylesAs:(id)arg1 ;
-(char)hasSameWidthsAs:(id)arg1 ;
-(void)setBorderStyleAndWidth:(int)arg1 location:(unsigned)arg2 ;
-(id)initWithEDBorders:(id)arg1 ;
-(int*)borderStyles;
-(int*)borderWidths;
-(id)styleHashNumber;
-(id)widthHashNumber;
@end

