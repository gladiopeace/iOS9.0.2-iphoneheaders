/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TextInput/TextInput-Structs.h>
@class NSTimer;

@interface TIPreferencesController : NSObject {

	NSTimer* _synchronizePreferencesTimer;
	char dontSynchronizePreferences;
	char isInternalInstall;

}

@property (assign,nonatomic) char dontSynchronizePreferences; 
@property (assign,nonatomic) char isInternalInstall; 
+(id)sharedPreferencesController;
-(id)valueForKey:(int)arg1 ;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(char)boolForKey:(int)arg1 ;
-(void)setAutocorrectionEnabled:(char)arg1 ;
-(void)synchronizePreferences;
-(SCD_Struct_TI13*)preferences;
-(char)isKeyLockedDown:(int)arg1 ;
-(void)releaseDontSynchronizePreferences;
-(void)touchSynchronizePreferencesTimer;
-(char)isInternalInstall;
-(void)setIsInternalInstall:(char)arg1 ;
-(SCD_Struct_TI14*)domains;
-(id)valueForManagedKey:(int)arg1 ;
-(void)setPredictionEnabled:(char)arg1 ;
-(char)dontSynchronizePreferences;
-(void)managedKeyboardSettingDidChange:(id)arg1 ;
-(void)clearSynchronizePreferencesTimer;
-(void)preferencesChangedCallback:(id)arg1 ;
-(void)setCheckSpellingEnabled:(char)arg1 ;
-(id)defaultForKey:(int)arg1 ;
-(void)setDontSynchronizePreferences:(char)arg1 ;
-(void)setValue:(id)arg1 forManagedKey:(int)arg2 ;
-(SCD_Struct_TI14*)domainForType:(int)arg1 ;
@end

