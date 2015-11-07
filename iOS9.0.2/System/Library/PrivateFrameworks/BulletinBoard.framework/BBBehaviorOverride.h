/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface BBBehaviorOverride : NSObject <NSCopying, NSSecureCoding> {

	unsigned _overrideType;
	unsigned _mode;
	NSArray* _effectiveIntervals;

}

@property (assign,nonatomic) unsigned overrideType;                   //@synthesize overrideType=_overrideType - In the implementation block
@property (assign,nonatomic) unsigned mode;                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * effectiveIntervals;              //@synthesize effectiveIntervals=_effectiveIntervals - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)nextOverrideTransitionDateAfterDate:(id)arg1 ;
-(char)isActiveForDate:(id)arg1 ;
-(void)setEffectiveIntervals:(NSArray *)arg1 ;
-(id)initWithEffectiveIntervals:(id)arg1 overrideType:(unsigned)arg2 ;
-(id)initWithOverrideType:(unsigned)arg1 mode:(unsigned)arg2 effectiveIntervals:(id)arg3 ;
-(unsigned)overrideType;
-(void)setOverrideType:(unsigned)arg1 ;
-(NSArray *)effectiveIntervals;
@end

