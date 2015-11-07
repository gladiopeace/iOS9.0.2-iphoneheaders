/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface HKDataUnitGroupController : NSObject {

	NSArray* _dataUnitGroups;
	NSDictionary* _dataUnitGroupsByGroupID;
	NSDictionary* _dataUnitGroupsByCategoryID;
	NSDictionary* _dataUnitGroupsByType;

}
+(id)sharedInstance;
-(id)init;
-(id)allDataUnitGroups;
-(id)dataUnitGroupForType:(id)arg1 ;
-(id)dataUnitGroupWithID:(id)arg1 ;
-(id)dataUnitGroupsForCategoryID:(int)arg1 ;
@end

