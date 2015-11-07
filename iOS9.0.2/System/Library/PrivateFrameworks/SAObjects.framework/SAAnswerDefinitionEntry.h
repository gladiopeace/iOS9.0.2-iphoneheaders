/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * definition; 
@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSArray * variations; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionEntry;
+(id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)definition;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)examples;
-(void)setExamples:(NSArray *)arg1 ;
-(void)setDefinition:(NSString *)arg1 ;
-(NSArray *)variations;
-(void)setVariations:(NSArray *)arg1 ;
@end

