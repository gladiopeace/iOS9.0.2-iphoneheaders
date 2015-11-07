/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSScanner, _HKCFGNodeCache;

@interface _HKCFGParseContext : NSObject {

	NSScanner* _scanner;
	unsigned _lengthAllowance;
	unsigned _recursiveDepth;
	_HKCFGNodeCache* _cache;

}

@property (nonatomic,readonly) NSScanner * scanner;                   //@synthesize scanner=_scanner - In the implementation block
@property (nonatomic,readonly) unsigned lengthAllowance;              //@synthesize lengthAllowance=_lengthAllowance - In the implementation block
@property (nonatomic,readonly) unsigned recursiveDepth;               //@synthesize recursiveDepth=_recursiveDepth - In the implementation block
@property (nonatomic,readonly) _HKCFGNodeCache * cache;               //@synthesize cache=_cache - In the implementation block
-(id)initWithScanner:(id)arg1 lengthAllowance:(unsigned)arg2 ;
-(void)incrementRecursiveDepth;
-(void)decrementRecursiveDepth;
-(void)decreaseLengthAllowance:(unsigned)arg1 ;
-(void)increaseLengthAllowance:(unsigned)arg1 ;
-(NSScanner *)scanner;
-(unsigned)lengthAllowance;
-(unsigned)recursiveDepth;
-(_HKCFGNodeCache *)cache;
@end

