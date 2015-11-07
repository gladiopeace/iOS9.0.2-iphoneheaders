/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAceClientState.h>

@class SACalendar, NSString;

@interface SADynamiteClientState : SAAceClientState

@property (nonatomic,retain) SACalendar * expirationDate; 
@property (nonatomic,copy) NSString * status; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)dynamiteClientState;
+(id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(SACalendar *)expirationDate;
-(void)setExpirationDate:(SACalendar *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

