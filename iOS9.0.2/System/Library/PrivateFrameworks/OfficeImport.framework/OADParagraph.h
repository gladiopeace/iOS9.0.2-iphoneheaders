/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {

	OADParagraphProperties* mProperties;
	NSMutableArray* mTextRuns;
	OADCharacterProperties* mParagraphEndCharacterProperties;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isEmpty;
-(id)properties;
-(id)plainText;
-(unsigned)textRunCount;
-(id)textRunAtIndex:(unsigned)arg1 ;
-(id)paragraphEndCharacterProperties;
-(id)addRegularTextRun;
-(id)addTextLineBreak;
-(id)addDateTimeFieldWithFormat:(int)arg1 ;
-(id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2 ;
-(void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1 ;
-(void)removeAllTextRuns;
-(id)addFooterField;
-(void)setParagraphEndCharacterProperties:(id)arg1 ;
-(char)hasBulletCharacterProperties;
-(id)bulletCharacterProperties;
-(unsigned)lineBreakCount;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)applyProperties:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(char)isSimilarToParagraph:(id)arg1 ;
-(unsigned)characterCount;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
-(id)addSlideNumberField;
@end

