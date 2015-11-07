/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKOutputStream.h>

@class NSString;

@interface BKFileOutputStream : NSObject <BKOutputStream> {

	_sFILE* mFile;
	NSString* mPath;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)path;
-(long long)offset;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(char)canCreateInputStream;
-(char)canSeek;
-(id)closeLocalStream;
-(id)inputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
@end

