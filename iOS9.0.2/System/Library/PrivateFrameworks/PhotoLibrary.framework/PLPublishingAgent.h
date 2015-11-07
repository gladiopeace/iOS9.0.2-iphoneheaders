/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLDataArrayInputStreamProgressDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString, NSData, NSMutableArray, PLVideoRemaker;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate, UIAlertViewDelegate> {

	id _userInfo;
	id _delegate;
	NSString* _mediaPath;
	NSData* _mediaData;
	NSString* _mimeType;
	char _deleteAfterPublishing;
	double _changeRate;
	long long _currentValue;
	double _estimatedTimeRemaining;
	long long _maxValue;
	long long _normalizedCurrentValue;
	long long _normalizedMaxValue;
	float _percentComplete;
	float _remakingPercentComplete;
	float _progressMultiplier;
	NSMutableArray* _snapshotTimes;
	NSMutableArray* _snapshotValues;
	char _ownerIsCamera;
	char _needsRemaking;
	double _startTime;
	double _endTime;
	long long _approximateHDUploadSize;
	long long _approximateSDUploadSize;
	char _mediaIsHDVideo;
	char _enableHDUpload;
	char _needsTrimming;
	char _allowsHDOver3GUpload;
	int _selectedOption;
	PLVideoRemaker* _remaker;
	int _remakerMode;
	SEL _completionSelector;
	unsigned _remakingWasCancelled : 1;
	unsigned _remaking : 1;
	unsigned _publishing : 1;
	char _shouldCancelPublish;

}

@property (assign,nonatomic) id<PLPublishingAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char ownerIsCamera;                                  //@synthesize ownerIsCamera=_ownerIsCamera - In the implementation block
@property (assign,nonatomic) long long approximateHDUploadSize;                   //@synthesize approximateHDUploadSize=_approximateHDUploadSize - In the implementation block
@property (assign,nonatomic) long long approximateSDUploadSize;                   //@synthesize approximateSDUploadSize=_approximateSDUploadSize - In the implementation block
@property (assign,nonatomic) char mediaIsHDVideo;                                 //@synthesize mediaIsHDVideo=_mediaIsHDVideo - In the implementation block
@property (assign,nonatomic) char enableHDUpload;                                 //@synthesize enableHDUpload=_enableHDUpload - In the implementation block
@property (assign,nonatomic) char needsTrimming;                                  //@synthesize needsTrimming=_needsTrimming - In the implementation block
@property (assign,nonatomic) int remakerMode;                                     //@synthesize remakerMode=_remakerMode - In the implementation block
@property (assign,nonatomic) int selectedOption;                                  //@synthesize selectedOption=_selectedOption - In the implementation block
@property (assign,nonatomic) float progressMultiplier;                            //@synthesize progressMultiplier=_progressMultiplier - In the implementation block
@property (assign,nonatomic) char allowsHDOver3GUpload;                           //@synthesize allowsHDOver3GUpload=_allowsHDOver3GUpload - In the implementation block
@property (assign,nonatomic) char shouldCancelPublish;                            //@synthesize shouldCancelPublish=_shouldCancelPublish - In the implementation block
@property (nonatomic,readonly) char allowsCellularAccessForRequests; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2 ;
-(id)serviceName;
-(void)publish;
-(void)cancelRemaking;
-(id)mediaURL;
-(void)setNeedsTrimming:(char)arg1 ;
-(void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(void)setRemakerMode:(int)arg1 ;
-(void)presentModalSheetInViewController:(id)arg1 ;
-(void)willDismiss;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)setShouldCancelPublish:(char)arg1 ;
-(char)isRemaking;
-(char)isPublishing;
-(char)deleteMediaFileAfterPublishing;
-(id)mediaPath;
-(char)isVideoMedia;
-(void)showAlertWithError:(id)arg1 ;
-(void)setDelegate:(id<PLPublishingAgentDelegate>)arg1 ;
-(void)dealloc;
-(id<PLPublishingAgentDelegate>)delegate;
-(float)percentComplete;
-(void)setUserInfo:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)userInfo;
-(void)snapshot;
-(id)navigationController;
-(void)dismiss;
-(id)mediaData;
-(void)setMediaData:(id)arg1 ;
-(void)videoRemaker:(id)arg1 progressDidChange:(float)arg2 ;
-(void)_cancelRemaking:(id)arg1 ;
-(int)selectedOption;
-(char)allowsHDOver3GUpload;
-(void)setEnableHDUpload:(char)arg1 ;
-(void)_startNetworkObservation;
-(void)_setUpPublishingParams;
-(id)initWithMedia:(id)arg1 ;
-(void)setMediaPath:(id)arg1 ;
-(void)setDeleteMediaFileAfterPublishing:(char)arg1 ;
-(void)setMediaIsHDVideo:(char)arg1 ;
-(void)setAllowsHDOver3GUpload:(char)arg1 ;
-(void)_setApproximateVideoUploadSizes;
-(void)setApproximateSDUploadSize:(long long)arg1 ;
-(void)setApproximateHDUploadSize:(long long)arg1 ;
-(int)_remakerModeForSelectedOption;
-(void)_agentIsReadyToPublish:(id)arg1 ;
-(void)_transcodeVideo:(id)arg1 ;
-(void)_stopNetworkObservation;
-(id)mediaTitle;
-(void)_updateStatisticsFromSnapshots;
-(void)_remakerDidFinish:(id)arg1 ;
-(char)allowsViewingOnHost;
-(char)allowsTellingFriend;
-(id)tellAFriendURL;
-(void)dataArrayInputStreamBytesWereRead:(id)arg1 ;
-(char)allowsCellularAccessForRequests;
-(void)setPublishing:(char)arg1 ;
-(void)resignPublishingSheetResponders;
-(void)cancelButtonClicked;
-(void)doneButtonClicked;
-(double)maximumVideoDuration;
-(void)setTotalBytesWritten:(int)arg1 totalBytes:(int)arg2 ;
-(double)estimatedTimeRemaining;
-(float)remakingPercentComplete;
-(id)progressViewMessageDuringRemake;
-(char)ownerIsCamera;
-(void)setOwnerIsCamera:(char)arg1 ;
-(long long)approximateHDUploadSize;
-(long long)approximateSDUploadSize;
-(char)mediaIsHDVideo;
-(char)enableHDUpload;
-(char)needsTrimming;
-(int)remakerMode;
-(void)setSelectedOption:(int)arg1 ;
-(float)progressMultiplier;
-(void)setProgressMultiplier:(float)arg1 ;
-(char)shouldCancelPublish;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(id)tellAFriendBody;
-(id)tellAFriendSubject;
@end

