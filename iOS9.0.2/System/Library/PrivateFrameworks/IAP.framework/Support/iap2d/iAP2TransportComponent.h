/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iap2d/iAP2IdentificationParameter.h>

@class NSNumber, NSString, NSData;

@interface iAP2TransportComponent : iAP2IdentificationParameter {

	NSNumber* componentID;
	NSString* componentName;
	unsigned char supportsiAPConnection;
	int transportType;
	NSData* macAddr;
	NSData* btPairingTypes;
	unsigned btServicesFilter;
	unsigned sampleRateBitmask;
	unsigned char mode;
	BOOL hasNCMInterface;
	BOOL isCarPlay;
	unsigned char _NCMInterfaceNumber;

}

@property (retain) NSString * componentName; 
@property (retain) NSNumber * componentID; 
@property (assign) unsigned char supportsiAPConnection; 
@property (assign) int transportType; 
@property (retain) NSData * macAddr; 
@property (retain) NSData * btPairingTypes; 
@property (assign) unsigned btServicesFilter; 
@property (assign) unsigned sampleRateBitmask; 
@property (assign) BOOL hasNCMInterface; 
@property (assign) unsigned char NCMInterfaceNumber;                 //@synthesize NCMInterfaceNumber=_NCMInterfaceNumber - In the implementation block
@property (assign) BOOL isCarPlay; 
+(int)sampleRateEnumFromValue:(unsigned)arg1 ;
+(unsigned)sampleRateValueFromEnum:(int)arg1 ;
+(unsigned)sampleRateMaskFromEnum:(int)arg1 ;
-(unsigned)sampleRateBitmask;
-(BOOL)isCarPlay;
-(BOOL)hasNCMInterface;
-(unsigned char)NCMInterfaceNumber;
-(NSData *)macAddr;
-(NSNumber *)componentID;
-(unsigned char)supportsiAPConnection;
-(void)setSampleRateBit:(int)arg1 ;
-(char)isSampleRateBitSet:(int)arg1 ;
-(unsigned char)getMode;
-(void)setComponentID:(NSNumber *)arg1 ;
-(void)setSupportsiAPConnection:(unsigned char)arg1 ;
-(void)setMacAddr:(NSData *)arg1 ;
-(NSData *)btPairingTypes;
-(void)setBtPairingTypes:(NSData *)arg1 ;
-(unsigned)btServicesFilter;
-(void)setBtServicesFilter:(unsigned)arg1 ;
-(void)setSampleRateBitmask:(unsigned)arg1 ;
-(void)setHasNCMInterface:(BOOL)arg1 ;
-(void)setIsCarPlay:(BOOL)arg1 ;
-(void)setNCMInterfaceNumber:(unsigned char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setMode:(unsigned char)arg1 ;
-(NSString *)componentName;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(void)setComponentName:(NSString *)arg1 ;
@end

