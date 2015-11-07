/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString;

@interface SagaPublishPlaylistOperation : CloudLibraryOperation {

	unsigned long long _sagaID;
	NSString* _playlistGlobalID;
	NSString* _playlistShareURL;

}

@property (nonatomic,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) NSString * playlistShareURL;              //@synthesize playlistShareURL=_playlistShareURL - In the implementation block
-(id)initWithSagaID:(unsigned long long)arg1 ;
-(NSString *)playlistShareURL;
-(NSString *)playlistGlobalID;
-(void)main;
@end

