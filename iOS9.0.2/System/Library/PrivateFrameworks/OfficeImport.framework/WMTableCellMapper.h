/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDTableCell;

@interface WMTableCellMapper : CMMapper {

	WDTableCell* mWdTableCell;
	unsigned mColSpan;
	double mHeight;
	double mWidth;
	double mLeftPadding;
	double mRightPadding;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)tableMapper;
-(void)mapCellStyleAt:(id)arg1 ;
-(id)initWithWDTableCell:(id)arg1 atIndex:(unsigned)arg2 parent:(id)arg3 ;
-(unsigned)colSpan;
@end

