/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class GKPlayer, GKPlayerWithSpeechBalloonView, GKLabel, NSLayoutConstraint;

@interface GKPlayerProfileHeaderView : UICollectionReusableView {

	GKPlayer* _player;
	GKPlayerWithSpeechBalloonView* _statusView;
	GKLabel* _nameIsLabel;
	GKLabel* _aliasLabel;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _statusViewWidthConstraint;
	NSLayoutConstraint* _statusViewTopConstraint;
	NSLayoutConstraint* _aliasBaselineConstraint;

}

@property (nonatomic,retain) GKPlayer * player;                                           //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKPlayerWithSpeechBalloonView * statusView;                  //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,retain) GKLabel * nameIsLabel;                                       //@synthesize nameIsLabel=_nameIsLabel - In the implementation block
@property (nonatomic,retain) GKLabel * aliasLabel;                                        //@synthesize aliasLabel=_aliasLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topMarginConstraint;                    //@synthesize topMarginConstraint=_topMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusViewWidthConstraint;              //@synthesize statusViewWidthConstraint=_statusViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusViewTopConstraint;                //@synthesize statusViewTopConstraint=_statusViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * aliasBaselineConstraint;                //@synthesize aliasBaselineConstraint=_aliasBaselineConstraint - In the implementation block
+(Class)statusViewClass;
+(char)requiresConstraintBasedLayout;
-(void)updatePlayerPhoto;
-(void)updatePlayerStatus;
-(GKLabel *)nameIsLabel;
-(GKLabel *)aliasLabel;
-(void)establishViews;
-(id)viewAtBottomEdge;
-(float)_statusBottomToAliasBaseline;
-(void)setStatusViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAliasBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStatusViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateStatusBalloonWidth;
-(NSLayoutConstraint *)statusViewWidthConstraint;
-(NSLayoutConstraint *)aliasBaselineConstraint;
-(void)updatePlayerName;
-(CGSize)layoutSizeFittingSize:(CGSize)arg1 ;
-(void)setNameIsLabel:(GKLabel *)arg1 ;
-(void)setAliasLabel:(GKLabel *)arg1 ;
-(NSLayoutConstraint *)statusViewTopConstraint;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(GKPlayerWithSpeechBalloonView *)statusView;
-(void)setStatusView:(GKPlayerWithSpeechBalloonView *)arg1 ;
-(void)setTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topMarginConstraint;
-(void)didUpdateModel;
-(void)applyConstraints;
@end

