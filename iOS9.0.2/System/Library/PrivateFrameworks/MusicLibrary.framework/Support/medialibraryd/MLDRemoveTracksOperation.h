/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <medialibraryd/MLDDatabaseOperation.h>

@interface MLDRemoveTracksOperation : MLDDatabaseOperation
-(char)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(char)_removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3 ;
-(char)_removeSource:(int)arg1 usingTransaction:(id)arg2 ;
-(unsigned)type;
-(void)main;
@end

