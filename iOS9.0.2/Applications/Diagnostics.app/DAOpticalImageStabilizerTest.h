/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DATestOperation.h>

@class NSArray, OSDCamera, OSDBumpMonitor, NSMutableArray;

@interface DAOpticalImageStabilizerTest : DATestOperation {

	unsigned _numberSamplesToAverage;
	int _numberRetriesForPosition;
	float _xStdDevErrorLimit;
	float _yStdDevErrorLimit;
	float _xScaler;
	float _yScaler;
	float _distanceTolerance;
	unsigned _settlingTimeMS;
	NSArray* _positions;
	OSDCamera* _osdCamera;
	OSDBumpMonitor* _bumpMonitor;
	NSMutableArray* _bumpEvents;
	NSMutableArray* _testInstances;
	NSMutableArray* _actualPositions;
	NSMutableArray* _allResults;

}

@property (assign,nonatomic) unsigned numberSamplesToAverage;               //@synthesize numberSamplesToAverage=_numberSamplesToAverage - In the implementation block
@property (assign,nonatomic) int numberRetriesForPosition;                  //@synthesize numberRetriesForPosition=_numberRetriesForPosition - In the implementation block
@property (assign,nonatomic) float xStdDevErrorLimit;                       //@synthesize xStdDevErrorLimit=_xStdDevErrorLimit - In the implementation block
@property (assign,nonatomic) float yStdDevErrorLimit;                       //@synthesize yStdDevErrorLimit=_yStdDevErrorLimit - In the implementation block
@property (assign,nonatomic) float xScaler;                                 //@synthesize xScaler=_xScaler - In the implementation block
@property (assign,nonatomic) float yScaler;                                 //@synthesize yScaler=_yScaler - In the implementation block
@property (assign,nonatomic) float distanceTolerance;                       //@synthesize distanceTolerance=_distanceTolerance - In the implementation block
@property (assign,nonatomic) unsigned settlingTimeMS;                       //@synthesize settlingTimeMS=_settlingTimeMS - In the implementation block
@property (nonatomic,retain) NSArray * positions;                           //@synthesize positions=_positions - In the implementation block
@property (nonatomic,retain) OSDCamera * osdCamera;                         //@synthesize osdCamera=_osdCamera - In the implementation block
@property (nonatomic,retain) OSDBumpMonitor * bumpMonitor;                  //@synthesize bumpMonitor=_bumpMonitor - In the implementation block
@property (nonatomic,retain) NSMutableArray * bumpEvents;                   //@synthesize bumpEvents=_bumpEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * testInstances;                //@synthesize testInstances=_testInstances - In the implementation block
@property (nonatomic,retain) NSMutableArray * actualPositions;              //@synthesize actualPositions=_actualPositions - In the implementation block
@property (nonatomic,retain) NSMutableArray * allResults;                   //@synthesize allResults=_allResults - In the implementation block
-(char)parameterize:(id)arg1 ;
-(NSMutableArray *)allResults;
-(void)setAllResults:(NSMutableArray *)arg1 ;
-(void)setPositions:(NSArray *)arg1 ;
-(NSArray *)positions;
-(char)doesSpecificationExist:(id)arg1 ;
-(void)startOpticalImageStabilizerTest;
-(void)setNumberSamplesToAverage:(unsigned)arg1 ;
-(void)setNumberRetriesForPosition:(int)arg1 ;
-(void)setXStdDevErrorLimit:(float)arg1 ;
-(void)setYStdDevErrorLimit:(float)arg1 ;
-(void)setXScaler:(float)arg1 ;
-(void)setYScaler:(float)arg1 ;
-(void)setDistanceTolerance:(float)arg1 ;
-(void)setSettlingTimeMS:(unsigned)arg1 ;
-(void)setOsdCamera:(OSDCamera *)arg1 ;
-(void)setBumpMonitor:(OSDBumpMonitor *)arg1 ;
-(OSDBumpMonitor *)bumpMonitor;
-(NSMutableArray *)bumpEvents;
-(OSDCamera *)osdCamera;
-(int)numberRetriesForPosition;
-(float)xScaler;
-(float)yScaler;
-(NSMutableArray *)testInstances;
-(NSMutableArray *)actualPositions;
-(unsigned)settlingTimeMS;
-(unsigned)numberSamplesToAverage;
-(double)average:(double*)arg1 size:(unsigned)arg2 ;
-(double)stdev:(double*)arg1 size:(unsigned)arg2 ;
-(float)xStdDevErrorLimit;
-(float)yStdDevErrorLimit;
-(float)distanceTolerance;
-(double)variance:(double*)arg1 size:(unsigned)arg2 ;
-(void)setBumpEvents:(NSMutableArray *)arg1 ;
-(void)setTestInstances:(NSMutableArray *)arg1 ;
-(void)setActualPositions:(NSMutableArray *)arg1 ;
-(void)start;
-(void)setStatusCode:(id)arg1 ;
@end

