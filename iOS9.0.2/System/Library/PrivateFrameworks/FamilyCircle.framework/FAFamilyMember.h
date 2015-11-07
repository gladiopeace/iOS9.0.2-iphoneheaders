/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/familycircled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSNumber, NSDate;

@interface FAFamilyMember : NSObject <NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) char isMe; 
@property (nonatomic,copy,readonly) NSString * appleID; 
@property (nonatomic,copy,readonly) NSNumber * dsid; 
@property (nonatomic,copy,readonly) NSString * hashedDSID; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,readonly) unsigned age; 
@property (nonatomic,copy,readonly) NSString * memberTypeDisplayString; 
@property (nonatomic,copy,readonly) NSString * memberTypeString; 
@property (nonatomic,copy,readonly) NSDate * joinedDate; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * inviteEmail; 
@property (nonatomic,readonly) char isChildAccount; 
@property (nonatomic,readonly) char hasParentalControlsEnabled; 
@property (nonatomic,readonly) char hasAskToBuyEnabled; 
@property (nonatomic,readonly) char isParent; 
@property (nonatomic,readonly) char hasLinkediTunesAccount; 
@property (nonatomic,readonly) NSNumber * iTunesAccountDSID; 
@property (nonatomic,copy,readonly) NSString * iTunesAccountUsername; 
@property (nonatomic,copy,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionary;
-(char)isChildAccount;
-(NSString *)hashedDSID;
-(NSString *)memberTypeString;
-(char)hasParentalControlsEnabled;
-(char)isParent;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned)arg1 fallbackToLocalAddressBook:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)memberTypeDisplayString;
-(NSDate *)joinedDate;
-(NSString *)inviteEmail;
-(char)hasAskToBuyEnabled;
-(NSString *)iTunesAccountUsername;
-(char)hasLinkediTunesAccount;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(char)isMe;
-(NSString *)statusString;
-(NSNumber *)dsid;
-(NSNumber *)iTunesAccountDSID;
-(NSString *)appleID;
-(unsigned)age;
@end

