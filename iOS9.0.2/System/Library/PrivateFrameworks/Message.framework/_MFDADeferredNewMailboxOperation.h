/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <libobjc.A.dylib/MFDADeferredFolderChangeOperation.h>

@class NSString;

@interface _MFDADeferredNewMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {

	NSString* _displayName;
	NSString* _parentFolderID;
	NSString* _temporaryFolderID;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)folderChangeResult;
-(void)applyToFolderMap:(id)arg1 ;
-(char)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithDisplayName:(id)arg1 parentFolderID:(id)arg2 temporaryFolderID:(id)arg3 ;
@end

