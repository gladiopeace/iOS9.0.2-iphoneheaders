/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

	NSObject*<OS_xpc_object> _assertionEndpoint;
	unsigned _childContextId;
	unsigned _hostContextId;

}

@property (nonatomic,readonly) unsigned childContextId;              //@synthesize childContextId=_childContextId - In the implementation block
@property (nonatomic,readonly) unsigned hostContextId;               //@synthesize hostContextId=_hostContextId - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setAssertionEndpoint:(id)arg1 ;
-(id)initWithChildContextId:(unsigned)arg1 hostContextId:(unsigned)arg2 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(id)assertionEndpoint;
-(unsigned)childContextId;
-(unsigned)hostContextId;
@end

