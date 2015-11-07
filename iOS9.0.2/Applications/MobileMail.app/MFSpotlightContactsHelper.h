/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNContactStore, NSMutableDictionary, NSString;

@interface MFSpotlightContactsHelper : NSObject {

	CNContactStore* _contactStore;
	NSMutableDictionary* _addressToResult;
	NSMutableDictionary* _nameToResult;
	NSMutableDictionary* _normalizedToResult;
	unsigned _inputStringIsAnEmailAddress : 1;
	NSString* _inputString;

}

@property (nonatomic,copy) NSString * inputString;              //@synthesize inputString=_inputString - In the implementation block
+(id)descriptorForSpotlightContacts;
+(id)emailAttributes;
+(id)fullnameAttributes;
+(id)equivalentEmailsForEmail:(id)arg1 ;
-(id)normalizedValue:(id)arg1 forAttribute:(id)arg2 withNames:(id)arg3 addresses:(id)arg4 attributeValues:(id*)arg5 contact:(id*)arg6 ;
-(id)normalizedValue:(id)arg1 forAttribute:(id)arg2 otherAttributes:(id)arg3 attributeValues:(id*)arg4 contact:(id*)arg5 ;
-(id)spotlightContactMatchingAddress:(id)arg1 ;
-(id)spotlightContactMatchingName:(id)arg1 address:(id)arg2 shouldUseAddressForSearch:(char*)arg3 ;
-(id)contactWithAddress:(id)arg1 ;
-(id)contactWithName:(id)arg1 ;
-(id)_normalizedValueForValue:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)inputString;
-(void)setInputString:(NSString *)arg1 ;
@end

