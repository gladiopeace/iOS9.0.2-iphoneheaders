/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDPivotAreaReference : NSObject {

	BOOL mByPosition;
	BOOL mRelative;
	BOOL mSelected;
	unsigned long mFieldId;
	unsigned long mCount;

}
+(id)pivotAreaReference;
-(unsigned long)count;
-(id)init;
-(id)description;
-(void)setCount:(unsigned long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)relative;
-(void)setRelative:(BOOL)arg1 ;
-(unsigned long)fieldId;
-(void)setFieldId:(unsigned long)arg1 ;
-(BOOL)byPosition;
-(void)setByPosition:(BOOL)arg1 ;
@end

