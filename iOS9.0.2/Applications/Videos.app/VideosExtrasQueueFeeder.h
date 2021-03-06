/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class VideosExtrasPlaybackContext;

@interface VideosExtrasQueueFeeder : MPQueueFeeder {

	VideosExtrasPlaybackContext* _context;

}

@property (getter=isBackgroundContext,nonatomic,readonly) char backgroundContext; 
-(char)isBackgroundContext;
-(char)_shouldReloadForContext:(id)arg1 ;
-(unsigned)indexOfItemWithIdentifier:(id)arg1 ;
-(unsigned)itemCount;
-(id)copyRawItemAtIndex:(unsigned)arg1 ;
-(id)identifierAtIndex:(unsigned)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)itemClass;
-(unsigned)repeatType;
-(char)hasValidItemAtIndex:(unsigned)arg1 ;
-(unsigned)itemTypeForIndex:(unsigned)arg1 ;
-(id)playbackInfoAtIndex:(unsigned)arg1 ;
@end

