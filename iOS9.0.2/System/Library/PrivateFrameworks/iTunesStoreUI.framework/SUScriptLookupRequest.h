/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSLookupRequest, NSString;

@interface SUScriptLookupRequest : SUScriptObject {

	SSLookupRequest* _request;

}

@property (retain) id authenticatesIfNeeded; 
@property (copy) NSString * keyProfile; 
@property (assign) int localizationStyle; 
@property (readonly) int localizationStyleDevice; 
@property (readonly) int localizationStyleServer; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setLocalizationStyle:(int)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)attributeKeys;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setKeyProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
-(int)localizationStyle;
-(void)startWithLookupFunction:(id)arg1 ;
-(id)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(id)arg1 ;
-(int)localizationStyleDevice;
-(int)localizationStyleServer;
@end

