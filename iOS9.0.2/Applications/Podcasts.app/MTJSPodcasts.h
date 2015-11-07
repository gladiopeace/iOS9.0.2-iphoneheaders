/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <Podcasts/MTJSPodcasts.h>

@protocol MTJSPodcasts <JSExport>
@required
-(void)subscribe:(id)arg1;

@end


@interface MTJSPodcasts : IKJSObject <MTJSPodcasts>
+(id)podcastPredicateForLibraryItem:(id)arg1 ;
+(id)episodePredicateForLibraryItem:(id)arg1 ;
-(void)subscribe:(id)arg1 ;
@end

