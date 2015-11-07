/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FTCServiceMonitor : NSObject {

	int _availability;
	int _type;
	int _token;

}

@property (nonatomic,readonly) int serviceType; 
-(void)_updateAvailability;
-(id)initWithServiceType:(int)arg1 ;
-(void)dealloc;
-(int)serviceType;
-(int)serviceAvailability;
-(void)updateAvailability;
-(void)_postAvailability:(int)arg1 ;
-(void)handleActiveAccountsChanged:(id)arg1 ;
@end

