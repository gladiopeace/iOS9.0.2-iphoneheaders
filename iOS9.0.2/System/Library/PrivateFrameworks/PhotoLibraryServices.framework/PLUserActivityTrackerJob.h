/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSString;

@interface PLUserActivityTrackerJob : PLDaemonJob {

	NSArray* _uuids;
	NSString* _clientID;
	long long _activity;

}

@property (assign,nonatomic) long long activity;               //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSArray * uuids;                  //@synthesize uuids=_uuids - In the implementation block
@property (nonatomic,retain) NSString * clientID;              //@synthesize clientID=_clientID - In the implementation block
+(void)trackAssetsWereSharedViaFacebook:(id)arg1 ;
+(void)trackAssetsWereSharedViaTwitter:(id)arg1 ;
+(void)trackAssetsWereSharedViaWeibo:(id)arg1 ;
+(void)trackAssetsWereSharedViaMessage:(id)arg1 ;
+(void)trackAssetsWereSharedViaMail:(id)arg1 ;
+(void)trackAssetsWereSharedViaPrint:(id)arg1 ;
+(void)trackAssetsWereSharedViaCopyToPasteboard:(id)arg1 ;
+(void)trackAssetsWereSharedViaAssignToContact:(id)arg1 ;
+(void)trackAssetsWereSharedViaYouTube:(id)arg1 ;
+(void)trackAssetsWereSharedViaTudou:(id)arg1 ;
+(void)trackAssetsWereSharedViaYouku:(id)arg1 ;
+(void)trackAssetsWereSharedViaSharedPhotoStream:(id)arg1 ;
+(void)trackPhotoSetAsWallpaper:(id)arg1 ;
+(id)_queue;
+(id)managedObjectModel;
+(id)managedObjectContext;
+(id)persistentStoreCoordinator;
+(void)trackAlbumUUIDWasDeleted:(id)arg1 ;
+(void)trackAssetUUIDsWereDeleted:(id)arg1 ;
+(void)_noteActivity:(long long)arg1 uuid:(id)arg2 ;
+(id)_uuidsForAssets:(id)arg1 ;
+(void)_noteActivity:(long long)arg1 uuids:(id)arg2 ;
+(id)_uuidsFilteringNulls:(id)arg1 ;
+(void)trackAssetContainerStartedSlideShow:(id)arg1 ;
+(void)trackAlbumChosenForPictureFrame:(NSObject*)arg1 ;
+(void)trackPhotoWasViewed:(id)arg1 ;
+(void)trackVideoWasPlayed:(id)arg1 ;
+(void)trackPhotoWasZoomed:(id)arg1 ;
+(void)trackVideoWasTrimmed:(id)arg1 ;
+(void)trackAssetWasPickedViaAPI:(id)arg1 ;
+(void)trackAssetWasLoadedViaAPI:(id)arg1 ;
+(void)trackSlalomWasEdited:(id)arg1 ;
+(void)trackPhotoWasEditedWithRotation:(id)arg1 ;
+(void)trackPhotoWasEditedWithAutoEnhance:(id)arg1 ;
+(void)trackPhotoWasEditedWithRedEye:(id)arg1 ;
+(void)trackPhotoWasEditedWithCrop:(id)arg1 ;
+(void)trackPhotoWasEditedWithStraighten:(id)arg1 ;
+(void)trackPhotoWasEditedWithFilters:(id)arg1 ;
-(NSArray *)uuids;
-(void)setUuids:(NSArray *)arg1 ;
-(void)dealloc;
-(void)run;
-(long long)activity;
-(void)setActivity:(long long)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
@end

