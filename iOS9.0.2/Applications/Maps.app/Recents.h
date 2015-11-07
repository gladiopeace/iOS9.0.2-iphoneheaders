/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface Recents : NSObject {

	char _loadingCoreRecents;
	char _needsReload;
	NSArray* _systemRecents;
	NSArray* _orderedRecents;

}

@property (nonatomic,readonly) NSArray * systemRecents;               //@synthesize systemRecents=_systemRecents - In the implementation block
@property (nonatomic,readonly) NSArray * orderedRecents;              //@synthesize orderedRecents=_orderedRecents - In the implementation block
+(id)sharedRecents;
+(void)loadCoreRecentsOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)beginPrecachingRecentsIfNeeded;
-(NSArray *)systemRecents;
-(NSArray *)orderedRecents;
-(void)setNeedsCoreRecentsReload;
-(void)_historyChanged;
-(id)initWithRecents:(id)arg1 ;
-(void)_applicationActivating;
-(void)_combineRecents;
-(void)recordSelection:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

