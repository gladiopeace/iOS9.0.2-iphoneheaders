/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject {

	BBBulletin* _bulletin;
	unsigned _feeds;

}

@property (nonatomic,retain) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned feeds;                     //@synthesize feeds=_feeds - In the implementation block
-(void)dealloc;
-(unsigned)feeds;
-(void)setFeeds:(unsigned)arg1 ;
-(BBBulletin *)bulletin;
-(void)setBulletin:(BBBulletin *)arg1 ;
@end

