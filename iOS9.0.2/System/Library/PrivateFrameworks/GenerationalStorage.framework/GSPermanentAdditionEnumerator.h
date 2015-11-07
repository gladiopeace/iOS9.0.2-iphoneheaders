/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/GSAdditionEnumerating.h>

@class NSError, GSPermanentStorage, NSString, NSArray, GSDaemonProxySync;

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating> {

	GSPermanentStorage* _storage;
	NSString* _nameSpace;
	unsigned long long _withOptions;
	unsigned long long _withoutOptions;
	NSArray* _array;
	unsigned _pos;
	GSDaemonProxySync* _proxy;
	NSError* _error;
	id _token;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)dealloc;
-(id)nextObject;
-(void)_fetchNextBatch;
-(id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5 ;
@end

