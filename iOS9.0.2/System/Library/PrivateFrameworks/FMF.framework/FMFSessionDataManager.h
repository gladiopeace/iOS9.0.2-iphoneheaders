/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet, NSMutableDictionary;

@interface FMFSessionDataManager : NSObject {

	NSSet* _followers;
	NSSet* _following;
	NSSet* _locations;
	NSMutableDictionary* _locationsCache;

}

@property (nonatomic,retain) NSSet * followers;                                 //@synthesize followers=_followers - In the implementation block
@property (nonatomic,retain) NSSet * following;                                 //@synthesize following=_following - In the implementation block
@property (nonatomic,retain) NSSet * locations;                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locationsCache;              //@synthesize locationsCache=_locationsCache - In the implementation block
+(id)sharedInstance;
-(void)setLocations:(NSSet *)arg1 ;
-(id)locationForHandle:(id)arg1 ;
-(void)abPreferencesDidChange;
-(void)setLocationsCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)locationsCache;
-(NSSet *)followers;
-(void)setFollowers:(NSSet *)arg1 ;
-(id)followerForHandle:(id)arg1 ;
-(id)followingForHandle:(id)arg1 ;
-(id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2 ;
-(void)abDidChange;
-(id)favoritesOrdered;
-(void)setFollowing:(NSSet *)arg1 ;
-(NSSet *)following;
-(NSSet *)locations;
@end

