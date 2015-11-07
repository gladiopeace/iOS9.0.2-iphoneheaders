/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCInstallationWarningCell : UITableViewCell {

	UILabel* _warningLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * warningLabel;              //@synthesize warningLabel=_warningLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
+(id)reuseIdentifier;
-(void)_setupConstraints;
-(void)_setup;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)awakeFromNib;
-(NSArray *)constraints;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
@end

