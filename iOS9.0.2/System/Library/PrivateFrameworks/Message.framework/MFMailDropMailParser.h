/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFMailDropMailParser : NSObject
+(void)parseURL:(id)arg1 intoMetadata:(id)arg2 ;
+(id)parseExpiration:(double)arg1 ;
+(char)_domainIsWhitelisted:(id)arg1 ;
+(void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2 ;
+(void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2 ;
+(id)_parseURLQuery:(id)arg1 ;
+(id)parseHeaderValue:(id)arg1 forField:(id)arg2 ;
@end

