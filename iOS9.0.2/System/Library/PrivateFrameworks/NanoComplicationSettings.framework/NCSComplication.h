/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoComplicationSettings/NanoComplicationSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NCSComplication : NSObject <NSCopying> {

	char _cannotBeDisabled;
	char _active;
	NSString* _name;
	NSString* _appBundleIdentifier;
	NSString* _complicationBundleIdentifier;
	NSString* _sockPuppetIdentifier;
	unsigned _installState;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                       //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * complicationBundleIdentifier;              //@synthesize complicationBundleIdentifier=_complicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sockPuppetIdentifier;                      //@synthesize sockPuppetIdentifier=_sockPuppetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * complicationIdentifier; 
@property (assign,nonatomic) char cannotBeDisabled;                              //@synthesize cannotBeDisabled=_cannotBeDisabled - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                        //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) unsigned installState;                              //@synthesize installState=_installState - In the implementation block
@property (nonatomic,readonly) char isInstalled; 
-(char)isInstalled;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(char)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)setInstallState:(unsigned)arg1 ;
-(unsigned)installState;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)complicationIdentifier;
-(NSString *)complicationBundleIdentifier;
-(void)setComplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sockPuppetIdentifier;
-(char)cannotBeDisabled;
-(void)setCannotBeDisabled:(char)arg1 ;
-(void)setSockPuppetIdentifier:(NSString *)arg1 ;
@end

