/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, TPSURLSession, TPSTip, UIImageView, UILabel;

@interface TPSTableOfContentCell : UITableViewCell {

	NSLayoutConstraint* _nameLabelMinHeightConstraint;
	TPSURLSession* _relatedAppURLSession;
	TPSTip* _tip;
	UIImageView* _relatedAppImageView;
	UILabel* _nameLabel;
	float _maxNameLabelWidth;
	float _minNameLabelHeight;

}

@property (nonatomic,retain) TPSTip * tip;                                   //@synthesize tip=_tip - In the implementation block
@property (nonatomic,retain) UIImageView * relatedAppImageView;              //@synthesize relatedAppImageView=_relatedAppImageView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) float maxNameLabelWidth;                        //@synthesize maxNameLabelWidth=_maxNameLabelWidth - In the implementation block
@property (assign,nonatomic) float minNameLabelHeight;                       //@synthesize minNameLabelHeight=_minNameLabelHeight - In the implementation block
-(void)setTip:(TPSTip *)arg1 ;
-(void)setMaxNameLabelWidth:(float)arg1 ;
-(UIImageView *)relatedAppImageView;
-(void)setRelatedAppImageView:(UIImageView *)arg1 ;
-(float)maxNameLabelWidth;
-(TPSTip *)tip;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)setMinNameLabelHeight:(float)arg1 ;
-(float)minNameLabelHeight;
-(void)updateFonts;
@end

