/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkRequestHandler.h>

@class NSFileManager, NSString;

@interface ATRemoteFileManagerLinkHandler : NSObject <ATMessageLinkRequestHandler> {

	NSFileManager* _fm;
	NSString* _rootPath;

}

@property (nonatomic,copy) NSString * rootPath;                     //@synthesize rootPath=_rootPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_path:(id)arg1 ;
-(id)_createDirectory:(id)arg1 ;
-(id)_directoryContents:(id)arg1 ;
-(id)_usage:(id)arg1 ;
-(id)_uploadFile:(id)arg1 ;
-(id)_downloadFile:(id)arg1 ;
-(id)_moveItems:(id)arg1 ;
-(id)_removeItems:(id)arg1 ;
-(id)_copyItems:(id)arg1 ;
-(id)_freeSpace:(id)arg1 ;
-(id)_progress:(id)arg1 ;
-(void)setRootPath:(NSString *)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)initWithRootPath:(id)arg1 ;
-(NSString *)rootPath;
@end

