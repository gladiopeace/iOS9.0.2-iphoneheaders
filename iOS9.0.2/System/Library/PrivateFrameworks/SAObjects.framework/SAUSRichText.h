/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSNumber;

@interface SAUSRichText : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,copy) NSString * formattedTextDelimiter; 
@property (nonatomic,copy) NSArray * markupList; 
@property (nonatomic,copy) NSArray * moreGlyphs; 
@property (nonatomic,copy) NSNumber * starRating; 
@property (nonatomic,copy) NSNumber * textMaxlines; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)richText;
+(id)richTextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)formattedTextDelimiter;
-(NSString *)contentAdvisory;
-(NSNumber *)starRating;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setFormattedTextDelimiter:(NSString *)arg1 ;
-(NSArray *)markupList;
-(void)setMarkupList:(NSArray *)arg1 ;
-(void)setMoreGlyphs:(NSArray *)arg1 ;
-(void)setStarRating:(NSNumber *)arg1 ;
-(NSNumber *)textMaxlines;
-(void)setTextMaxlines:(NSNumber *)arg1 ;
-(NSArray *)moreGlyphs;
@end

