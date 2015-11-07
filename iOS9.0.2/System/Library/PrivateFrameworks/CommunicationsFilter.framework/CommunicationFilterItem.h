/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommunicationsFilter/CommunicationsFilter-Structs.h>
@class NSString;

@interface CommunicationFilterItem : NSObject {

	CFPhoneNumberRef _phoneNumber;
	NSString* _emailAddress;

}

@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * unformattedID; 
-(id)initWithPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(void)dealloc;
-(id)description;
-(CFPhoneNumberRef)phoneNumber;
-(id)dictionaryRepresentation;
-(char)matchesFilterItem:(id)arg1 ;
-(id)_dictionaryRepresentationWithRedaction;
-(char)_acceptItemType:(id)arg1 ;
-(char)_acceptVersion:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)unformattedID;
-(NSString *)emailAddress;
-(char)isPhoneNumber;
@end

