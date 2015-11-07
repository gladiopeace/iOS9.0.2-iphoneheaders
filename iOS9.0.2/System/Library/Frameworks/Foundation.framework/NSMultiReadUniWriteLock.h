/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)lockForReading;
-(char)tryLockForReading;
-(char)lockForReadingBeforeDate:(id)arg1 ;
-(void)lockForWriting;
-(char)tryLockForWriting;
-(char)lockForWritingBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end

