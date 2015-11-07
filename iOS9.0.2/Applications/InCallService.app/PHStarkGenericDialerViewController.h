/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/PHStarkGenericViewController.h>

@class DialerController, PHStarkNoContentBannerView, AVExternalDevice;

@interface PHStarkGenericDialerViewController : PHStarkGenericViewController {

	char _limitedSoftPhoneKeypad;
	char _handlingKeypadPress;
	DialerController* _dialerController;
	int _currentHighlightedControlIndex;
	PHStarkNoContentBannerView* _noContentBannerView;
	AVExternalDevice* _carPlayExternalDevice;

}

@property (retain) DialerController * dialerController;                           //@synthesize dialerController=_dialerController - In the implementation block
@property (assign) int currentHighlightedControlIndex;                            //@synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex - In the implementation block
@property (retain) PHStarkNoContentBannerView * noContentBannerView;              //@synthesize noContentBannerView=_noContentBannerView - In the implementation block
@property (retain) AVExternalDevice * carPlayExternalDevice;                      //@synthesize carPlayExternalDevice=_carPlayExternalDevice - In the implementation block
@property (assign,nonatomic) char limitedSoftPhoneKeypad;                         //@synthesize limitedSoftPhoneKeypad=_limitedSoftPhoneKeypad - In the implementation block
@property (assign,nonatomic) char handlingKeypadPress;                            //@synthesize handlingKeypadPress=_handlingKeypadPress - In the implementation block
-(DialerController *)dialerController;
-(void)setDialerController:(DialerController *)arg1 ;
-(int)currentHighlightedControlIndex;
-(void)setCurrentHighlightedControlIndex:(int)arg1 ;
-(PHStarkNoContentBannerView *)noContentBannerView;
-(void)setNoContentBannerView:(PHStarkNoContentBannerView *)arg1 ;
-(AVExternalDevice *)carPlayExternalDevice;
-(void)setCarPlayExternalDevice:(AVExternalDevice *)arg1 ;
-(char)limitedSoftPhoneKeypad;
-(void)setLimitedSoftPhoneKeypad:(char)arg1 ;
-(char)handlingKeypadPress;
-(void)setHandlingKeypadPress:(char)arg1 ;
@end

