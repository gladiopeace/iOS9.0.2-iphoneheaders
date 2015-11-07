/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _DKObjectType, _CDEventStreamProperties;

@interface _DKEventStream : NSObject <NSSecureCoding> {

	NSString* _name;
	_DKObjectType* _eventValueType;
	_CDEventStreamProperties* _eventProperties;

}

@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) _DKObjectType * eventValueType;                          //@synthesize eventValueType=_eventValueType - In the implementation block
@property (readonly) _CDEventStreamProperties * eventProperties;              //@synthesize eventProperties=_eventProperties - In the implementation block
+(char)supportsSecureCoding;
+(id)eventStreamWithName:(id)arg1 valueType:(id)arg2 ;
+(id)eventStreamWithName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 valueType:(id)arg2 ;
-(void)setupEventProperties:(id)arg1 ;
-(_DKObjectType *)eventValueType;
-(_CDEventStreamProperties *)eventProperties;
@end

