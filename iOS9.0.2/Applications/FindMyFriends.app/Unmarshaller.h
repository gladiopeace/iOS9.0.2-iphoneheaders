/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/RelationMergeDelegate.h>

@interface Unmarshaller : NSObject <RelationMergeDelegate>
+(id)sharedInstance;
-(void)updateModelforAccount:(id)arg1 withData:(id)arg2 ;
-(void)updateObject:(id)arg1 withData:(id)arg2 usingInfo:(id)arg3 ;
-(void)deleteObject:(id)arg1 usingInfo:(id)arg2 ;
-(id)createObjectWithData:(id)arg1 usingInfo:(id)arg2 ;
-(void)updateFriend:(id)arg1 withData:(id)arg2 ;
-(void)updateFutureFriend:(id)arg1 withData:(id)arg2 ;
-(void)updateFollower:(id)arg1 withData:(id)arg2 ;
-(void)updatePendingOffer:(id)arg1 withData:(id)arg2 ;
-(void)updateFriendRequest:(id)arg1 withData:(id)arg2 ;
-(void)updateDevice:(id)arg1 withData:(id)arg2 ;
-(void)updateLocation:(id)arg1 withData:(id)arg2 ;
-(void)updateLocationLabel:(id)arg1 withData:(id)arg2 ;
-(void)updateAccountPreferences:(id)arg1 withData:(id)arg2 ;
-(void)updateConfig:(id)arg1 withData:(id)arg2 ;
-(void)updateFeatures:(id)arg1 withData:(id)arg2 ;
-(void)updateEvents:(id)arg1 withData:(id)arg2 ;
-(void)updateEventFriend:(id)arg1 withData:(id)arg2 ;
-(void)updateGeoFence:(id)arg1 withData:(id)arg2 ;
-(void)updateDiscovery:(id)arg1 withData:(id)arg2 ;
-(void)updateDiscoveredContact:(id)arg1 withData:(id)arg2 ;
-(void)updateLabelledLocation:(id)arg1 withData:(id)arg2 ;
-(void)updateLocationShare:(id)arg1 withData:(id)arg2 ;
-(void)updateAddressInLocation:(id)arg1 withData:(id)arg2 ;
-(void)updateLabelInLocation:(id)arg1 withData:(id)arg2 ;
-(void)updateSessionInfo:(id)arg1 withData:(id)arg2 ;
-(void)sendNotificationNow:(id)arg1 ;
-(void)mergeLocations:(id)arg1 intoFriendList:(id)arg2 ;
-(void)mergeLocatesInProgress:(id)arg1 intoFriendList:(id)arg2 ;
-(void)updateGeoFence:(id)arg1 withData:(id)arg2 copyFriend:(char)arg3 ;
-(void)updateMyLocationMetaInfo:(id)arg1 withData:(id)arg2 ;
-(void)updateEventFutureFriend:(id)arg1 withData:(id)arg2 ;
-(id)init;
@end

