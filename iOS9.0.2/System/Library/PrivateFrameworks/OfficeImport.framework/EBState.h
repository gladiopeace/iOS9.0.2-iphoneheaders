/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class EDWorkbook, EDResources, TCTracing;

@interface EBState : NSObject {

	XlLinkTable* mXlLinkTable;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mSheetNames;
	XlFormulaProcessor* mXlFormulaProcessor;
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	id<TCCancelDelegate> mCancelDelegate;
	TCTracing* mTracing;

}

@property (nonatomic,readonly) id<TCCancelDelegate> cancelDelegate; 
-(void)dealloc;
-(char)isCancelled;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)workbook;
-(void)setWorkbook:(id)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)tracing;
-(id<TCCancelDelegate>)cancelDelegate;
-(XlFormulaProcessor*)xlFormulaProcessor;
-(XlNameTable*)xlNameTable;
-(XlLinkTable*)xlLinkTable;
-(ChVector<OcText>*)sheetNames;
@end

