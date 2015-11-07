/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/_CDPModel.h>

@protocol _CDPDataHarvester;
@class NSArray, NSIndexSet, NSString;

@interface _CDPSimpleModel : NSObject <_CDPModel> {

	char _loaded;
	char _scoresAreDirty;
	unsigned long _NEmail;
	unsigned long _size;
	unsigned long _NPeople;
	double* _timestamp;
	BOOL* _userIsSender;
	BOOL* _userIsThreadInitiator;
	unsigned* _email;
	unsigned* _emailLength;
	float* _email2LogScore;
	unsigned* _people2Email;
	unsigned* _people2EmailLength;
	NSArray* _people;
	NSIndexSet* _testingIndices;
	char _requireOutgoingInteraction;
	id<_CDPDataHarvester> _harvester;
	float _lambda;
	float _w0;

}

@property (nonatomic,readonly) unsigned long nPeople; 
@property (nonatomic,readonly) unsigned long nEmail; 
@property (nonatomic,readonly) NSArray * people; 
@property (nonatomic,retain) id<_CDPDataHarvester> harvester;              //@synthesize harvester=_harvester - In the implementation block
@property (nonatomic,readonly) float lambda;                               //@synthesize lambda=_lambda - In the implementation block
@property (nonatomic,readonly) float w0;                                   //@synthesize w0=_w0 - In the implementation block
@property (assign,nonatomic) char requireOutgoingInteraction;              //@synthesize requireOutgoingInteraction=_requireOutgoingInteraction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)maxNumberOfEmailsSupported;
-(void)dealloc;
-(float)lambda;
-(float)w0;
-(id<_CDPDataHarvester>)harvester;
-(void)_reallocModel;
-(unsigned*)_newIdsForPeople:(id)arg1 length:(unsigned*)arg2 ;
-(char)requireOutgoingInteraction;
-(cdp_prediction_result*)_newPredictionResultWithSeed:(unsigned*)arg1 seedLength:(unsigned long)arg2 realSeedLength:(unsigned long)arg3 maxTrainingEmailID:(unsigned)arg4 ;
-(void)_printUsers:(unsigned*)arg1 length:(unsigned long)arg2 ;
-(void)loadModel:(/*^block*/id)arg1 ;
-(void)makePredictionForGroup:(id)arg1 clientType:(int)arg2 limit:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setLambda:(float)arg1 w0:(float)arg2 ;
-(id)_testingIndices;
-(void)getEmail:(unsigned*)arg1 emailLength:(unsigned*)arg2 atIndex:(unsigned long)arg3 ;
-(unsigned long)nPeople;
-(unsigned long)nEmail;
-(void)_printEmailWithID:(unsigned)arg1 ;
-(void)_printUserWithID:(unsigned)arg1 ;
-(void)_printPrediction:(cdp_prediction_result*)arg1 ;
-(id)peopleWithID:(unsigned)arg1 ;
-(void)setHarvester:(id<_CDPDataHarvester>)arg1 ;
-(void)setRequireOutgoingInteraction:(char)arg1 ;
-(NSArray *)people;
@end

