/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@interface CTCellularData : NSObject {

	cellular_usage_policy_client_sRef _cuPolicyClient;
	queue* _cuPolicyClientQueue;
	unsigned _restrictedState;
	/*^block*/id _cellularDataRestrictionDidUpdateNotifier;

}

@property (copy) id cellularDataRestrictionDidUpdateNotifier;              //@synthesize cellularDataRestrictionDidUpdateNotifier=_cellularDataRestrictionDidUpdateNotifier - In the implementation block
@property (nonatomic,readonly) unsigned restrictedState;                   //@synthesize restrictedState=_restrictedState - In the implementation block
-(void)setCellularDataRestrictionStateFromPolicies:(void*)arg1 ;
-(id)cellularDataRestrictionDidUpdateNotifier;
-(unsigned)restrictedState;
-(void)setCellularDataRestrictionDidUpdateNotifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

