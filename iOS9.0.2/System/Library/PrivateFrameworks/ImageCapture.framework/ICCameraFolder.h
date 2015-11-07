/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraItem.h>

@class NSArray;

@interface ICCameraFolder : ICCameraItem {

	void* _folderProperties;
	int _filesLock;
	int _foldersLock;

}

@property (readonly) NSArray * contents; 
-(void)addFile:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSArray *)contents;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGImageRef)thumbnail;
-(void)deleteItem:(id)arg1 ;
-(void)addFolder:(id)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)lockFiles;
-(void)unlockFiles;
-(void)lockFolders;
-(void)unlockFolders;
-(void)deleteFile:(id)arg1 ;
-(id)folders;
-(void)deleteFolder:(id)arg1 ;
-(void)finalize;
-(id)metadata;
-(void)requestMetadata;
-(void)requestThumbnail;
-(char)hasThumbnail;
-(id)files;
@end

