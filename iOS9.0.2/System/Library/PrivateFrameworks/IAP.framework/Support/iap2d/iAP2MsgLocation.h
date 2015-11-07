/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableArray, iAP2EAManager, iAP2Connection;

@interface iAP2MsgLocation : NSObject {

	BOOL bLocationStarted;
	BOOL bNMEAFilterListNew;
	NSLock* pNMEALock;
	NSMutableArray* pNMEASentArray;
	NSMutableArray* pNMEAFilterList;
	iAP2EAManager* pkEAManager;
	iAP2Connection* pkConnection;
	unsigned minNMEAIntervalMs;

}

@property (assign) NSLock * pNMEALock; 
@property (assign) NSMutableArray * pNMEASentArray; 
@property (readonly) NSMutableArray * pNMEAFilterList; 
@property (assign) iAP2EAManager * pkEAManager; 
@property (assign) iAP2Connection * pkConnection; 
@property (assign) unsigned minNMEAIntervalMs; 
@property (assign) BOOL bLocationStarted; 
@property (assign) BOOL bNMEAFilterListNew; 
+(int)startLocationUpdate:(id)arg1 ;
+(int)stopLocationUpdate:(id)arg1 ;
-(unsigned)countNMEASentences;
-(id)dequeueNMEASentence;
-(BOOL)bLocationStarted;
-(void)enqueueNMEASentence:(id)arg1 ;
-(NSMutableArray *)pNMEAFilterList;
-(BOOL)bNMEAFilterListNew;
-(unsigned)minNMEAIntervalMs;
-(void)setBLocationStarted:(BOOL)arg1 ;
-(void)setBNMEAFilterListNew:(BOOL)arg1 ;
-(void)setMinNMEAIntervalMs:(unsigned)arg1 ;
-(void)setNMEAFilterList:(id)arg1 ;
-(void)requestLocationAssist:(id)arg1 ;
-(NSLock *)pNMEALock;
-(void)setPNMEALock:(NSLock *)arg1 ;
-(NSMutableArray *)pNMEASentArray;
-(void)setPNMEASentArray:(NSMutableArray *)arg1 ;
-(iAP2EAManager *)pkEAManager;
-(void)setPkEAManager:(iAP2EAManager *)arg1 ;
-(iAP2Connection *)pkConnection;
-(void)setPkConnection:(iAP2Connection *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithConnection:(id)arg1 ;
@end

