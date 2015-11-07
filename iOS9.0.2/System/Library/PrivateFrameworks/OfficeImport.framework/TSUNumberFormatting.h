/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSUNumberFormatting <TSUDataFormat,NSObject>
@required
-(double)scaleFactor;
-(unsigned short)base;
-(id)formatString;
-(int)valueType;
-(id)currencyCode;
-(unsigned short)decimalPlaces;
-(char)usesAccountingStyle;
-(char)showThousandsSeparator;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(char)hasValidDecimalPlaces;
-(char)isCustom;
-(id)formatName;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(char)isTextFormat;
-(char)canFormatText;
-(char)usesTextFormatForValue:(double)arg1;
-(char)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(char)baseUseMinusSign;
-(void)setFormatName:(id)arg1;
-(char)usesTabs;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2;
-(id)stringFromString:(id)arg1;
-(char)isEquivalent:(id)arg1;

@end

