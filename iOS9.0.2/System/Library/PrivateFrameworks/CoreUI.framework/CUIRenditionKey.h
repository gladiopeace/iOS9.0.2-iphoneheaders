/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {

	renditionkeytoken _stackKey[16];
	renditionkeytoken* _key;
	unsigned short _highwaterKeyCount;

}
+(void)initialize;
+(id)renditionKey;
+(id)renditionKeyWithKeyList:(const renditionkeytoken*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)themeIdiom;
-(int)themeSizeClassHorizontal;
-(int)themeSizeClassVertical;
-(id)initWithThemeElement:(int)arg1 themePart:(int)arg2 themeSize:(int)arg3 themeDirection:(int)arg4 themeValue:(int)arg5 themeDimension1:(int)arg6 themeDimension2:(int)arg7 themeState:(int)arg8 themePresentationState:(int)arg9 themeLayer:(int)arg10 themeScale:(int)arg11 themeIdentifier:(int)arg12 ;
-(int)themeScale;
-(void)setThemeDimension1:(int)arg1 ;
-(id)initWithKeyList:(const renditionkeytoken*)arg1 ;
-(void)setThemeScale:(int)arg1 ;
-(void)setThemeLayer:(int)arg1 ;
-(int)themeLayer;
-(void)copyValuesFromKeyList:(const renditionkeytoken*)arg1 ;
-(void)setValuesFromKeyList:(const renditionkeytoken*)arg1 ;
-(int)themeState;
-(int)themeValue;
-(int)themeSize;
-(void)setThemeSize:(int)arg1 ;
-(void)setThemeState:(int)arg1 ;
-(void)setThemeValue:(int)arg1 ;
-(void)_expandKeyIfNecessaryForCount:(int)arg1 ;
-(unsigned short)_systemTokenCount;
-(int)themeElement;
-(int)themePart;
-(int)themeSubtype;
-(int)themeMemoryClass;
-(int)themeGraphicsClass;
-(id)nameOfAttributeName:(int)arg1 ;
-(void)removeValueForKeyTokenIdentifier:(int)arg1 ;
-(void)setThemeElement:(int)arg1 ;
-(void)setThemePart:(int)arg1 ;
-(void)setThemeDirection:(int)arg1 ;
-(int)themeDirection;
-(void)setThemePreviousValue:(int)arg1 ;
-(int)themePreviousValue;
-(int)themeDimension1;
-(void)setThemeDimension2:(int)arg1 ;
-(int)themeDimension2;
-(void)setThemePreviousState:(int)arg1 ;
-(int)themePreviousState;
-(void)setThemePresentationState:(int)arg1 ;
-(int)themePresentationState;
-(void)setThemeIdiom:(int)arg1 ;
-(void)setThemeSubtype:(int)arg1 ;
-(void)setThemeSizeClassHorizontal:(int)arg1 ;
-(void)setThemeSizeClassVertical:(int)arg1 ;
-(void)setThemeMemoryClass:(int)arg1 ;
-(void)setThemeGraphicsClass:(int)arg1 ;
-(id)descriptionBasedOnKeyFormat:(const renditionkeyfmt*)arg1 ;
-(const renditionkeytoken*)keyList;
-(int)themeIdentifier;
-(void)setThemeIdentifier:(int)arg1 ;
@end

