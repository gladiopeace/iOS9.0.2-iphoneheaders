/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PGPictureInPictureRemoteObjectInterface <NSObject>
@required
-(oneway void)initializePictureInPictureWithControlsStyle:(int)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setupAnimated:(char)arg1 withHostedWindowHostingHandle:(id)arg2 preferredContentSize:(CGSize)arg3 initialLayerFrame:(CGRect)arg4 completionHandler:(/*^block*/id)arg5;
-(oneway void)startPictureInPictureAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)updatePreferredContentSize:(CGSize)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)rotateContentContainer:(int)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)activateApplicationIfNeededWithCompletionHandler:(/*^block*/id)arg1;
-(oneway void)stopPictureInPictureAnimated:(char)arg1 withFinalLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3;
-(oneway void)cleanupWithCompletionHandler:(/*^block*/id)arg1;
-(oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(char)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setShouldShowAlternateActionButtonImage:(char)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setShouldShowLoadingIndicator:(char)arg1 completionHandler:(/*^block*/id)arg2;

@end

