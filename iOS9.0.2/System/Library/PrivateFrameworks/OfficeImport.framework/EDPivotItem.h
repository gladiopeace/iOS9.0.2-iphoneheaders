/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDCollection;

@interface EDPivotItem : NSObject {

	unsigned mRepeatedItemCounts;
	int mType;
	EDCollection* mItemIndexes;

}
+(id)pivotItem;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned)repeatedItemCounts;
-(void)setRepeatedItemCounts:(unsigned)arg1 ;
-(id)itemIndexes;
@end

