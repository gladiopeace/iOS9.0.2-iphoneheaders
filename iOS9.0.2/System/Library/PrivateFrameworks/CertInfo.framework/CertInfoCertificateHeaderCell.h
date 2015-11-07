/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CertInfoGradientLabel* _trustedLabel;

}
-(id)_subtitleLabel;
-(void)layoutSubviews;
-(float)rowHeight;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)_titleLabel;
-(id)_trustedLabel;
-(void)setTrustTitle:(id)arg1 ;
-(void)setTrustSubtitle:(id)arg1 ;
-(id)_certificateImage;
-(id)_notTrustedGradient;
-(void)setExpired:(char)arg1 ;
@end

