/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSString;

@interface MRApplicationActivity : NSObject <NSSecureCoding, NSMutableCopying> {

	CFAllocatorRef _allocator;
	NSUUID* _uniqueIdentifier;
	NSString* _primaryApplicationDisplayID;
	NSString* _secondaryApplicationDisplayID;
	char _shouldPrepareAppPlaybackQueue;
	int _status;
	int _creatorProcessID;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * primaryApplicationDisplayID;                //@synthesize primaryApplicationDisplayID=_primaryApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) NSString * secondaryApplicationDisplayID;              //@synthesize secondaryApplicationDisplayID=_secondaryApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) char shouldPrepareAppPlaybackQueue;                    //@synthesize shouldPrepareAppPlaybackQueue=_shouldPrepareAppPlaybackQueue - In the implementation block
@property (nonatomic,readonly) int status;                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) int creatorProcessID;                                  //@synthesize creatorProcessID=_creatorProcessID - In the implementation block
+(char)supportsSecureCoding;
+(id)allocWithAllocator:(CFAllocatorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2 ;
-(NSString *)primaryApplicationDisplayID;
-(NSString *)secondaryApplicationDisplayID;
-(char)shouldPrepareAppPlaybackQueue;
-(int)creatorProcessID;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
@end

