/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IPNamePreferenceInfoProvider.h>

@class NSString;

@interface IPiOSABNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domain;
+(id)nativeKeyNameToCanonicalKeyName;
+(id)canonicalKeyToValueIdentifierToNumericValueMap;
+(id)canonicalNameToNativeKeyName;
+(id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1 ;
+(id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1 ;
@end

