/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailSettings/MFNanoBridgeSettingsMailbox.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MFNanoBridgeSettingsSharedMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding> {

	unsigned _type;

}

@property (nonatomic,readonly) unsigned type;              //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
-(id)icon;
-(id)displayName;
-(id)_includesMeIconImage;
@end

