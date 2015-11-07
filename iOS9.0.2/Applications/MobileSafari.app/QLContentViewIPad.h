/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIImageView.h>
#import <MobileSafari/QLContentView.h>

@class QLDocumentInfoView, UIToolbar, OpenInApplicationBarButtonItem, UIBarButtonItem, NSString;

@interface QLContentViewIPad : UIImageView <QLContentView> {

	QLDocumentInfoView* _documentInfoView;
	UIToolbar* _buttonBar;
	OpenInApplicationBarButtonItem* _defaultApplicationButtonItem;
	UIBarButtonItem* _otherApplicationsButtonItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 quickLookBannerViewDelegate:(id)arg2 ;
-(void)_updateDefaultApplicationButtonItem:(id)arg1 multipleApplications:(char)arg2 ;
-(void)_updateOtherApplicationsButtonItem;
-(void)layoutSubviews;
-(void)showBanner;
-(void)hideBanner;
@end

