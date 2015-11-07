/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {

	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long _length;
	unsigned long _hashValue;
	SCD_Struct_NS26* _runs;
	long _numRuns;
	long _allocedRunsSize;
	long _numHits;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(oneway void)release;
-(unsigned)hash;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(unsigned)length;
-(id)string;
-(char)_isDeallocating;
-(id)initWithString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)cache;
-(char)_tryRetain;
-(void)finalize;
-(char)_isStringDrawingTextStorage;
-(char)_baselineMode;
-(id)copyCachedInstance;
@end

