/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconZoomSettings.h>

@class SBAnimationSettings;

@interface SBScaleZoomSettings : SBIconZoomSettings {

	char _crossfadeWithZoom;
	SBAnimationSettings* _outerFolderFadeSettings;
	SBAnimationSettings* _crossfadeSettings;

}

@property (retain) SBAnimationSettings * outerFolderFadeSettings;              //@synthesize outerFolderFadeSettings=_outerFolderFadeSettings - In the implementation block
@property (assign) char crossfadeWithZoom;                                     //@synthesize crossfadeWithZoom=_crossfadeWithZoom - In the implementation block
@property (retain) SBAnimationSettings * crossfadeSettings;                    //@synthesize crossfadeSettings=_crossfadeSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setCrossfadeWithZoom:(char)arg1 ;
-(char)crossfadeWithZoom;
-(SBAnimationSettings *)crossfadeSettings;
-(id)effectiveCrossfadeAnimationSettings;
-(SBAnimationSettings *)outerFolderFadeSettings;
-(void)setOuterFolderFadeSettings:(SBAnimationSettings *)arg1 ;
-(void)setCrossfadeSettings:(SBAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

