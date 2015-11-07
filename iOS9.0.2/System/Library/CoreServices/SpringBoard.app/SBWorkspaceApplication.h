/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>
#import <SpringBoard/SBProcessSettings.h>

@class SBApplication, NSSet, SBProcessSettings, NSString;

@interface SBWorkspaceApplication : SBWorkspaceEntity <SBProcessSettings> {

	SBApplication* _application;
	NSSet* _actions;
	SBProcessSettings* _processSettings;

}

@property (nonatomic,retain) SBApplication * application;                               //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,retain,readonly) SBProcessSettings * processSettings;              //@synthesize processSettings=_processSettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityForApplication:(id)arg1 actions:(id)arg2 ;
+(id)entityForApplication:(id)arg1 ;
+(/*^block*/id)entityGenerator;
-(void)clearProcessSettings;
-(char)boolForProcessSetting:(int)arg1 ;
-(void)setFlag:(int)arg1 forProcessSetting:(int)arg2 ;
-(void)setObject:(id)arg1 forProcessSetting:(int)arg2 ;
-(int)flagForProcessSetting:(int)arg1 ;
-(id)objectForProcessSetting:(int)arg1 ;
-(void)applyProcessSettings:(id)arg1 ;
-(id)copyProcessSettings;
-(id)workspaceApplication;
-(char)isApplicationEntity;
-(id)representedDisplay;
-(/*^block*/id)_generator;
-(char)_supportsLayoutRole:(int)arg1 ;
-(char)_supportsPresentationAtAnySize;
-(char)_supportsDynamicResizing;
-(SBProcessSettings *)processSettings;
-(int)_mainDisplayPreferredInterfaceOrientation;
-(void)_setMainDisplayPreferredInterfaceOrientation:(int)arg1 ;
-(id)initWithApplication:(id)arg1 actions:(id)arg2 ;
-(void)setApplication:(SBApplication *)arg1 ;
-(void)setActions:(NSSet *)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSSet *)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)viewControllerClass;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(SBApplication *)application;
@end

