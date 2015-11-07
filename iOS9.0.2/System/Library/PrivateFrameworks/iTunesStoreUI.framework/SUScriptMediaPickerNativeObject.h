/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewControllerNativeObject.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>

@class NSString;

@interface SUScriptMediaPickerNativeObject : SUScriptViewControllerNativeObject <MPMediaPickerControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
@end

