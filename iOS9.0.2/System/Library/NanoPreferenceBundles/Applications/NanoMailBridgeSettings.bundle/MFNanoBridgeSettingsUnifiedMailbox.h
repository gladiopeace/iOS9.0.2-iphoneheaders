/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMailBridgeSettings.bundle/NanoMailBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailBridgeSettings/MFNanoBridgeSettingsMailbox.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MFNanoBridgeSettingsUnifiedMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding> {

	int _type;

}

@property (nonatomic,readonly) int type;              //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(id)icon;
-(id)displayName;
@end

