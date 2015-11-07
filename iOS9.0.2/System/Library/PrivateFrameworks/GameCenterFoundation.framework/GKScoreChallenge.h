/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge {

	GKScore* _score;

}

@property (nonatomic,retain) GKScore * score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) GKLeaderboard * leaderboard; 
+(char)instancesRespondToSelector:(SEL)arg1 ;
-(id)alertGoalText;
-(id)iconSource;
-(id)smallIconURLString;
-(id)iconURLString;
-(id)listTitleText;
-(id)listGoalText;
-(id)composeGoalText;
-(id)detailGoalText;
-(GKScore *)score;
-(void)dealloc;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(id)arg1 ;
-(char)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2 ;
-(void)setScore:(GKScore *)arg1 ;
-(id)titleText;
@end

