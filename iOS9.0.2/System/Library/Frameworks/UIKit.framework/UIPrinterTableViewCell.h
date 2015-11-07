/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UIPrinterAccessoryViewDelegate.h>

@class PKPrinter, UIPrinterAccessoryView, UIGestureRecognizer, NSString;

@interface UIPrinterTableViewCell : UITableViewCell <UIPrinterAccessoryViewDelegate> {

	PKPrinter* _printer;
	id _delegate;
	UIPrinterAccessoryView* _printerAccessoryView;
	UIGestureRecognizer* _expandedAccessoryTapRecognizer;

}

@property (assign,nonatomic) int printerState; 
@property (assign,nonatomic,__weak) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char checked; 
@property (nonatomic,retain) UIPrinterAccessoryView * printerAccessoryView;                     //@synthesize printerAccessoryView=_printerAccessoryView - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * expandedAccessoryTapRecognizer;              //@synthesize expandedAccessoryTapRecognizer=_expandedAccessoryTapRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(char)arg1 ;
-(id)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)prepareForReuse;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)printerAccessoryViewInfoButtonPressed:(id)arg1 ;
-(void)setPrinterState:(int)arg1 ;
-(int)printerState;
-(void)expandedAccessoryAreaTapped;
-(void)setExpandedAccessoryTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)expandedAccessoryTapRecognizer;
-(UIPrinterAccessoryView *)printerAccessoryView;
-(char)checked;
-(void)setPrinterAccessoryView:(UIPrinterAccessoryView *)arg1 ;
@end

