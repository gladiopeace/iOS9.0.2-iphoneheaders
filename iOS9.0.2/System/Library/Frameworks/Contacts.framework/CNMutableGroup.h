/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/CNGroup.h>

@class NSString, CNGroup;

@interface CNMutableGroup : CNGroup

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) CNGroup * snapshot; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(id)freezeWithSelfAsSnapshot;
-(id)freeze;
-(id)copy;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSnapshot:(CNGroup *)arg1 ;
@end

