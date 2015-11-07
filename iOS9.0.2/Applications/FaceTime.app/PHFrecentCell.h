/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <FaceTime/PHFrecentCellProtocol.h>

@protocol PHFrecentCellDelegate;
@class UILabel, UIDateLabel, CNAvatarView, NSLayoutConstraint, CHRecentCall, NSString;

@interface PHFrecentCell : UITableViewCell <CNAvatarViewDelegate, PHFrecentCellProtocol> {

	UILabel* _nameLabel;
	UILabel* _labelLabel;
	UILabel* _ndashLabel;
	UIDateLabel* _dateLabel;
	CNAvatarView* _contactPhoto;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _labelConstraint;
	CHRecentCall* _recentCall;
	long _constraintsToken;
	id<PHFrecentCellDelegate> _delegate;

}

@property (nonatomic,retain) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * labelLabel;                               //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,retain) UILabel * ndashLabel;                               //@synthesize ndashLabel=_ndashLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;                            //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) CNAvatarView * contactPhoto;                        //@synthesize contactPhoto=_contactPhoto - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                 //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;              //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelConstraint;               //@synthesize labelConstraint=_labelConstraint - In the implementation block
@property (nonatomic,retain) CHRecentCall * recentCall;                          //@synthesize recentCall=_recentCall - In the implementation block
@property (assign,nonatomic) long constraintsToken;                              //@synthesize constraintsToken=_constraintsToken - In the implementation block
@property (assign,nonatomic) id<PHFrecentCellDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecentCall:(CHRecentCall *)arg1 ;
-(CHRecentCall *)recentCall;
-(id)_contactForCall:(id)arg1 ;
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(void)prepareSubviewsForFilter:(id)arg1 ;
-(CNAvatarView *)contactPhoto;
-(UILabel *)ndashLabel;
-(void)setLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(NSLayoutConstraint *)labelConstraint;
-(id)_imageForCallType:(unsigned)arg1 ;
-(id)_attributedStringForCallType:(unsigned)arg1 ;
-(void)setNdashLabel:(UILabel *)arg1 ;
-(void)setContactPhoto:(CNAvatarView *)arg1 ;
-(long)constraintsToken;
-(void)setConstraintsToken:(long)arg1 ;
-(void)setContact:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
-(void)_updateFonts;
-(void)setDelegate:(id<PHFrecentCellDelegate>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<PHFrecentCellDelegate>)delegate;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)_buildConstraints;
-(UIDateLabel *)dateLabel;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(void)_updateConstraints;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)setLabelLabel:(UILabel *)arg1 ;
-(UILabel *)labelLabel;
@end

