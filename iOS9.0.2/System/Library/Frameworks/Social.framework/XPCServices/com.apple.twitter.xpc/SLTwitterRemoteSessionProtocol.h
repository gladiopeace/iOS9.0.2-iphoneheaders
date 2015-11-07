/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.twitter.xpc/com.apple.twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLTwitterRemoteSessionProtocol
@required
-(void)checkIn:(id)arg1;
-(void)setActiveAccountIdentifier:(id)arg1;
-(void)fetchSessionInfo:(/*^block*/id)arg1;
-(void)ensureUserRecordStore;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1;
-(void)setGeotagStatus:(id)arg1;
-(void)fetchGeotagStatus:(/*^block*/id)arg1;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/id)arg1;
-(void)fetchRecordForScreenName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchCurrentTCoLength:(/*^block*/id)arg1;
-(void)retweetTweetWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)sendDirectMessage:(id)arg1 toUser:(id)arg2 withScreenName:(id)arg3 completion:(/*^block*/id)arg4;
-(void)showTwitterSettingsIfNeeded:(/*^block*/id)arg1;

@end

