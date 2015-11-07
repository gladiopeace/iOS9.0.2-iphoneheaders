/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VoiceDial/VoiceDial-Structs.h>
@class NSString, NSMutableSet, NSMutableDictionary;

@interface VoiceDialResultHandlerContext : NSObject {

	char _allNamesMatchedType;
	char _allowFirstFT;
	void* _resultPerson;
	CFStringRef _contactInfo;
	NSString* _nameToMatch;
	NSMutableSet* _compositeNames;
	NSMutableSet* _spokenCompositeNames;
	NSMutableSet* _topLevelNonNickNames;
	NSMutableSet* _localizedPhoneLabels;
	NSMutableSet* _localizedEmailLabels;
	NSMutableSet* _unlocalizedPhoneLabels;
	NSMutableSet* _unlocalizedEmailLabels;
	NSMutableDictionary* _lastNamesByFirstNames;
	NSMutableDictionary* _firstNamesByLastNames;
	NSMutableDictionary* _phoneticNamesByName;
	int _nicknameMatchCount;
	int _resultStatus;
	int _requiredNameMatchType;
	int _lastNameMatchType;
	int _matchedLabelType;

}

@property (assign) void* resultPerson;                                       //@synthesize resultPerson=_resultPerson - In the implementation block
@property (assign) CFStringRef contactInfo;                                  //@synthesize contactInfo=_contactInfo - In the implementation block
@property (retain) NSString * nameToMatch;                                   //@synthesize nameToMatch=_nameToMatch - In the implementation block
@property (retain) NSMutableSet * compositeNames;                            //@synthesize compositeNames=_compositeNames - In the implementation block
@property (retain) NSMutableSet * spokenCompositeNames;                      //@synthesize spokenCompositeNames=_spokenCompositeNames - In the implementation block
@property (retain) NSMutableSet * topLevelNonNickNames;                      //@synthesize topLevelNonNickNames=_topLevelNonNickNames - In the implementation block
@property (retain) NSMutableSet * localizedPhoneLabels;                      //@synthesize localizedPhoneLabels=_localizedPhoneLabels - In the implementation block
@property (retain) NSMutableSet * localizedEmailLabels;                      //@synthesize localizedEmailLabels=_localizedEmailLabels - In the implementation block
@property (retain) NSMutableSet * unlocalizedPhoneLabels;                    //@synthesize unlocalizedPhoneLabels=_unlocalizedPhoneLabels - In the implementation block
@property (retain) NSMutableSet * unlocalizedEmailLabels;                    //@synthesize unlocalizedEmailLabels=_unlocalizedEmailLabels - In the implementation block
@property (retain) NSMutableDictionary * lastNamesByFirstNames;              //@synthesize lastNamesByFirstNames=_lastNamesByFirstNames - In the implementation block
@property (retain) NSMutableDictionary * firstNamesByLastNames;              //@synthesize firstNamesByLastNames=_firstNamesByLastNames - In the implementation block
@property (retain) NSMutableDictionary * phoneticNamesByName;                //@synthesize phoneticNamesByName=_phoneticNamesByName - In the implementation block
@property (assign) int nicknameMatchCount;                                   //@synthesize nicknameMatchCount=_nicknameMatchCount - In the implementation block
@property (assign) int resultStatus;                                         //@synthesize resultStatus=_resultStatus - In the implementation block
@property (assign) int requiredNameMatchType;                                //@synthesize requiredNameMatchType=_requiredNameMatchType - In the implementation block
@property (assign) int lastNameMatchType;                                    //@synthesize lastNameMatchType=_lastNameMatchType - In the implementation block
@property (assign) char allNamesMatchedType;                                 //@synthesize allNamesMatchedType=_allNamesMatchedType - In the implementation block
@property (assign) int matchedLabelType;                                     //@synthesize matchedLabelType=_matchedLabelType - In the implementation block
@property (assign) char allowFirstFT;                                        //@synthesize allowFirstFT=_allowFirstFT - In the implementation block
-(void)dealloc;
-(id)init;
-(void*)resultPerson;
-(void)setResultPerson:(void*)arg1 ;
-(CFStringRef)contactInfo;
-(void)setContactInfo:(CFStringRef)arg1 ;
-(NSString *)nameToMatch;
-(void)setNameToMatch:(NSString *)arg1 ;
-(NSMutableSet *)compositeNames;
-(void)setCompositeNames:(NSMutableSet *)arg1 ;
-(NSMutableSet *)spokenCompositeNames;
-(void)setSpokenCompositeNames:(NSMutableSet *)arg1 ;
-(NSMutableSet *)topLevelNonNickNames;
-(void)setTopLevelNonNickNames:(NSMutableSet *)arg1 ;
-(NSMutableSet *)localizedPhoneLabels;
-(void)setLocalizedPhoneLabels:(NSMutableSet *)arg1 ;
-(NSMutableSet *)localizedEmailLabels;
-(void)setLocalizedEmailLabels:(NSMutableSet *)arg1 ;
-(NSMutableSet *)unlocalizedPhoneLabels;
-(void)setUnlocalizedPhoneLabels:(NSMutableSet *)arg1 ;
-(NSMutableSet *)unlocalizedEmailLabels;
-(void)setUnlocalizedEmailLabels:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)lastNamesByFirstNames;
-(void)setLastNamesByFirstNames:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)firstNamesByLastNames;
-(void)setFirstNamesByLastNames:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)phoneticNamesByName;
-(void)setPhoneticNamesByName:(NSMutableDictionary *)arg1 ;
-(int)nicknameMatchCount;
-(void)setNicknameMatchCount:(int)arg1 ;
-(int)resultStatus;
-(void)setResultStatus:(int)arg1 ;
-(int)requiredNameMatchType;
-(void)setRequiredNameMatchType:(int)arg1 ;
-(int)lastNameMatchType;
-(void)setLastNameMatchType:(int)arg1 ;
-(char)allNamesMatchedType;
-(void)setAllNamesMatchedType:(char)arg1 ;
-(int)matchedLabelType;
-(void)setMatchedLabelType:(int)arg1 ;
-(char)allowFirstFT;
-(void)setAllowFirstFT:(char)arg1 ;
@end

