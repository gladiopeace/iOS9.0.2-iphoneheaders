/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class _CDContact, NSString, NSSet;

@interface _CDContactRecord : NSManagedObject {

	_CDContact* contact;

}

@property (assign,nonatomic) double creationDate; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * personId; 
@property (assign,nonatomic) int personIdType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSSet * interactionRecipient; 
@property (nonatomic,retain) NSSet * interactionSender; 
@property (assign,nonatomic) int incomingRecipientCount; 
@property (assign,nonatomic) int outgoingRecipientCount; 
@property (assign,nonatomic) int incomingSenderCount; 
@property (assign,nonatomic) double firstIncomingRecipientDate; 
@property (assign,nonatomic) double firstOutgoingRecipientDate; 
@property (assign,nonatomic) double firstIncomingSenderDate; 
@property (assign,nonatomic) double lastIncomingRecipientDate; 
@property (assign,nonatomic) double lastOutgoingRecipientDate; 
@property (assign,nonatomic) double lastIncomingSenderDate; 
@property (retain) _CDContact * contact; 
-(void)setContact:(_CDContact *)arg1 ;
-(_CDContact *)contact;
@end

