/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, STSiriContext, NSArray, NSDictionary;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying> {

	NSString* _applicationName;
	NSString* _applicationVersion;
	STSiriContext* _context;
	NSString* _fieldLabel;
	NSString* _fieldIdentifier;
	NSString* _interactionIdentifier;
	NSString* _requestIdentifier;
	int _keyboardType;
	NSString* _prefixText;
	NSString* _postfixText;
	NSString* _selectedText;
	int _returnKeyType;
	int _transcriptionMode;
	NSArray* _inlineItemList;
	NSString* _languageCodeOverride;
	int _voiceSearchTypeOptions;
	NSDictionary* _voiceSearchHeaderFields;
	NSDictionary* _voiceSearchQueryParameters;
	NSDictionary* _voiceTriggerEventInfo;

}

@property (nonatomic,copy) NSString * applicationName;                             //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                          //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,retain) STSiriContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * fieldLabel;                                  //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (nonatomic,copy) NSString * fieldIdentifier;                             //@synthesize fieldIdentifier=_fieldIdentifier - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;                       //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) int keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * prefixText;                                  //@synthesize prefixText=_prefixText - In the implementation block
@property (nonatomic,copy) NSString * postfixText;                                 //@synthesize postfixText=_postfixText - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                                //@synthesize selectedText=_selectedText - In the implementation block
@property (assign,nonatomic) int returnKeyType;                                    //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) int transcriptionMode;                                //@synthesize transcriptionMode=_transcriptionMode - In the implementation block
@property (nonatomic,copy) NSArray * inlineItemList;                               //@synthesize inlineItemList=_inlineItemList - In the implementation block
@property (nonatomic,copy) NSString * languageCodeOverride;                        //@synthesize languageCodeOverride=_languageCodeOverride - In the implementation block
@property (assign,nonatomic) int voiceSearchTypeOptions;                           //@synthesize voiceSearchTypeOptions=_voiceSearchTypeOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * voiceSearchHeaderFields;                 //@synthesize voiceSearchHeaderFields=_voiceSearchHeaderFields - In the implementation block
@property (nonatomic,copy) NSDictionary * voiceSearchQueryParameters;              //@synthesize voiceSearchQueryParameters=_voiceSearchQueryParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * voiceTriggerEventInfo;                   //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(STSiriContext *)context;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1 ;
-(NSString *)selectedText;
-(void)setContext:(STSiriContext *)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)prefixText;
-(void)setFieldLabel:(NSString *)arg1 ;
-(void)setFieldIdentifier:(NSString *)arg1 ;
-(void)setPrefixText:(NSString *)arg1 ;
-(void)setPostfixText:(NSString *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(NSString *)postfixText;
-(NSString *)fieldIdentifier;
-(NSString *)interactionIdentifier;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(NSString *)languageCodeOverride;
-(void)setLanguageCodeOverride:(NSString *)arg1 ;
-(int)transcriptionMode;
-(void)setTranscriptionMode:(int)arg1 ;
-(int)voiceSearchTypeOptions;
-(void)setVoiceSearchTypeOptions:(int)arg1 ;
-(NSDictionary *)voiceSearchHeaderFields;
-(void)setVoiceSearchHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)voiceSearchQueryParameters;
-(void)setVoiceSearchQueryParameters:(NSDictionary *)arg1 ;
-(id)dictationOptionsWithoutTextContext;
-(NSString *)fieldLabel;
-(NSString *)applicationVersion;
-(NSString *)applicationName;
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(NSArray *)inlineItemList;
-(void)setInlineItemList:(NSArray *)arg1 ;
-(NSString *)requestIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
@end

