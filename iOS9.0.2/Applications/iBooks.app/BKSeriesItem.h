/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber;

@interface BKSeriesItem : NSManagedObject

@property (nonatomic,retain) NSString * adamId; 
@property (nonatomic,retain) NSString * sortTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * sortAuthor; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSNumber * position; 
@property (nonatomic,retain) NSNumber * popularity; 
@property (nonatomic,retain) NSString * seriesAdamId; 
@property (nonatomic,retain) NSString * seriesTitle; 
@property (nonatomic,retain) NSNumber * isExplicit; 
@property (nonatomic,retain) NSNumber * isContainer; 
@property (nonatomic,retain) NSString * sequenceDisplayName; 
@property (nonatomic,retain) NSString * genre; 
+(id)predicateForAllSeriesItems;
+(id)predicateForAllSeriesContainerItems;
+(id)predicateForAllItemsAndContainersInSeries:(id)arg1 ;
+(id)insertSeriesContainerWithSeriesAdamId:(id)arg1 intoManagedObjectContext:(id)arg2 ;
+(id)predicateForAllItemsAndContainerWithAdamIdInList:(id)arg1 ;
+(id)insertSeriesItemWithAdamId:(id)arg1 seriesAdamId:(id)arg2 intoManagedObjectContext:(id)arg3 ;
+(id)seriesItem;
+(id)predicateForItemWithAdamId:(id)arg1 ;
+(id)predicateForContainerWithSeriesId:(id)arg1 ;
+(id)fetchRequest;
@end

