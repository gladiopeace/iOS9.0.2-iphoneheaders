/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileManagerDelegate.h>

@class NSURL, NSString;

@interface NADLibraryPathMigrator : NSObject <NSFileManagerDelegate> {

	NSURL* _sourceURL;
	NSURL* _destinationURL;

}

@property (nonatomic,readonly) NSURL * sourceURL;                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4 ;
-(NSURL *)destinationURL;
-(NSURL *)sourceURL;
-(void)migrate;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
@end

