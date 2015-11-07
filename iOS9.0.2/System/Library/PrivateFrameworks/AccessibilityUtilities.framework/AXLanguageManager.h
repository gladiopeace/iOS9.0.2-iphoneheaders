/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AXDialectMap, NSArray, NSCharacterSet, NSLocale, NSString;

@interface AXLanguageManager : NSObject {

	AXDialectMap* _dialectForSystemLanguage;
	AXDialectMap* _dialectForCurrentLocale;
	NSArray* _langMaps;
	NSCharacterSet* _commonCharacters;
	NSLocale* _userLocale;

}

@property (nonatomic,retain) NSArray * langMaps;                                   //@synthesize langMaps=_langMaps - In the implementation block
@property (nonatomic,readonly) NSString * systemLanguageID; 
@property (nonatomic,copy) NSLocale * userLocale;                                  //@synthesize userLocale=_userLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * commonCharacters;                    //@synthesize commonCharacters=_commonCharacters - In the implementation block
@property (assign,nonatomic) AXDialectMap * dialectForSystemLanguage; 
@property (assign,nonatomic) AXDialectMap * dialectForCurrentLocale; 
+(id)sharedInstance;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1 ;
+(id)nonlocalizedNameForLanguage:(id)arg1 ;
+(id)commonPunctuationCharacters;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 ;
+(id)nameForAlternativeVoiceIdentifier:(id)arg1 ;
+(id)dialectForAlternativeVoiceIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(AXDialectMap *)dialectForSystemLanguage;
-(id)dialectForLanguageID:(id)arg1 ;
-(NSString *)systemLanguageID;
-(id)basicDescription;
-(NSLocale *)userLocale;
-(char)isCharacterCommon:(unsigned short)arg1 ;
-(void)setUserLocale:(NSLocale *)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg1 ;
-(void)setCommonCharacters:(NSCharacterSet *)arg1 ;
-(id)_loadLangMaps;
-(void)setLangMaps:(NSArray *)arg1 ;
-(void)setDialectForSystemLanguage:(AXDialectMap *)arg1 ;
-(void)setDialectForCurrentLocale:(AXDialectMap *)arg1 ;
-(NSArray *)langMaps;
-(AXDialectMap *)dialectForCurrentLocale;
-(void)updateCachedDialects;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)_preferredLanguageIDsFromUserSelectedKeyboards;
-(NSCharacterSet *)commonCharacters;
-(id)characterSetForRanges:(id)arg1 ;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2 ;
@end

