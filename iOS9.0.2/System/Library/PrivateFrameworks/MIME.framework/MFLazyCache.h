/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSCache;

@interface MFLazyCache : NSObject {

	NSLock* _lock;
	NSCache* _storage;

}
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(void)_exchangeOriginalValue:(id)arg1 forKey:(id)arg2 withValue:(id)arg3 ;
-(id)valueForKey:(id)arg1 valueGenerator:(/*^block*/id)arg2 ;
@end

