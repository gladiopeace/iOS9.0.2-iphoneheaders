/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUITemplateFont : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * size; 
@property (nonatomic,copy) NSString * textStyle; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)font;
+(id)fontWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(NSString *)textStyle;
-(void)setTextStyle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

