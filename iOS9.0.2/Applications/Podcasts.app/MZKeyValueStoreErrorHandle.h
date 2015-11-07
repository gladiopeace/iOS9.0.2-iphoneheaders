/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, IMKeyValueStoreController, IMKeyValueStoreError;

@interface MZKeyValueStoreErrorHandle : NSObject {

	NSMutableDictionary* _userInfo;
	IMKeyValueStoreController* _controller;
	IMKeyValueStoreError* _error;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSMutableDictionary * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreError * error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)resolveError;
-(void)handleError:(id)arg1 withController:(id)arg2 ;
-(IMKeyValueStoreError *)error;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(IMKeyValueStoreController *)controller;
-(void)setController:(IMKeyValueStoreController *)arg1 ;
-(void)cleanup;
-(void)setError:(IMKeyValueStoreError *)arg1 ;
@end

