/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Tips/TPSDataCacheController.h>

@interface TPSImageCacheController : TPSDataCacheController
+(id)defaultInMemoryImageCache;
+(id)sharedInstance;
-(void)getImageForPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)getImageForPath:(id)arg1 ;
-(void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned)arg3 ;
-(id)imageFromMemoryCacheForPath:(id)arg1 ;
-(id)newDataCache;
@end
