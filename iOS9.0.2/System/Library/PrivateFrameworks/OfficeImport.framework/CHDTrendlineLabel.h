/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources, CHDFormula, OADGraphicProperties;

@interface CHDTrendlineLabel : NSObject {

	EDResources* mResources;
	CHDFormula* mName;
	unsigned mLastCachedNameStringIndex;
	unsigned mContentFormatId;
	BOOL mContentFormatDerived;
	BOOL mGeneratedText;
	BOOL mAutomaticLabelDeleted;
	OADGraphicProperties* mGraphicProperties;

}
+(id)trendlineLabelWithResources:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)graphicProperties;
-(unsigned)contentFormatId;
-(id)contentFormat;
-(id)lastCachedName;
-(void)setContentFormatId:(unsigned)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setName:(id)arg1 chart:(id)arg2 ;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg1 ;
-(void)setGeneratedText:(BOOL)arg1 ;
-(void)setAutomaticLabelDeleted:(BOOL)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(unsigned)stringIndex;
-(void)setStringIndex:(unsigned)arg1 ;
-(BOOL)isGeneratedText;
-(BOOL)isAutomaticLabelDeleted;
@end

