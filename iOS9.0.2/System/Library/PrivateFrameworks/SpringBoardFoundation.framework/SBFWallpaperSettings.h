/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFWallpaperSettings : _UISettings {

	char _replaceBlurs;
	unsigned _colorBoxSize;
	int _blurReplacementMode;

}

@property (assign,nonatomic) unsigned colorBoxSize;                //@synthesize colorBoxSize=_colorBoxSize - In the implementation block
@property (assign,nonatomic) char replaceBlurs;                    //@synthesize replaceBlurs=_replaceBlurs - In the implementation block
@property (assign,nonatomic) int blurReplacementMode;              //@synthesize blurReplacementMode=_blurReplacementMode - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setColorBoxSize:(unsigned)arg1 ;
-(unsigned)colorBoxSize;
-(char)replaceBlurs;
-(void)setReplaceBlurs:(char)arg1 ;
-(int)blurReplacementMode;
-(void)setBlurReplacementMode:(int)arg1 ;
@end

