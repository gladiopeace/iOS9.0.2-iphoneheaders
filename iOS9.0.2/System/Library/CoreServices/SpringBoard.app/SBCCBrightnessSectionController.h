/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionViewController.h>

@class SBUIControlCenterSlider, UIVisualEffectView, UIView;

@interface SBCCBrightnessSectionController : SBControlCenterSectionViewController {

	SBUIControlCenterSlider* _slider;
	UIVisualEffectView* _vibrantDarkenLayer;
	UIView* _tintingDarkenLayer;
	BKSDisplayBrightnessTransactionRef _brightnessTransaction;

}
-(CGSize)contentSizeForOrientation:(int)arg1 ;
-(void)noteSettingsDidUpdate:(id)arg1 ;
-(char)_shouldDarkenBackground;
-(void)_sliderDidBeginTracking:(id)arg1 ;
-(void)_sliderDidEndTracking:(id)arg1 ;
-(void)_noteScreenBrightnessDidChange:(id)arg1 ;
-(float)_yOffsetFromCenterForSlider;
-(void)_updateEffects;
-(void)dealloc;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_backlightLevel;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(id)sectionIdentifier;
@end

