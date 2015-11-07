/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEVPNIKEv1ProposalParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	int _encryptionAlgorithm;
	int _integrityAlgorithm;
	int _diffieHellmanGroup;
	int _lifetimeSeconds;

}

@property (assign) int encryptionAlgorithm;              //@synthesize encryptionAlgorithm=_encryptionAlgorithm - In the implementation block
@property (assign) int integrityAlgorithm;               //@synthesize integrityAlgorithm=_integrityAlgorithm - In the implementation block
@property (assign) int diffieHellmanGroup;               //@synthesize diffieHellmanGroup=_diffieHellmanGroup - In the implementation block
@property (assign) int lifetimeSeconds;                  //@synthesize lifetimeSeconds=_lifetimeSeconds - In the implementation block
+(char)supportsSecureCoding;
-(int)encryptionAlgorithm;
-(int)integrityAlgorithm;
-(int)diffieHellmanGroup;
-(void)setEncryptionAlgorithm:(int)arg1 ;
-(void)setIntegrityAlgorithm:(int)arg1 ;
-(void)setDiffieHellmanGroup:(int)arg1 ;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setLifetimeSeconds:(int)arg1 ;
-(int)lifetimeSeconds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

