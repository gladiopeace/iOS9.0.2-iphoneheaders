/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SettingsTableViewControllerDelegate <NSObject>
@required
-(id)disallowedViewModes;
-(char)canDisplayTraffic;
-(void)dropPin;
-(void)proceedToReportAProblem;
-(void)setShouldChangeViewModeForTraffic:(char)arg1;
-(void)proceedToEnvironmentsSelector;
-(void)presentAttributions;
-(char)showsDropPin;
-(char)isTrafficDisplayed;
-(char)showsRadarComposer;
-(void)toggle3D;
-(char)canShowLabels;
-(char)viewModeSwitchingAvailable;
-(char)canShow3DMode;
-(char)is3DModeEnabled;
-(char)showsEnvironments;
-(void)setTrafficDisplayed:(char)arg1;
-(int)viewMode;
-(id)mapAttribution;
-(void)setViewMode:(int)arg1;

@end

