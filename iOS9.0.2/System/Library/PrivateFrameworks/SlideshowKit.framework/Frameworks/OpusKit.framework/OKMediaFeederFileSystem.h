/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKMediaFeeder.h>

@class NSURL, NSArray;

@interface OKMediaFeederFileSystem : OKMediaFeeder {

	NSURL* _directoryURL;
	NSArray* _mediaURLs;

}

@property (retain) NSArray * mediaURLs;              //@synthesize mediaURLs=_mediaURLs - In the implementation block
+(id)supportedSettings;
+(char)isRemote;
+(char)supportLiveUpdates;
+(id)mediaFeederWithDirectoryURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(NSArray *)mediaURLs;
-(id)feederSettings;
-(char)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(void)setMediaURLs:(NSArray *)arg1 ;
@end
