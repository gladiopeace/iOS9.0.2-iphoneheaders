/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBFileHandle.h>

@class MBFileHandle;

@interface MBFileHandleProxy : MBFileHandle {

	MBFileHandle* _fileHandle;

}

@property (nonatomic,readonly) MBFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(id)encryptionKeyWithError:(id*)arg1 ;
-(char)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)fd;
-(void)dealloc;
-(id)path;
-(char)closeWithError:(id*)arg1 ;
-(id)initWithFileHandle:(id)arg1 ;
-(MBFileHandle *)fileHandle;
@end

