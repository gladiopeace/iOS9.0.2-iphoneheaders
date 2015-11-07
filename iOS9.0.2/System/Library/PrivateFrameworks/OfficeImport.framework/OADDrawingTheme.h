/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADStyleMatrix, OADFontScheme, OADColorContext, OADColorScheme, OADColorMap;

@interface OADDrawingTheme : NSObject {

	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;
	OADColorContext* mColorContext;

}

@property (nonatomic,readonly) OADStyleMatrix * styleMatrix; 
@property (nonatomic,readonly) OADFontScheme * fontScheme; 
@property (nonatomic,readonly) OADColorContext * colorContext; 
@property (nonatomic,readonly) OADColorScheme * colorScheme; 
@property (nonatomic,readonly) OADColorMap * colorMap; 
@property (nonatomic,readonly) id<OADColorPalette> colorPalette; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(OADColorScheme *)colorScheme;
-(OADStyleMatrix *)styleMatrix;
-(OADColorMap *)colorMap;
-(OADFontScheme *)fontScheme;
-(id<OADColorPalette>)colorPalette;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
-(id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5 ;
-(id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3 ;
-(OADColorContext *)colorContext;
@end

