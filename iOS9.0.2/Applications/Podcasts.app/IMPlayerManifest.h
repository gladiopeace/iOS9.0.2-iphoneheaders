/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, IMPlayerItem, NSUserActivity, NSObject;

@interface IMPlayerManifest : NSObject {

	char _isLoaded;
	NSString* _title;
	unsigned _currentIndex;
	IMPlayerItem* _currentItem;
	NSUserActivity* _activity;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned count; 
@property (assign,nonatomic) char isLoaded;                                   //@synthesize isLoaded=_isLoaded - In the implementation block
@property (assign,nonatomic) unsigned currentIndex;                           //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) IMPlayerItem * currentItem;                      //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,retain) NSUserActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)supportedActivityTypes;
+(id)createManifestForActivity:(id)arg1 ;
+(id)activityTypeSuffix;
+(void)registerManifestForRestoration:(Class)arg1 ;
+(id)restoreActivity:(id)arg1 ;
+(id)_activityType;
-(void)postManifestDidChangeNotification;
-(char)hasPrevious;
-(void)load:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsLoaded:(char)arg1 ;
-(void)next;
-(void)previous;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(unsigned)currentIndex;
-(void)setCurrentItem:(IMPlayerItem *)arg1 ;
-(IMPlayerItem *)currentItem;
-(char)isLoaded;
-(NSUserActivity *)activity;
-(void)setActivity:(NSUserActivity *)arg1 ;
-(void)_load;
-(char)hasNext;
-(void)setCurrentIndex:(unsigned)arg1 ;
@end
