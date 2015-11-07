/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/SIMSettings.bundle/SIMSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PHForwardingSettings : NSObject {

	unsigned _callForwardingState;
	NSString* _callForwardingNumber;
	NSString* _defaultCallForwardingNumber;
	NSString* _defaultCallForwardingNumberPreferencesKey;

}

@property (assign) unsigned callForwardingState;                                                //@synthesize callForwardingState=_callForwardingState - In the implementation block
@property (nonatomic,retain) NSString * callForwardingNumber;                                   //@synthesize callForwardingNumber=_callForwardingNumber - In the implementation block
@property (nonatomic,retain) NSString * defaultCallForwardingNumber;                            //@synthesize defaultCallForwardingNumber=_defaultCallForwardingNumber - In the implementation block
@property (nonatomic,retain) NSString * defaultCallForwardingNumberPreferencesKey;              //@synthesize defaultCallForwardingNumberPreferencesKey=_defaultCallForwardingNumberPreferencesKey - In the implementation block
-(unsigned)callForwardingState;
-(void)setCallForwardingState:(unsigned)arg1 ;
-(NSString *)callForwardingNumber;
-(void)setCallForwardingNumber:(NSString *)arg1 ;
-(NSString *)defaultCallForwardingNumber;
-(void)setDefaultCallForwardingNumber:(NSString *)arg1 ;
-(NSString *)defaultCallForwardingNumberPreferencesKey;
-(void)setDefaultCallForwardingNumberPreferencesKey:(NSString *)arg1 ;
@end

