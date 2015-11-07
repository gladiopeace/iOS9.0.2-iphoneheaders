/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptInterface.h>

@interface MTHTMLStoreScriptInterface : SUScriptInterface
+(id)numberFromString:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
-(void)didSubscribe:(id)arg1 ;
-(id)isSubscribed:(id)arg1 ;
-(id)createMediaPlayer:(id)arg1 ;
-(void)playPodcastAtIndex:(id)arg1 startIndex:(unsigned)arg2 ;
-(void)_playStoreMediaDictionaryItems:(id)arg1 ;
-(void)performPurchaseAnimationForIdentifier:(id)arg1 ;
-(void)subscribe:(id)arg1 ;
-(void)dealloc;
-(id)clientIdentifier;
-(id)initWithClientContext:(id)arg1 ;
-(char)isExplicitContentDisabled;
-(void)selectTrackListItemWithIdentifier:(id)arg1 ;
@end

