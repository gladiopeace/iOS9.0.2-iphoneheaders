/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCellularPlanProfile, CTCellularPlanSubscription, NSNumber, NSData, NSArray;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding> {

	char _isHomePlan;
	char _isSelectable;
	NSString* _phoneNumber;
	CTCellularPlanProfile* _profile;
	CTCellularPlanSubscription* _subscription;
	NSNumber* _subscriptionStatusOverride;

}

@property (nonatomic,readonly) NSData * profileId; 
@property (nonatomic,readonly) char isSelected; 
@property (nonatomic,readonly) NSString * iccid; 
@property (nonatomic,readonly) char autoRenew; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double billingStartDate; 
@property (nonatomic,readonly) double billingEndDate; 
@property (nonatomic,readonly) NSString * carrierName; 
@property (nonatomic,readonly) int planType; 
@property (nonatomic,readonly) NSString * planDescription; 
@property (nonatomic,readonly) int planStatus; 
@property (nonatomic,readonly) int accountStatus; 
@property (nonatomic,readonly) NSString * accountURL; 
@property (nonatomic,readonly) NSArray * dataUsage; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,retain) NSString * phoneNumber;                                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) char isHomePlan;                                        //@synthesize isHomePlan=_isHomePlan - In the implementation block
@property (assign,nonatomic) char isSelectable;                                      //@synthesize isSelectable=_isSelectable - In the implementation block
@property (nonatomic,retain) CTCellularPlanProfile * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) CTCellularPlanSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionStatusOverride;                  //@synthesize subscriptionStatusOverride=_subscriptionStatusOverride - In the implementation block
+(char)supportsSecureCoding;
-(CTCellularPlanProfile *)profile;
-(void)setIsSelectable:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isSelected;
-(NSString *)phoneNumber;
-(int)status;
-(char)isSelectable;
-(NSData *)profileId;
-(id)initWithProfile:(id)arg1 subscription:(id)arg2 ;
-(NSNumber *)subscriptionStatusOverride;
-(char)autoRenew;
-(int)planType;
-(void)setSubscriptionStatusOverride:(NSNumber *)arg1 ;
-(int)planDescriptionCompare:(id)arg1 ;
-(char)isHomePlan;
-(void)setIsHomePlan:(char)arg1 ;
-(void)setSubscription:(CTCellularPlanSubscription *)arg1 ;
-(CTCellularPlanSubscription *)subscription;
-(NSString *)carrierName;
-(NSString *)accountURL;
-(NSString *)iccid;
-(NSString *)planDescription;
-(NSArray *)dataUsage;
-(double)billingStartDate;
-(double)billingEndDate;
-(int)planStatus;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(int)accountStatus;
-(void)setProfile:(CTCellularPlanProfile *)arg1 ;
@end

