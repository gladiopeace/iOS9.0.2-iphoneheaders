/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDHealthDataCollectionManager.h>

@protocol HDHealthDaemon, HDDataCollectionManagerDelegate, OS_dispatch_queue;
@class NSDate, NSMutableSet, NSMutableDictionary, NSObject, HDDemoManager, NSString;

@interface HDDataCollectionManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDHealthDataCollectionManager> {

	NSDate* _lastLaunchUpdate;
	NSMutableSet* _dataCollectors;
	id<HDHealthDaemon> _healthDaemon;
	id<HDDataCollectionManagerDelegate> _delegate;
	NSMutableDictionary* _activeDataClasses;
	NSObject*<OS_dispatch_queue> _queue;
	HDDemoManager* _demoManager;

}

@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                           //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (assign,nonatomic,__weak) id<HDDataCollectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeDataClasses;                          //@synthesize activeDataClasses=_activeDataClasses - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HDDemoManager * demoManager;                                      //@synthesize demoManager=_demoManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<HDDataCollectionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<HDDataCollectionManagerDelegate>)delegate;
-(id<HDHealthDaemon>)healthDaemon;
-(void)generateFakeDataForActivityType:(int)arg1 minutes:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 delegate:(id)arg2 ;
-(void)periodicUpdate;
-(id)dataCollectors;
-(void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3 ;
-(void)stopDataCollectionForType:(id)arg1 observer:(id)arg2 ;
-(void)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)stopFakingData;
-(void)stopReplayingData;
-(void)stopRecordingData;
-(void)startRecordingDataToFile:(id)arg1 ;
-(char)_queue_dataReceived:(id)arg1 provenance:(id)arg2 isDemoData:(char)arg3 error:(id*)arg4 ;
-(void)_queue_addObserver:(id)arg1 collectionInterval:(double)arg2 forType:(id)arg3 ;
-(void)_queue_alertCollectorsCollectionStartedForType:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg1 forType:(id)arg2 ;
-(char)_queue_observersExistForType:(id)arg1 ;
-(void)_queue_alertCollectorsCollectionStoppedForType:(id)arg1 ;
-(void)_queue_updateCollectionPeriodForCollectorsOfType:(id)arg1 ;
-(double)_queue_collectionIntervalForType:(id)arg1 ;
-(void)_queue_setupUnprotectedDataDependantState;
-(void)_queue_addDataCollector:(id)arg1 ;
-(void)_queue_alertCollectorsOfTypesWithObservers;
-(id)_queue_demoManagerCreatingIfNecessary;
-(void)_demoObjectsReceived:(id)arg1 ;
-(void)startFakingDataWithActivityType:(int)arg1 speed:(id)arg2 ;
-(id)_activeClassesString;
-(id)_dataCollectorsDiagnosticDescription;
-(void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2 ;
-(void)setDataCollectors:(id)arg1 ;
-(char)_queue_anyObserversExistForTypes:(id)arg1 ;
-(void)_updateDataCollectorsWithPrivacySettings;
-(void)startFakingWithHKWorkoutActivityType:(unsigned)arg1 ;
-(void)startReplayingDataFromFile:(id)arg1 repeat:(char)arg2 ;
-(NSMutableDictionary *)activeDataClasses;
-(void)setActiveDataClasses:(NSMutableDictionary *)arg1 ;
-(HDDemoManager *)demoManager;
-(void)setDemoManager:(HDDemoManager *)arg1 ;
@end

