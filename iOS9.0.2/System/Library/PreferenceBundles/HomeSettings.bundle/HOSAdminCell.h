/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSettings/HOSUserCell.h>

@class UILabel;

@interface HOSAdminCell : HOSUserCell {

	UILabel* _emailLabel;

}

@property (nonatomic,copy,readonly) UILabel * userLabel; 
@property (nonatomic,copy,readonly) UILabel * homeLabel; 
@property (retain) UILabel * emailLabel;                              //@synthesize emailLabel=_emailLabel - In the implementation block
-(void)setEmailLabel:(UILabel *)arg1 ;
-(UILabel *)userLabel;
-(UILabel *)emailLabel;
-(UILabel *)homeLabel;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

