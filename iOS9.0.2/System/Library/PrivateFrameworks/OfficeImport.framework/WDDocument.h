/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDocument.h>

@class WDStyleSheet, WDFontTable, WDListDefinitionTable, WDRevisionAuthorTable, WDCitationTable, WDListTable, NSMutableArray, WDText, NSString, NSDate, OADBackground, NSMutableSet, OADColorMap;

@interface WDDocument : OCDDocument {

	WDStyleSheet* mStyleSheet;
	WDFontTable* mFontTable;
	WDListDefinitionTable* mListDefinitionTable;
	WDRevisionAuthorTable* mRevisionAuthorTable;
	WDCitationTable* mCitationTable;
	WDListTable* mListTable;
	NSMutableArray* mSections;
	unsigned short mDefaultTabWidth;
	WDText* mImageBulletText;
	WDText* mFootnoteSeparator;
	WDText* mFootnoteContinuationSeparator;
	WDText* mFootnoteContinuationNotice;
	WDText* mEndnoteSeparator;
	WDText* mEndnoteContinuationSeparator;
	WDText* mEndnoteContinuationNotice;
	int mFootnoteNumberFormat;
	int mEndnoteNumberFormat;
	int mFootnotePosition;
	int mEndnotePosition;
	int mFootnoteRestart;
	int mEndnoteRestart;
	unsigned short mFootnoteNumberingStart;
	int mGutterPosition;
	NSString* mOleFilename;
	NSString* mKinsokuAltBreakBefore;
	NSString* mKinsokuAltBreakAfter;
	short mZoomPercentage;
	NSString* mVersion;
	NSString* mLanguage;
	unsigned mMirrorMargins : 1;
	unsigned mBorderSurroundHeader : 1;
	unsigned mBorderSurroundFooter : 1;
	unsigned mKinsokuStrict : 1;
	unsigned mAutoHyphenate : 1;
	unsigned mEvenAndOddHeaders : 1;
	unsigned mBookFold : 1;
	unsigned mShowMarkup : 1;
	unsigned mShowComments : 1;
	unsigned mTrackChanges : 1;
	unsigned mShowRevisionMarksOnScreen : 1;
	unsigned mShowInsertionsAndDeletions : 1;
	unsigned mShowFormatting : 1;
	unsigned mShowOutline : 1;
	unsigned mNoTabForHangingIndents : 1;
	NSMutableArray* mDocumentImages;
	NSMutableArray* mChangeTrackingEditDates;
	NSMutableArray* mChangeTrackingEditAuthors;
	NSDate* mCreationDate;
	NSDate* mModificationDate;
	NSMutableArray* mImageBullets;
	OADBackground* mDocumentBackground;
	NSMutableSet* mObjPointers;
	OADColorMap* mColorMap;

}
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(id)sections;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)addSection;
-(unsigned short)defaultTabWidth;
-(unsigned)sectionCount;
-(id)sectionAt:(unsigned)arg1 ;
-(id)oleFilename;
-(id)listWithListId:(long)arg1 ;
-(id)listDefinitionWithListDefinitionId:(long)arg1 ;
-(id)listTable;
-(id)styleSheet;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
-(id)fontTable;
-(void)setOleFilename:(id)arg1 ;
-(void)setDocumentBackground:(id)arg1 ;
-(id)imageBullets;
-(id)addImageBulletText;
-(id)listDefinitionTable;
-(id)revisionAuthorTable;
-(id)footnoteSeparator;
-(id)footnoteContinuationSeparator;
-(id)footnoteContinuationNotice;
-(id)endnoteSeparator;
-(id)endnoteContinuationSeparator;
-(id)endnoteContinuationNotice;
-(id)applicationName;
-(void)setTrackChanges:(char)arg1 ;
-(void)setShowRevisionMarksOnScreen:(char)arg1 ;
-(void)setShowInsertionsAndDeletions:(char)arg1 ;
-(void)setShowFormatting:(char)arg1 ;
-(void)setShowMarkup:(char)arg1 ;
-(void)setShowComments:(char)arg1 ;
-(void)setMirrorMargins:(char)arg1 ;
-(void)setBorderSurroundHeader:(char)arg1 ;
-(void)setBorderSurroundFooter:(char)arg1 ;
-(void)setDefaultTabWidth:(unsigned short)arg1 ;
-(void)setAutoHyphenate:(char)arg1 ;
-(void)setEvenAndOddHeaders:(char)arg1 ;
-(void)setFootnotePosition:(int)arg1 ;
-(void)setEndnotePosition:(int)arg1 ;
-(void)setFootnoteNumberFormat:(int)arg1 ;
-(void)setEndnoteNumberFormat:(int)arg1 ;
-(void)setFootnoteRestart:(int)arg1 ;
-(void)setEndnoteRestart:(int)arg1 ;
-(void)setFootnoteNumberingStart:(unsigned short)arg1 ;
-(void)setGutterPosition:(int)arg1 ;
-(void)setBookFold:(char)arg1 ;
-(void)setNoTabForHangingIndents:(char)arg1 ;
-(void)setZoomPercentage:(short)arg1 ;
-(void)setShowOutline:(char)arg1 ;
-(void)setKinsokuStrict:(char)arg1 ;
-(void)setKinsokuAltBreakAfter:(id)arg1 ;
-(void)setKinsokuAltBreakBefore:(id)arg1 ;
-(id)imageBulletWithCharacterOffset:(int)arg1 ;
-(void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2 ;
-(void)addObjPointer:(id)arg1 ;
-(void)removeObjPointer:(id)arg1 ;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)listDefinitionWithListId:(long)arg1 ;
-(id)newSectionIterator;
-(id)newMainBlocksIterator;
-(id)newMainRunsIterator;
-(id)newFootnoteIterator;
-(id)newEndnoteIterator;
-(id)newAnnotationIterator;
-(id)newFootnoteBlockIterator;
-(id)newEndnoteBlockIterator;
-(id)newAnnotationBlockIterator;
-(id)lastSection;
-(char)mirrorMargins;
-(char)borderSurroundHeader;
-(char)borderSurroundFooter;
-(id)kinsokuAltBreakBefore;
-(id)kinsokuAltBreakAfter;
-(char)kinsokuStrict;
-(char)autoHyphenate;
-(char)evenAndOddHeaders;
-(int)footnoteNumberFormat;
-(int)endnoteNumberFormat;
-(int)footnotePosition;
-(int)endnotePosition;
-(int)footnoteRestart;
-(int)endnoteRestart;
-(unsigned short)footnoteNumberingStart;
-(unsigned)citationCount;
-(id)citationTable;
-(id)listLevelWithListId:(long)arg1 levelIndex:(unsigned char)arg2 ;
-(int)gutterPosition;
-(char)bookFold;
-(short)zoomPercentage;
-(void)addImageBullets;
-(unsigned)revisionAuthorCount;
-(id)revisionAuthorAt:(unsigned)arg1 ;
-(void)addRevisionAuthor:(id)arg1 ;
-(char)showMarkup;
-(char)showComments;
-(char)trackChanges;
-(char)showRevisionMarksOnScreen;
-(char)showInsertionsAndDeletions;
-(char)showFormatting;
-(char)showOutline;
-(char)noTabForHangingIndents;
-(id)changeTrackingEditDates;
-(id)changeTrackingEditAuthors;
-(id)lastModDate;
-(void)setLastModDate:(id)arg1 ;
-(id)imageBulletText;
-(id)documentBackground;
-(void)removeEmptySections;
-(id)sectionIterator;
-(id)mainBlocksIterator;
-(id)mainRunsIterator;
-(id)footnoteIterator;
-(id)endnoteIterator;
-(id)annotationIterator;
-(id)footnoteBlockIterator;
-(id)endnoteBlockIterator;
-(id)annotationBlockIterator;
-(char)isFromBinary;
-(id)imageBulletParagraph;
-(unsigned)revisionAuthorAddLookup:(id)arg1 ;
@end

