/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {

	void* _priv;

}

@property (readonly) int condition; 
@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)lockBeforeDate:(id)arg1 ;
-(char)tryLock;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(int)condition;
-(id)initWithCondition:(int)arg1 ;
-(void)lockWhenCondition:(int)arg1 ;
-(char)tryLockWhenCondition:(int)arg1 ;
-(void)unlockWithCondition:(int)arg1 ;
-(void)finalize;
-(char)lockWhenCondition:(int)arg1 beforeDate:(id)arg2 ;
@end

