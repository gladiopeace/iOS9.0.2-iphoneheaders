/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDChartSheet;

@interface EMChartsheetMapper : EMSheetMapper {

	EDChartSheet* mChartSheet;
	CGRect mBox;

}
-(int)width;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithChartSheet:(id)arg1 parent:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
@end

