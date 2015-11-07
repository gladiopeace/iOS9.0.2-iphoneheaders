/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAliasItem, BRCDocumentItem;

@interface BRCDirectoryItem : BRCLocalItem

@property (nonatomic,readonly) BRCAliasItem * asAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
-(char)isDirectory;
-(char)evictWithGroup:(id)arg1 error:(id*)arg2 ;
-(char)changedAtRelativePath:(id)arg1 scanPackage:(char)arg2 ;
-(char)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(char)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(char)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(char)arg3 ;
-(char)updateFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(BRCDirectoryItem *)asDirectory;
-(void)markLostDirectoryAsAlmostDead;
-(char)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(void)startDownloadWithOptions:(unsigned)arg1 group:(id)arg2 ;
-(float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(char)hasDeadChildren;
-(unsigned)markChildrenLost;
-(char)hasLostChildren;
-(void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1 ;
-(char)hasLiveChildren;
@end

