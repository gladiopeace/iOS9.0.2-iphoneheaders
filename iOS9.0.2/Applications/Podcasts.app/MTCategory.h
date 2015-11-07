/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface MTCategory : NSManagedObject

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) long long parentStoreId; 
@property (nonatomic,retain) NSString * parentUuid; 
@property (assign,nonatomic) long long storeId; 
@property (nonatomic,retain) NSString * uuid; 
+(id)categoryForName:(id)arg1 managedObjectContext:(id)arg2 insertIfNeeded:(char)arg3 ;
+(id)categoryUuidForName:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)rootCategoriesInManagedObjectContext:(id)arg1 ;
-(void)addPodcastUuid:(id)arg1 ;
-(void)setParentUuid:(NSString *)arg1 ;
-(id)subCategoryIds;
-(id)podcastUuids;
-(id)parentId;
@end

