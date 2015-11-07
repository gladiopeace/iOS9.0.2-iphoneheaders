/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptMediaItemCollection;

@interface SUScriptMediaPickerEvent : SUScriptObject {

	SUScriptMediaItemCollection* _collection;

}

@property (readonly) SUScriptMediaItemCollection * collection; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)initWithCollection:(id)arg1 ;
-(SUScriptMediaItemCollection *)collection;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
@end

