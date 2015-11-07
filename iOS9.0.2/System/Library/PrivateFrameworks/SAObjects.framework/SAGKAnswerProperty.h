/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, NSString, SAUIAppPunchOut, NSNumber;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValueAnnotation; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * valueAnnotation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAClientBoundCommand>)command;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setSelected:(NSNumber *)arg1 ;
-(NSNumber *)selected;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
-(NSString *)valueAnnotation;
-(void)setValueAnnotation:(NSString *)arg1 ;
-(SAUIDecoratedText *)decoratedValueAnnotation;
-(void)setDecoratedValueAnnotation:(SAUIDecoratedText *)arg1 ;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
@end

