/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECFormulaProcessor : NSObject {

	XlFormulaProcessor* mXlFormulaProcessorLasso;
	XlFormulaProcessor* mXlFormulaProcessorXl;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mLassoSheetNames;
	ChVector<OcText>* mXlSheetNames;
	XlLinkTable* mXlLinkTable;

}
+(id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(XlFormulaProcessor*)arg3 ;
-(void)dealloc;
-(id)init;
-(ChVector<OcText>*)sheetNamesFromWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)setupWithWorkbook:(id)arg1 xlNameTable:(XlNameTable*)arg2 sheetNames:(ChVector<OcText>*)arg3 xlLinkTable:(XlLinkTable*)arg4 lassoSyntax:(BOOL)arg5 ;
-(void)setupWithWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)xlFormulaProcessorLasso;
-(XlFormulaProcessor*)xlFormulaProcessorXl;
@end

