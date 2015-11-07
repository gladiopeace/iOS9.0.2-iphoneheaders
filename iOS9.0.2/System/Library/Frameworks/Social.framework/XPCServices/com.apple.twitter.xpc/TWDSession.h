/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.twitter.xpc/com.apple.twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.twitter/com.apple.twitter-Structs.h>
#import <Social/SLRemoteSession.h>
#import <libobjc.A.dylib/SLTwitterRemoteSessionProtocol.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <com.apple.twitter/SLTimestampSkewStorageDelegate.h>

@protocol OS_dispatch_source;
@class ACAccount, ACAccountStore, NSLock, NSObject, CLLocationManager, SLSafeLocationManagerDelegate, SLPlace, TWDUserRecordStore, NSDictionary, NSMutableArray, CLLocation, NSString;

@interface TWDSession : SLRemoteSession <SLTwitterRemoteSessionProtocol, CLLocationManagerDelegate, SLTimestampSkewStorageDelegate> {

	ACAccount* _activeAccount;
	ACAccountStore* _accountStore;
	NSLock* _locationStatusLock;
	NSObject*<OS_dispatch_source> _locationTimer;
	int _geotagStatus;
	CLLocationManager* _locationManager;
	SCD_Struct_TW0 _currentLocation;
	SLSafeLocationManagerDelegate* _safeLocationManagerDelegate;
	SLPlace* _currentPlace;
	TWDUserRecordStore* _userRecordStore;
	NSDictionary* _clientInfo;
	NSLock* _sendCompletionsLock;
	NSMutableArray* _sendCompletions;
	unsigned _warningAboutLocationAuth : 1;
	CLLocation* _location;
	NSString* _permaLinkOfLastSuccessfulStatusUpdate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestampSkew; 
-(void)_sendStatus:(id)arg1 location:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountStoreChanged:(id)arg1 ;
-(void)setGeotagStatus:(int)arg1 notifyClient:(char)arg2 ;
-(void)nts_stopUpdatingLocation:(char)arg1 guaranteedToBeOnMainThread:(char)arg2 ;
-(void)buildUserStore;
-(void)showGeotagDisabledForAccountAlert:(/*^block*/id)arg1 ;
-(void)fetchGeotagAccountSetting:(/*^block*/id)arg1 ;
-(id)lastFetchedImageLimits:(char*)arg1 ;
-(id)twitterIconURL;
-(void)warnAboutNetworksIfNeeded;
-(int)lastFetchedTCoLength:(char*)arg1 ;
-(void)recordFetchedTCoLength:(int)arg1 ;
-(id)defaultImageLimits;
-(void)recordFetchedImageLimits:(id)arg1 ;
-(char)tweetWasADuplicate:(id)arg1 errorCode:(id)arg2 ;
-(char)tweetAuthenticationFailure:(id)arg1 errorCode:(id)arg2 ;
-(void)completeSendBlock:(/*^block*/id)arg1 ;
-(void)playTweetSound;
-(void)handleRetryTweet:(id)arg1 location:(id)arg2 response:(id)arg3 responseObject:(id)arg4 copiedCompletion:(/*^block*/id)arg5 error:(id)arg6 ;
-(char)statusRequiresMultiPart:(id)arg1 ;
-(void)sendMultiPartStatus:(id)arg1 location:(id)arg2 copiedCompletion:(/*^block*/id)arg3 ;
-(void)sendSimpleStatus:(id)arg1 location:(id)arg2 copiedCompletion:(/*^block*/id)arg3 ;
-(char)nts_geotagFetchingDeniedByUser;
-(void)notifyUserAboutDisallowedLocation;
-(void)_fetchUserInfoForScreenName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchProfileImageDataFromTwitterForScreenName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendMultiPartStatus:(id)arg1 assetDataArray:(id)arg2 location:(id)arg3 copiedCompletion:(/*^block*/id)arg4 ;
-(id)_effectiveBundleForCoreLocation;
-(void)nts_startUpdatingLocation;
-(void)notifyClientOfLocationInfoChange;
-(id)nts_locationManager;
-(void)stopUpdatingLocation:(char)arg1 ;
-(SCD_Struct_TW0)_locationCoordinateCenterInTwitterPolygon:(id)arg1 ;
-(void)_updateLocationStateWithPlaceName:(id)arg1 placeID:(id)arg2 locationCoordinate:(SCD_Struct_TW0)arg3 ;
-(void)updateLocationStateWithCLPlacemarks:(id)arg1 ;
-(void)fetchNearbyPlacesWithCoreLocation:(id)arg1 ;
-(void)updateLocationStateWithTwitterPlace:(id)arg1 ;
-(void)fetchNearbyPlace:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_clearLocationTimer;
-(void)_fetchPlaceInfoForLocation:(id)arg1 ;
-(id)currentLocationInfo;
-(void)enableGeotagAccountSetting:(/*^block*/id)arg1 ;
-(float)nts_clientScale;
-(CGSize)nts_clientLocationViewSize;
-(id)accountStore;
-(id)sessionInfo;
-(void)startUpdatingLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(int)callingPID;
-(void)checkIn:(id)arg1 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)fetchSessionInfo:(/*^block*/id)arg1 ;
-(void)ensureUserRecordStore;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1 ;
-(void)setGeotagStatus:(id)arg1 ;
-(void)fetchGeotagStatus:(/*^block*/id)arg1 ;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/id)arg1 ;
-(void)fetchRecordForScreenName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)timestampSkew;
-(void)setTimestampSkew:(double)arg1 ;
-(void)fetchCurrentTCoLength:(/*^block*/id)arg1 ;
-(void)retweetTweetWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendDirectMessage:(id)arg1 toUser:(id)arg2 withScreenName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)showTwitterSettingsIfNeeded:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(void)dealloc;
-(id)currentLocation;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

