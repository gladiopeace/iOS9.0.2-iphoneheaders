/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSDiscardableContent.h>

@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {

	char _keepAlive;
	NSString* _artworkIdentifier;
	NSData* _artworkData;

}

@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,retain) NSData * artworkData;                      //@synthesize artworkData=_artworkData - In the implementation block
-(char)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(char)isContentDiscarded;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSString *)artworkIdentifier;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
@end

