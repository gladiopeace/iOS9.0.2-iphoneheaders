/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CN : NSObject
+(/*^block*/id)phoneNumberToStringTransform;
+(/*^block*/id)postalAddressToDictionaryTransform;
+(/*^block*/id)socialProfileToDictionaryTransform;
+(/*^block*/id)instantMessageAddressToDictionaryTransform;
+(/*^block*/id)relatedContactToStringTransform;
+(/*^block*/id)socialProfileFromDictionaryTransform;
+(/*^block*/id)instantMessageAddressFromDictionaryTransform;
+(/*^block*/id)postalAddressFromDictionaryTransform;
+(/*^block*/id)phoneNumberFromStringTransform;
+(/*^block*/id)relatedContactFromStringTransform;
+(id)containerIdentifierDescription;
+(id)containeriOSLegacyIdentifierDescription;
+(id)containerNameDescription;
+(id)containerTypeDescription;
+(id)containerEnabledDescription;
+(id)allContainerProperties;
+(id)writableContainerProperties;
+(id)unifyContacts:(id)arg1 includingMainStoreContacts:(char)arg2 ;
+(id)unifyMultivalues:(id)arg1 forProperty:(id)arg2 ;
+(char)areValidGregorianDayComponents:(id)arg1 error:(id*)arg2 ;
+(/*^block*/id)dateComponentsFromDictionaryTransform;
+(char)areValidNonGregorianDayComponents:(id)arg1 error:(id*)arg2 ;
+(/*^block*/id)socialProfileToFoundationProfileTransform;
+(id)writableContactProperties;
+(char)areValidKeyPaths:(id)arg1 forObject:(id)arg2 expectedClasses:(id)arg3 allowNil:(id)arg4 error:(id*)arg5 ;
+(unsigned)indexOfPreferredContactsForUnifying:(id)arg1 includingMainStoreContacts:(char)arg2 ;
+(id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2 ;
+(id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3 ;
+(unsigned)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3 ;
+(void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2 ;
+(id)unifyContactMatchInfos:(id)arg1 linkedContacts:(id)arg2 ;
+(id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2 ;
+(id)imageDataDescription;
+(id)cropRectDescription;
+(id)thumbnailImageDataDescription;
+(id)fullscreenImageDataDescription;
+(id)writableSingleValueContactProperties;
+(id)namePrefixDescription;
+(id)givenNameDescription;
+(id)middleNameDescription;
+(id)familyNameDescription;
+(id)nameSuffixDescription;
+(id)preferredForNameDescription;
+(id)preferredForImageDescription;
+(id)writableMultiValueContactProperties;
+(id)contactPropertiesByKey;
+(Class)defaultDataMapperClass;
+(char)isEmptyNameContact:(id)arg1 phonetic:(char)arg2 includingPrefixAndSuffix:(char)arg3 ;
+(id)localizedPhoneticNameDelimiterForContact:(id)arg1 ;
+(id)localizedNameDelimiterForContact:(id)arg1 ;
+(id)orderForContactPhoneticName:(id)arg1 ;
+(id)orderForContactName:(id)arg1 ;
+(id)organizationNameDescription;
+(id)nicknameDescription;
+(id)phoneticGivenNameDescription;
+(id)phoneticFamilyNameDescription;
+(id)phoneticMiddleNameDescription;
+(id)allContactProperties;
+(id)writableAlwaysFetchedProperties;
+(/*^block*/id)nullTransform;
+(id)alwaysFetchedProperties;
+(id)allContactPropertyKeys;
+(id)identifierDescription;
+(id)requiredPropertiesForNameScriptDetection;
+(id)iOSLegacyIdentifierDescription;
+(id)previousFamilyNameDescription;
+(id)pronunciationGivenNameDescription;
+(id)pronunciationFamilyNameDescription;
+(id)sectionForSortingByFamilyNameDescription;
+(id)sectionForSortingByGivenNameDescription;
+(id)departmentDescription;
+(id)jobTitleDescription;
+(id)birthdayDescription;
+(id)nonGregorianBirthdayDescription;
+(id)noteDescription;
+(id)imageDataAvailableDescription;
+(id)linkIdentifierDescription;
+(id)contactTypeDescription;
+(id)phoneNumbersDescription;
+(id)emailAddressesDescription;
+(id)urlAddressesDescription;
+(id)datesDescription;
+(id)instantMessagAddressesDescription;
+(id)contactRelationsDescription;
+(id)socialProfilesDescription;
+(id)postalAddressesDescription;
+(id)phonemeDataDescription;
+(id)textAlertDescription;
+(id)callAlertDescription;
+(id)mapsDataDescription;
+(id)calendarURIsDescription;
+(id)allImageDataProperties;
+(id)allImageDataPropertyKeys;
+(id)allNameComponentRelatedProperties;
+(id)singleValueContactProperties;
+(id)multiValueContactProperties;
+(id)sortingGivenNameDescription;
+(id)sortingFamilyNameDescription;
+(id)creationDateDescription;
+(/*^block*/id)dateComponentsToDictionaryTransform;
+(char)areValidDayComponents:(id)arg1 error:(id*)arg2 ;
+(id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3 ;
+(id)requiredPropertiesForPhoneticNameScriptDetection;
+(id)orderForContactName:(id)arg1 phonetic:(char)arg2 ;
+(char)hasContactChineseJapaneseKoreanPhoneticName:(id)arg1 ;
+(char)hasContactChineseJapaneseKoreanName:(id)arg1 ;
+(id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 ;
@end

