/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface VTUIStringsHelper : NSObject {

	NSDictionary* _localizedStringTable;
	NSDictionary* _localizedStringTableForSiriLanguage;
	NSString* _heySiriTriggerPhrase;

}
+(void)initialize;
+(id)sharedStringsHelper;
-(id)init;
-(void)setupForCurrentLocaleAndSiriLanguage;
-(id)uiLocalizedStringForKey:(id)arg1 ;
-(id)_bundleStringTableForLanguages:(id)arg1 ;
-(void)_setSiriLanguage:(id)arg1 ;
-(id)_siriLanguageSubstitutedString:(id)arg1 ;
-(id)siriLanguageStringForKey:(id)arg1 ;
@end

