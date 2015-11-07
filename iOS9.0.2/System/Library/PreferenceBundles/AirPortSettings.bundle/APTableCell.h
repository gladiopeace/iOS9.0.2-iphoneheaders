/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView, UIImageView, UILabel, WiFiNetwork;

@interface APTableCell : PSTableCell {

	UIActivityIndicatorView* _spinnerView;
	UIImageView* _lockView;
	UIImageView* _barsView;
	UIImageView* _hotspotIndicatorView;
	UIImageView* _hotspotSignal1View;
	UIImageView* _hotspotSignal2View;
	UIImageView* _hotspotSignal3View;
	UIImageView* _hotspotSignal4View;
	UIImageView* _hotspotSignal5View;
	UIImageView* _hotspotBatteryLifeView;
	UILabel* _hotspotNetworkTypeLabel;
	char _showSpinner;
	char _labelOnly;
	char _hidesInfoButton;
	char _noAccessory;
	WiFiNetwork* _network;

}

@property (nonatomic,retain) WiFiNetwork * network;              //@synthesize network=_network - In the implementation block
+(id)__batteryImageForTetherDevice:(id)arg1 ;
+(id)__cellularProtocolStringForTetherDevice:(id)arg1 ;
-(void)setDetailText:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSpinner:(char)arg1 ;
-(void)updateImages;
-(void)setNoAccessory:(char)arg1 ;
-(void)setLabelOnly;
-(void)setHidesInfoButton:(char)arg1 ;
-(char)_displayCheckmark;
-(float)_rightBarsPadding;
-(char)_displaySpinner;
-(void)__layoutRemoteHotspotDevice;
-(void)__layoutNetwork;
-(void)_dumpCellLayout;
-(WiFiNetwork *)network;
-(void)setNetwork:(WiFiNetwork *)arg1 ;
@end

