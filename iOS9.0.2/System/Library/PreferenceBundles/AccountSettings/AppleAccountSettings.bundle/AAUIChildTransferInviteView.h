/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <AppleAccountSettings/AAUIInviteViewProtocol.h>

@class UILabel, NSString;

@interface AAUIChildTransferInviteView : UIView <AAUIInviteViewProtocol> {

	UILabel* _titleLabel;
	UILabel* _primaryLabel;
	UILabel* _detailsLabel;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_labelWithCenteredText:(id)arg1 ;
-(float)_heightForTitle:(id)arg1 width:(float)arg2 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)layoutSubviews;
-(float)_heightForText:(id)arg1 width:(float)arg2 ;
-(id)initWithInvite:(id)arg1 ;
@end

