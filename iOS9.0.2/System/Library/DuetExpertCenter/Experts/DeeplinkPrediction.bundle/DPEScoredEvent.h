/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetExpertCenter/Experts/DeeplinkPrediction.bundle/DeeplinkPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _DKEvent, NSString, NSMutableArray;

@interface DPEScoredEvent : NSObject {

	_DKEvent* _dkEvent;
	NSString* _dedupingKey;
	NSMutableArray* _interactions;
	double _score;

}

@property (nonatomic,readonly) _DKEvent * dkEvent;                       //@synthesize dkEvent=_dkEvent - In the implementation block
@property (nonatomic,readonly) double score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSString * dedupingKey;                   //@synthesize dedupingKey=_dedupingKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * interactions;              //@synthesize interactions=_interactions - In the implementation block
+(id)dedupingKeyForDKEvent:(id)arg1 ;
-(double)halfLife;
-(NSString *)dedupingKey;
-(id)predictionItem:(unsigned)arg1 ;
-(void)addDKEvent:(id)arg1 baseScore:(double)arg2 overrideSubScore:(double)arg3 ;
-(id)initWithDKEvent:(id)arg1 dedupingKey:(id)arg2 baseScore:(double)arg3 ;
-(void)adjustScoreForReferenceDate:(id)arg1 eventStore:(id)arg2 ;
-(id)initWithDKEvent:(id)arg1 overrideSubScore:(double)arg2 ;
-(_DKEvent *)dkEvent;
-(double)score;
-(int)compare:(id)arg1 ;
-(void)setInteractions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)interactions;
@end
