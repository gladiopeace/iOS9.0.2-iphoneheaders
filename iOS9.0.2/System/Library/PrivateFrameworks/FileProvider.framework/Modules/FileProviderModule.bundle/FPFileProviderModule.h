/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Modules/FileProviderModule.bundle/FileProviderModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsFileProvider/FPModule.h>

@class NSString;

@interface FPFileProviderModule : NSObject <FPModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerPrefixURL;
-(void)FPBookmarkableStringFromDocumentURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)FPDocumentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)FPExtendBookmarkForDocumentURL:(id)arg1 forBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

