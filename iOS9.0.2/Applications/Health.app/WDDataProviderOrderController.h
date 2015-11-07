/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HKHealthStore, NSHashTable;

@interface WDDataProviderOrderController : NSObject {

	HKHealthStore* _healthStore;
	NSHashTable* _observers;

}
-(void)_notifyObserversForDataType:(id)arg1 withProviders:(id)arg2 ;
-(void)getOrderedDataProviderSourcesForDataType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setOrderedDataProviderSources:(id)arg1 dataType:(id)arg2 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
@end

