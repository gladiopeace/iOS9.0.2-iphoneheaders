/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNiOSABConversions : NSObject
+(/*^block*/id)personToContactTransformWithKeysToFetch:(id)arg1 ;
+(id)contactMatchInfoFromABMatchMetadataDictionary:(id)arg1 ;
+(id)containersFromABSources:(CFArrayRef)arg1 remote:(char)arg2 includeDisabledSources:(char)arg3 ;
+(id)accountsFromABAccounts:(CFArrayRef)arg1 ;
+(id)groupsFromABGroups:(CFArrayRef)arg1 ;
+(id)contactFromABPerson:(void*)arg1 keysToConvert:(id)arg2 ;
+(id)contactFromABPerson:(void*)arg1 uniqueKeysToConvert:(id)arg2 ;
+(id)contactIdentifierFromABPerson:(void*)arg1 ;
+(void)updateContact:(id)arg1 fromABPerson:(void*)arg2 keysToConvert:(id)arg3 availableKeys:(id*)arg4 ;
+(id)groupFromABGroup:(void*)arg1 ;
+(id)arrayByMappingTransform:(/*^block*/id)arg1 onCFArray:(CFArrayRef)arg2 ;
+(id)containerFromABSource:(void*)arg1 remote:(char)arg2 includeDisabledSources:(char)arg3 ;
+(id)accountFromABAccount:(void*)arg1 ;
+(id)contactPropertiesByABPropertyID;
@end

