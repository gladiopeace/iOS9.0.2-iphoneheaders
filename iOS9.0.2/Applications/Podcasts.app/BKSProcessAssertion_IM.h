/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class NSString;

@interface BKSProcessAssertion_IM : NSObject {

	NSString* _name;
	unsigned _flags;
	unsigned _reason;
	/*^block*/id _invalidationHandler;
	SBSProcessAssertionRef _sbsProcessAssertion;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char valid; 
@property (nonatomic,readonly) unsigned flags;                              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned reason;                             //@synthesize reason=_reason - In the implementation block
@property (copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign) SBSProcessAssertionRef sbsProcessAssertion;              //@synthesize sbsProcessAssertion=_sbsProcessAssertion - In the implementation block
+(id)NameForReason:(unsigned)arg1 ;
-(void)setSbsProcessAssertion:(SBSProcessAssertionRef)arg1 ;
-(SBSProcessAssertionRef)sbsProcessAssertion;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(char)isValid;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(unsigned)reason;
-(unsigned)flags;
@end

