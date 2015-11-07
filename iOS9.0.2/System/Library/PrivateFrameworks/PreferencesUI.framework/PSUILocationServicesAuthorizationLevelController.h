/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencesUI/PSUILocationServicesListController.h>

@class NSString, NSDictionary, NSBundle;

@interface PSUILocationServicesAuthorizationLevelController : PSUILocationServicesListController {

	NSString* _serviceKey;
	NSDictionary* _details;
	NSString* _displayName;
	NSBundle* _entityBundle;

}

@property (nonatomic,copy) NSString * serviceKey;                  //@synthesize serviceKey=_serviceKey - In the implementation block
@property (nonatomic,retain) NSDictionary * details;               //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSBundle * entityBundle;              //@synthesize entityBundle=_entityBundle - In the implementation block
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)displayName;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)details;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)profileSettingsChanged:(id)arg1 ;
-(id)_constructFooterForAuthorizationLevel:(unsigned)arg1 ;
-(id)_usageTextForAuthorizationLevel:(unsigned)arg1 ;
-(id)_purposeStringForAuthorizationLevel:(unsigned)arg1 ;
-(void)_setLocationAuthorizationLevelForSpecifier:(id)arg1 ;
-(void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned)arg1 ;
-(NSBundle *)entityBundle;
-(void)setEntityBundle:(NSBundle *)arg1 ;
-(void)setServiceKey:(NSString *)arg1 ;
-(NSString *)serviceKey;
@end

