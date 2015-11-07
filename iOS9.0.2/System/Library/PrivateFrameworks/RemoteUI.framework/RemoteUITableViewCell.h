/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIView, UIButton, UIColor;

@interface RemoteUITableViewCell : UITableViewCell {

	UIImageView* _invalidRowView;
	char _leftAlignDetailLabel;
	int _remoteUIAccessoryType;
	UIView* _remoteUIAccessoryView;
	UIButton* _detailLinkButton;
	/*^block*/id _detailLinkHandler;
	UIColor* _accessoryColor;
	char _forceFullSizeDetailLabel;

}

@property (assign,nonatomic) char forceFullSizeDetailLabel;               //@synthesize forceFullSizeDetailLabel=_forceFullSizeDetailLabel - In the implementation block
@property (assign,nonatomic) char leftAlignDetailLabel;                   //@synthesize leftAlignDetailLabel=_leftAlignDetailLabel - In the implementation block
@property (assign,nonatomic) int remoteUIAccessoryType;                   //@synthesize remoteUIAccessoryType=_remoteUIAccessoryType - In the implementation block
@property (nonatomic,retain) UIView * remoteUIAccessoryView;              //@synthesize remoteUIAccessoryView=_remoteUIAccessoryView - In the implementation block
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)_disclosureChevronImage:(char)arg1 ;
-(id)_checkmarkImage:(char)arg1 ;
-(void)setDetailLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setRemoteUIAccessoryView:(UIView *)arg1 ;
-(void)_setRemoteUIAccessoryType:(int)arg1 withColor:(id)arg2 ;
-(void)_accessoriesChanged;
-(void)_detailLinkPressed;
-(void)setRemoteUIAccessoryType:(int)arg1 ;
-(void)setRowInvalid:(char)arg1 ;
-(char)forceFullSizeDetailLabel;
-(void)setForceFullSizeDetailLabel:(char)arg1 ;
-(char)leftAlignDetailLabel;
-(void)setLeftAlignDetailLabel:(char)arg1 ;
-(int)remoteUIAccessoryType;
-(UIView *)remoteUIAccessoryView;
@end

