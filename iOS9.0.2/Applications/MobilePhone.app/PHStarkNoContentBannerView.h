/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface PHStarkNoContentBannerView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) NSString * titleString; 
@property (nonatomic,retain) NSString * subtitleString; 
@property (retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(NSString *)subtitleString;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleString:(NSString *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
@end

