/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSString;

@interface ICArchiveReader : NSObject {

	archiveRef _archive;
	NSString* _sourcePath;
	NSString* _destinationPath;

}

@property (nonatomic,retain) NSString * sourcePath;                   //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;              //@synthesize destinationPath=_destinationPath - In the implementation block
-(void)setSourcePath:(NSString *)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(NSString *)destinationPath;
-(NSString *)sourcePath;
-(char)unarchiveSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
-(char)moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2 resultURLs:(id*)arg3 error:(id*)arg4 ;
-(id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(char)unarchiveResultURLs:(id*)arg1 error:(id*)arg2 ;
@end

