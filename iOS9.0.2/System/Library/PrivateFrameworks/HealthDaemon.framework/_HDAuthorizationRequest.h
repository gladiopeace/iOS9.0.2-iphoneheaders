/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID, NSSet;

@interface _HDAuthorizationRequest : NSObject {

	/*^block*/id _completionHandler;
	NSUUID* _identifier;
	NSSet* _typesToWrite;
	NSSet* _typesToRead;

}

@property (nonatomic,readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToWrite;              //@synthesize typesToWrite=_typesToWrite - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToRead;               //@synthesize typesToRead=_typesToRead - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 typesToWrite:(id)arg2 typesToRead:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSSet *)typesToWrite;
-(NSSet *)typesToRead;
-(void)invokeCompletionHandlerWithSuccess:(char)arg1 error:(id)arg2 ;
@end

