/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBasicCollectionViewDataSource.h>

@class GKGameRecord, GKPlayer;

@interface GKLeaderboardSetListDataSource : GKBasicCollectionViewDataSource {

	GKGameRecord* _game;
	GKPlayer* _player;

}

@property (nonatomic,retain) GKGameRecord * game;              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                //@synthesize player=_player - In the implementation block
-(id)initWithGame:(id)arg1 player:(id)arg2 ;
-(id)sectionTitle;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)setGame:(GKGameRecord *)arg1 ;
-(GKGameRecord *)game;
@end

