/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SALocation.h>

@class NSString, NSNumber, SAPersonAttribute;

@interface SAFmfLocation : SALocation {

	NSString* _emailAddress;

}

@property (nonatomic,retain) NSNumber * distance; 
@property (nonatomic,copy) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,retain) NSNumber * locationDate; 
+(id)location;
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)distance;
-(void)setDistance:(NSNumber *)arg1 ;
-(SAPersonAttribute *)friend;
-(void)setFriend:(SAPersonAttribute *)arg1 ;
-(NSNumber *)locationDate;
-(void)setLocationDate:(NSNumber *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

