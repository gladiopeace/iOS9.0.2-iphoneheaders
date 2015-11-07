/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBubbleDetailViewController.h>
#import <Game Center/GKFriendRequestComposeViewControllerDelegate.h>

@protocol GKScoreDetailDelegate;
@class GKTextBubbleControl, GKLeaderboard, GKScore;

@interface GKScoreDetailViewController : GKBubbleDetailViewController <GKFriendRequestComposeViewControllerDelegate> {

	id<GKScoreDetailDelegate> _delegate;
	GKTextBubbleControl* _shareBubble;
	GKTextBubbleControl* _challengeBubble;
	GKTextBubbleControl* _requestBubble;
	GKLeaderboard* _leaderboard;
	GKScore* _score;

}

@property (assign) id<GKScoreDetailDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * shareBubble;                  //@synthesize shareBubble=_shareBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * challengeBubble;              //@synthesize challengeBubble=_challengeBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * requestBubble;                //@synthesize requestBubble=_requestBubble - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                        //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKScore * score;                                    //@synthesize score=_score - In the implementation block
+(id)scoreDetailWithScore:(id)arg1 leaderboard:(id)arg2 ;
-(id)initWithScore:(id)arg1 leaderboard:(id)arg2 ;
-(void)didTouchShareBubble;
-(void)pushRightBubble;
-(void)didTouchChallengeBubble;
-(void)pushLeftBubble;
-(void)didTouchRequestBubble;
-(void)configureForScoreAndLeaderboard;
-(GKTextBubbleControl *)shareBubble;
-(void)setShareBubble:(GKTextBubbleControl *)arg1 ;
-(GKTextBubbleControl *)challengeBubble;
-(void)setChallengeBubble:(GKTextBubbleControl *)arg1 ;
-(GKTextBubbleControl *)requestBubble;
-(void)setRequestBubble:(GKTextBubbleControl *)arg1 ;
-(GKScore *)score;
-(id)player;
-(void)setDelegate:(id<GKScoreDetailDelegate>)arg1 ;
-(void)dealloc;
-(id<GKScoreDetailDelegate>)delegate;
-(void)loadView;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(id)sharePopoverSourceView;
-(void)friendRequestComposeViewControllerWasCancelled:(id)arg1 ;
-(void)friendRequestComposeViewControllerDidFinish:(id)arg1 ;
-(id)_gkRepresentedObject;
-(void)setScore:(GKScore *)arg1 ;
@end

