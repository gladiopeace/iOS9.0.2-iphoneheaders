/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>

@class NSString, NSMutableDictionary;

@interface HMDAdminEnforcementMessageFilter : HMDMessageFilter {

	NSString* _localAdminName;
	NSMutableDictionary* _adminsOfHomes;
	NSMutableDictionary* _objectsContainedInHomes;

}

@property (nonatomic,retain) NSString * localAdminName;                                  //@synthesize localAdminName=_localAdminName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adminsOfHomes;                        //@synthesize adminsOfHomes=_adminsOfHomes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectsContainedInHomes;              //@synthesize objectsContainedInHomes=_objectsContainedInHomes - In the implementation block
+(char)isBlackListedMessageForWatch:(id)arg1 ;
+(char)isWhitelistedMessage:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)resetConfiguration;
-(char)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(NSMutableDictionary *)adminsOfHomes;
-(NSMutableDictionary *)objectsContainedInHomes;
-(void)setLocalAdminName:(NSString *)arg1 ;
-(id)_localAdministratorName;
-(NSString *)localAdminName;
-(void)addHomeWithUUID:(id)arg1 administratorName:(id)arg2 ;
-(void)addObjectWithUUID:(id)arg1 containedInHome:(id)arg2 ;
-(void)localAdministratorName;
-(void)setAdminsOfHomes:(NSMutableDictionary *)arg1 ;
-(void)setObjectsContainedInHomes:(NSMutableDictionary *)arg1 ;
@end

