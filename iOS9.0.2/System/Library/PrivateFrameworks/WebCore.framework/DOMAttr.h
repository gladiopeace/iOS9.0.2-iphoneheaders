/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMNode.h>

@class NSString, DOMElement, DOMCSSStyleDeclaration;

@interface DOMAttr : DOMNode

@property (copy,readonly) NSString * name; 
@property (readonly) char specified; 
@property (copy) NSString * value; 
@property (readonly) DOMElement * ownerElement; 
@property (readonly) DOMCSSStyleDeclaration * style; 
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(DOMCSSStyleDeclaration *)style;
-(char)specified;
-(DOMElement *)ownerElement;
-(char)isId;
@end

