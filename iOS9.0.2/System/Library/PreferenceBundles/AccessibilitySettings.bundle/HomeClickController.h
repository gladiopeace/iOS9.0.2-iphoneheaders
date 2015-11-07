/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSTimer, NSIndexPath;

@interface HomeClickController : PSListController {

	int _flashCount;
	NSTimer* _flashTimer;
	NSTimer* _vibrationTimer;
	NSIndexPath* _selectedIndexPath;

}

@property (assign,nonatomic) int flashCount;                               //@synthesize flashCount=_flashCount - In the implementation block
@property (nonatomic,retain) NSTimer * flashTimer;                         //@synthesize flashTimer=_flashTimer - In the implementation block
@property (nonatomic,retain) NSTimer * vibrationTimer;                     //@synthesize vibrationTimer=_vibrationTimer - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
-(void)setFlashCount:(int)arg1 ;
-(void)setVibrationTimer:(NSTimer *)arg1 ;
-(float)_homeClickSpeedFromSpecifierKey:(id)arg1 ;
-(void)_vibrateSelectedRow;
-(void)_flashSelectedRow;
-(CFDictionaryRef)_vibrationPattern;
-(NSTimer *)vibrationTimer;
-(int)flashCount;
-(NSTimer *)flashTimer;
-(void)setFlashTimer:(NSTimer *)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(id)specifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

