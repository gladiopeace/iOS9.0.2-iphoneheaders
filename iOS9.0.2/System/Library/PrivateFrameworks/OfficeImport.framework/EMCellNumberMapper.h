/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class EDStyle, EDWorkbook;

@interface EMCellNumberMapper : CMMapper {

	double edValue;
	EDStyle* edStyle;
	EDWorkbook* workbook;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithDoubleValue:(double)arg1 style:(id)arg2 workbook:(id)arg3 parent:(id)arg4 ;
-(id)formatValueAsNumber;
-(id)insertRedSpanIfNegativeAt:(id)arg1 ;
@end

