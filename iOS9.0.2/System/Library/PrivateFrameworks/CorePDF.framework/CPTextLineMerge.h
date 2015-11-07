/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CPTextLineMerge : NSObject {

	NSMutableArray* avail;

}
-(void)mergeLinesIn:(id)arg1 ;
-(char)fits:(id)arg1 into:(id)arg2 ;
-(void)mergeColumn:(id)arg1 ;
-(void)addInterval:(id)arg1 to:(id)arg2 ;
-(void)mergeLinesInInterval:(id)arg1 from:(id)arg2 ;
-(void)detachDropCaps:(id)arg1 to:(id)arg2 ;
-(float)averageHeight:(id)arg1 ;
-(unsigned)countOverlapsOfLineAtIndex:(unsigned)arg1 in:(id)arg2 ;
-(id)findLineFor:(id)arg1 in:(id)arg2 ;
-(char)hasOverlappingLines;
-(void)makeOverlappingLinesTo:(id)arg1 ;
-(void)dropCaps:(id)arg1 to:(id)arg2 ;
-(void)eliminate:(id)arg1 ;
-(void)mergeByColumn:(id)arg1 ;
-(void)removeOverlapping:(id)arg1 ;
@end

