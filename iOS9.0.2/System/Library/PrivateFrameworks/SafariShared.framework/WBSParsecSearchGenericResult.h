/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSearchResult.h>

@class WBSParsecActionButton, NSNumber, NSArray, NSString, WBSParsecImageRepresentation, WBSParsecAuxiliaryInfo;

@interface WBSParsecSearchGenericResult : WBSParsecSearchResult {

	WBSParsecActionButton* _actionButton;
	NSNumber* _titleMaximumLines;
	NSArray* _descriptionRichTexts;
	NSString* _footnote;
	NSString* _secondaryTitle;
	WBSParsecImageRepresentation* _secondaryTitleGlyph;
	WBSParsecAuxiliaryInfo* _auxiliaryInfo;
	NSArray* _rowSections;
	WBSParsecImageRepresentation* _thumbnail;

}

@property (nonatomic,readonly) NSNumber * titleMaximumLines;                                    //@synthesize titleMaximumLines=_titleMaximumLines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * descriptionRichTexts;                             //@synthesize descriptionRichTexts=_descriptionRichTexts - In the implementation block
@property (nonatomic,copy,readonly) NSString * footnote;                                        //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryTitle;                                  //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * secondaryTitleGlyph;              //@synthesize secondaryTitleGlyph=_secondaryTitleGlyph - In the implementation block
@property (nonatomic,readonly) WBSParsecAuxiliaryInfo * auxiliaryInfo;                          //@synthesize auxiliaryInfo=_auxiliaryInfo - In the implementation block
@property (nonatomic,readonly) NSArray * rowSections;                                           //@synthesize rowSections=_rowSections - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * thumbnail;                        //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)_specializedSchema;
-(NSString *)secondaryTitle;
-(NSString *)footnote;
-(id)actionButton;
-(WBSParsecAuxiliaryInfo *)auxiliaryInfo;
-(NSArray *)rowSections;
-(id)initWithDictionary:(id)arg1 ;
-(WBSParsecImageRepresentation *)thumbnail;
-(id)thumbnailWithSession:(id)arg1 ;
-(NSNumber *)titleMaximumLines;
-(NSArray *)descriptionRichTexts;
-(WBSParsecImageRepresentation *)secondaryTitleGlyph;
@end

