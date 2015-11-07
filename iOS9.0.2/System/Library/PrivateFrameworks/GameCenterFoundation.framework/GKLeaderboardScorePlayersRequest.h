/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest {

	NSArray* _playerInternals;

}

@property (nonatomic,copy) NSArray * playerInternals;              //@synthesize playerInternals=_playerInternals - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)setPlayerInternals:(NSArray *)arg1 ;
-(NSArray *)playerInternals;
@end

