/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFUIPreferencesDelegate.h>

@class AFUIPreferences, NSString;

@interface ACPreferences : NSObject <AFUIPreferencesDelegate> {

	AFUIPreferences* _internalPreferences;

}

@property (assign,nonatomic) char siriDidActivate; 
@property (assign,nonatomic) char tourGuideWasDisplayed; 
@property (assign,nonatomic) char listenOnActivation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferences;
-(id)init;
-(char)_boolForKey:(id)arg1 ;
-(void)preferences:(id)arg1 didChangeValueForKey:(id)arg2 ;
-(void)_setBool:(char)arg1 forKey:(id)arg2 ;
-(char)listenOnActivation;
-(char)siriDidActivate;
-(void)setSiriDidActivate:(char)arg1 ;
-(void)setListenOnActivation:(char)arg1 ;
-(char)tourGuideWasDisplayed;
-(void)setTourGuideWasDisplayed:(char)arg1 ;
@end

