/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyPathObserver.h>
#import <libobjc.A.dylib/_UISettingsGroupObserver.h>

@class _UISettings, _UISettingsGroup, NSDictionary, NSString, UIView, NSArray;

@interface PTSHUD : UIView <UIGestureRecognizerDelegate, _UISettingsKeyPathObserver, _UISettingsGroupObserver> {

	char _showing;
	char _enteringModalEditingSavedModeTableViewCell;
	char _exitingModalEditingSavedModeTableViewCell;
	_UISettings* _settings;
	_UISettingsGroup* _settingsGroup;
	unsigned _savedSettingsIndex;
	NSDictionary* _configuration;
	NSString* _mode;
	UIView* _panView;
	NSArray* _savedModeRows;
	CGPoint _initialPoint;

}

@property (nonatomic,retain) _UISettings * settings;                                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) _UISettingsGroup * settingsGroup;                             //@synthesize settingsGroup=_settingsGroup - In the implementation block
@property (assign,nonatomic) char showing;                                                 //@synthesize showing=_showing - In the implementation block
@property (assign,nonatomic) unsigned savedSettingsIndex;                                  //@synthesize savedSettingsIndex=_savedSettingsIndex - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * mode;                                                //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char enteringModalEditingSavedModeTableViewCell;              //@synthesize enteringModalEditingSavedModeTableViewCell=_enteringModalEditingSavedModeTableViewCell - In the implementation block
@property (assign,nonatomic) char exitingModalEditingSavedModeTableViewCell;               //@synthesize exitingModalEditingSavedModeTableViewCell=_exitingModalEditingSavedModeTableViewCell - In the implementation block
@property (assign,nonatomic) CGPoint initialPoint;                                         //@synthesize initialPoint=_initialPoint - In the implementation block
@property (nonatomic,retain) UIView * panView;                                             //@synthesize panView=_panView - In the implementation block
@property (nonatomic,retain) NSArray * savedModeRows;                                      //@synthesize savedModeRows=_savedModeRows - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)window;
+(CGRect)defaultFrame;
-(void)hide;
-(char)showing;
-(void)show;
-(void)configureForSettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UISettings *)settings;
-(void)setMode:(NSString *)arg1 ;
-(NSString *)mode;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned)arg3 toIndex:(unsigned)arg4 ;
-(NSDictionary *)configuration;
-(void)setSettings:(_UISettings *)arg1 ;
-(void)setShowing:(char)arg1 ;
-(CGPoint)initialPoint;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(void)setSavedSettingsIndex:(unsigned)arg1 ;
-(void)handleVerticalPanGesture:(id)arg1 ;
-(void)setPanView:(UIView *)arg1 ;
-(void)showInMode:(id)arg1 ;
-(NSArray *)savedModeRows;
-(UIView *)panView;
-(_UISettingsGroup *)settingsGroup;
-(void)configureForSettings:(id)arg1 settingsGroup:(id)arg2 ;
-(void)setSettingsGroup:(_UISettingsGroup *)arg1 ;
-(unsigned)savedSettingsIndex;
-(void)showSavedSettingsAtIndex:(unsigned)arg1 ;
-(void)saveSettingsGroupWithReason:(id)arg1 ;
-(void)updateInterface;
-(void)addSavedSettings;
-(void)setEnteringModalEditingSavedModeTableViewCell:(char)arg1 ;
-(void)setExitingModalEditingSavedModeTableViewCell:(char)arg1 ;
-(void)showMessage:(id)arg1 ;
-(void)updateControlsModeInterface;
-(void)updateSavedModeInterface;
-(char)enteringModalEditingSavedModeTableViewCell;
-(char)exitingModalEditingSavedModeTableViewCell;
-(void)showInModeForKeyPath:(id)arg1 ;
-(void)restoreDefaultValuesAction:(id)arg1 ;
-(void)saveSettingsAction:(id)arg1 ;
-(void)addSettingsAction:(id)arg1 ;
-(void)showControlsModeAction:(id)arg1 ;
-(void)showSavedModeAction:(id)arg1 ;
-(void)setModalEditingSavedModeTableViewCell:(char)arg1 ;
-(void)editSavedModeTableAction:(id)arg1 ;
-(void)removeSavedSettingsAtIndex:(unsigned)arg1 ;
-(void)moveSavedSettingsAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(void)setSavedModeRows:(NSArray *)arg1 ;
@end

