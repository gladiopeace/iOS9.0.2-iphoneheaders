/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor;

@interface RCAudioRouteBarButton : UIButton {

	char _needsUpdateDisplay;
	UIColor* _routeToSpeakerOrWirelessColor;
	UIColor* _routeToHandsetOrHeadphoneColor;

}

@property (nonatomic,retain) UIColor * routeToSpeakerOrWirelessColor;               //@synthesize routeToSpeakerOrWirelessColor=_routeToSpeakerOrWirelessColor - In the implementation block
@property (nonatomic,retain) UIColor * routeToHandsetOrHeadphoneColor;              //@synthesize routeToHandsetOrHeadphoneColor=_routeToHandsetOrHeadphoneColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateDisplay;
-(void)setNeedsUpdateDisplay;
-(void)setRouteToHandsetOrHeadphoneColor:(UIColor *)arg1 ;
-(void)setRouteToSpeakerOrWirelessColor:(UIColor *)arg1 ;
-(UIColor *)routeToSpeakerOrWirelessColor;
-(UIColor *)routeToHandsetOrHeadphoneColor;
@end

