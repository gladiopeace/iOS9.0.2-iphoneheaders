/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface BLTSectionConfiguration : NSObject {

	NSDictionary* _configurations;

}
+(id)sharedSectionConfiguration;
-(id)init;
-(id)_loadConfigurations;
-(char)hasSectionIDOptedOutOfCoordination:(id)arg1 subtype:(int)arg2 considerSubtype:(char)arg3 ;
-(char)hasSectionIDOptedOutOfCoordination:(id)arg1 ;
-(char)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1 ;
-(char)shouldSectionIDSettingsAlwaysSync:(id)arg1 ;
@end

