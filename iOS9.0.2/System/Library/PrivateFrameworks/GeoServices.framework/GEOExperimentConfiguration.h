/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOExperimentServerProxyDelegate.h>

@protocol GEOExperimentServerProxy;
@class GEOABExperimentResponse, NSLock, NSMutableArray, NSString;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {

	id<GEOExperimentServerProxy> _serverProxy;
	GEOABExperimentResponse* _experimentsInfo;
	NSLock* _experimentsInfoLock;
	NSMutableArray* _experimentObservers;
	NSLock* _experimentObserversLock;

}

@property (nonatomic,readonly) GEOABExperimentResponse * experimentsInfo; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setServerProxyClass:(Class)arg1 ;
+(id)sharedConfiguration;
-(void)dealloc;
-(id)init;
-(id)detailedDescription;
-(id)experimentAssignments;
-(GEOABExperimentResponse *)experimentsInfo;
-(void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2 ;
-(id)experimentURLForURL:(id)arg1 type:(int)arg2 dispatcherRequestType:(int)arg3 ;
-(id)experimentAssignmentForType:(int)arg1 dispatcherRequestType:(int)arg2 ;
-(void)_debug_forceUpdate;
-(void)removeExperimentObserver:(id)arg1 ;
-(id)_debug_configurationDate;
-(void)addExperimentObserver:(id)arg1 queue:(id)arg2 ;
-(id)_debug_customQuerySubstringForType:(int)arg1 dispatcherRequestType:(int)arg2 ;
-(void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(int)arg2 dispatcherRequestType:(int)arg3 ;
-(id)_debug_defaultQuerySubstringForType:(int)arg1 dispatcherRequestType:(int)arg2 ;
-(void)_debug_forEachExperimentType:(/*^block*/id)arg1 ;
@end

