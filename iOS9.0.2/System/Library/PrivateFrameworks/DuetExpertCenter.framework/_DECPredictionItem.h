/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _DECItem;

@interface _DECPredictionItem : NSObject <NSSecureCoding> {

	_DECItem* _item;
	unsigned _appDeeplinkHeuristic;
	double _confidence;

}

@property (nonatomic,readonly) _DECItem * item;                          //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) unsigned appDeeplinkHeuristic;              //@synthesize appDeeplinkHeuristic=_appDeeplinkHeuristic - In the implementation block
+(char)supportsSecureCoding;
+(id)predictionItemWithItem:(id)arg1 confidence:(double)arg2 appDeeplinkHeuristic:(unsigned)arg3 ;
+(id)predictionItemWithItem:(id)arg1 confidence:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(_DECItem *)item;
-(id)initWithItem:(id)arg1 confidence:(double)arg2 appDeeplinkHeuristic:(unsigned)arg3 ;
-(unsigned)appDeeplinkHeuristic;
-(void)setAppDeeplinkHeuristic:(unsigned)arg1 ;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
@end

