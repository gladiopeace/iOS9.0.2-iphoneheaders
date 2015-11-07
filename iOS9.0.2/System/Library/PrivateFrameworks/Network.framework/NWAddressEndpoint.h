/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <Network/NWHostEndpoint.h>

@class NSData, NSString;

@interface NWAddressEndpoint : NWHostEndpoint

@property (readonly) NSData * addressData; 
@property (readonly) const sockaddr* address; 
@property (readonly) unsigned addressFamily; 
@property (readonly) NSString * addressString; 
@property (readonly) NSString * addressStringNoPort; 
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
+(id)endpointWithAddress:(const sockaddr*)arg1 ;
-(NSData *)addressData;
-(unsigned)addressFamily;
-(const sockaddr*)address;
-(char)isEqual:(id)arg1 ;
-(NSString *)addressString;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(char)arg2 ;
-(NSString *)addressStringNoPort;
@end
