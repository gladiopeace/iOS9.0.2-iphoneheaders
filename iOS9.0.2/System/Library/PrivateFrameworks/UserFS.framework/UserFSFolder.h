/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UserFS/UserFSItem.h>

@interface UserFSFolder : UserFSItem
-(char)isDirectory;
-(char)enumerateChildrenAndReturnError:(id*)arg1 callback:(/*^block*/id)arg2 ;
-(char)deleteChildNamed:(id)arg1 error:(id*)arg2 ;
-(id)childNamed:(id)arg1 error:(id*)arg2 ;
-(id)_pathForChildNamed:(id)arg1 ;
@end

