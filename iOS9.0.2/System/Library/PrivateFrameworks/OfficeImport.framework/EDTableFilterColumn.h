/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {

	unsigned mColumnIndex;
	NSMutableArray* mFilters;
	int mFiltersRelation;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setColumnIndex:(unsigned)arg1 ;
-(unsigned)filterCount;
-(id)filterAtIndex:(unsigned)arg1 ;
-(void)addFilter:(id)arg1 ;
-(unsigned)columnIndex;
-(int)filtersRelation;
-(void)setFiltersRelation:(int)arg1 ;
@end

