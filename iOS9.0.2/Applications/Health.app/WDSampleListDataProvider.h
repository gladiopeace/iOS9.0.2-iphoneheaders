/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDDataListViewControllerDataProvider.h>

@class NSMutableArray, NSDictionary, NSMutableDictionary, NSMutableSet, HKDataUnitGroup, WDControllerManager, HKUnitController, NSArray, NSString;

@interface WDSampleListDataProvider : NSObject <WDDataListViewControllerDataProvider> {

	NSMutableArray* _data;
	NSDictionary* _observerQueries;
	NSMutableDictionary* _anchorDictionary;
	NSMutableArray* _activeDataQueries;
	NSMutableSet* _activeQueryTypes;
	NSMutableSet* _pendingQueryTypes;
	HKDataUnitGroup* _dataUnitGroup;
	WDControllerManager* _controllerManager;
	HKUnitController* _unitController;

}

@property (nonatomic,readonly) NSArray * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) HKDataUnitGroup * dataUnitGroup;                      //@synthesize dataUnitGroup=_dataUnitGroup - In the implementation block
@property (nonatomic,readonly) WDControllerManager * controllerManager;              //@synthesize controllerManager=_controllerManager - In the implementation block
@property (nonatomic,readonly) HKUnitController * unitController;                    //@synthesize unitController=_unitController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKUnitController *)unitController;
-(id)sampleTypes;
-(id)dataListViewController:(id)arg1 textForObject:(id)arg2 ;
-(id)dataListViewController:(id)arg1 textForObjectWithUnits:(id)arg2 ;
-(id)dataListViewController:(id)arg1 titleForSection:(unsigned)arg2 ;
-(id)defaultDetailValuesForSample:(id)arg1 ;
-(id)predicateForType:(id)arg1 ;
-(void)_handleResults:(id)arg1 forQuery:(id)arg2 sampleType:(id)arg3 anchor:(id)arg4 error:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_updateDataWithSource:(id)arg1 healthStore:(id)arg2 sampleType:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_queryPredicateForSource:(id)arg1 type:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)dataListViewController:(id)arg1 objectAtIndex:(unsigned)arg2 forSection:(unsigned)arg3 ;
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 ;
-(int)cellStyleForDataListViewController:(id)arg1 ;
-(unsigned)numberOfSectionsForDataListViewController:(id)arg1 ;
-(unsigned)dataListViewController:(id)arg1 numberOfObjectsForSection:(unsigned)arg2 ;
-(id)dataListViewController:(id)arg1 secondaryTextForObject:(id)arg2 ;
-(void)dataListViewController:(id)arg1 startCollectingDataForSource:(id)arg2 healthStore:(id)arg3 forStartDate:(id)arg4 endDate:(id)arg5 updateHandler:(/*^block*/id)arg6 ;
-(void)dataListViewController:(id)arg1 stopCollectingDataWithHealthStore:(id)arg2 ;
-(void)deleteObjectsAtIndexPath:(id)arg1 withSource:(id)arg2 healthStore:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dataListViewController:(id)arg1 didRemoveObjectAtIndex:(unsigned)arg2 forSection:(unsigned)arg3 ;
-(void)dataListviewControllerDidDeleteAllData:(id)arg1 ;
-(WDControllerManager *)controllerManager;
-(id)restorationIdentifier;
-(NSArray *)data;
-(HKDataUnitGroup *)dataUnitGroup;
@end

