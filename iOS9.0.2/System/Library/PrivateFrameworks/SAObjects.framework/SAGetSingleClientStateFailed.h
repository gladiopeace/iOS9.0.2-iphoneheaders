/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, SAAceClientState;

@interface SAGetSingleClientStateFailed : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) int errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,retain) SAAceClientState * attemptedClientState; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getSingleClientStateFailed;
+(id)getSingleClientStateFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getSingleClientStateFailedWithErrorCode:(int)arg1 ;
+(id)getSingleClientStateFailedWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(id)encodedClassName;
-(id)initWithErrorCode:(int)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(SAAceClientState *)attemptedClientState;
-(void)setAttemptedClientState:(SAAceClientState *)arg1 ;
@end

