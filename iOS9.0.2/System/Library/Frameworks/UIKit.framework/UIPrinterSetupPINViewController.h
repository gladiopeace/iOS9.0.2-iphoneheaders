/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class PKPrinter, UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView;

@interface UIPrinterSetupPINViewController : UIViewController {

	PKPrinter* _printer;
	UIPrinterSetupConnectingView* _connectingView;
	UIPrinterSetupPINView* _PINView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (nonatomic,retain) UIPrinterSetupConnectingView * connectingView;              //@synthesize connectingView=_connectingView - In the implementation block
@property (nonatomic,retain) UIPrinterSetupPINView * PINView;                            //@synthesize PINView=_PINView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)setConnectingView:(UIPrinterSetupConnectingView *)arg1 ;
-(void)setPINView:(UIPrinterSetupPINView *)arg1 ;
-(void)connectToPrinter;
-(void)showSetup;
-(void)showFailure;
-(void)connected:(char)arg1 ;
-(UIPrinterSetupConnectingView *)connectingView;
-(UIPrinterSetupPINView *)PINView;
@end

