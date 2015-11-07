/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBIconStateArchiver : NSObject
+(id)modernizeRootArchive:(id)arg1 ;
+(id)leafIdentifiersFromArchive:(id)arg1 ;
+(id)unarchive:(id)arg1 withIconSource:(id)arg2 ;
+(id)indexPathForLeafIdentifier:(id)arg1 inArchive:(id)arg2 ;
+(id)archive:(id)arg1 ;
+(id)archiveRootFolder:(id)arg1 ;
+(id)iTunesRepresentationFromRootArchive:(id)arg1 preApex:(char)arg2 pending:(char)arg3 iconSource:(id)arg4 ;
+(id)rootArchiveFromITunesRepresentation:(id)arg1 ;
+(id)_representationForNode:(id)arg1 ;
+(id)_nodeFromRepresentation:(id)arg1 context:(id)arg2 ;
+(id)_modernIconListsForLists:(id)arg1 allowFolders:(char)arg2 ;
+(id)_modernIconListForList:(id)arg1 allowFolders:(char)arg2 ;
+(id)_iTunesIconListForList:(id)arg1 preApex:(char)arg2 pending:(char)arg3 iconSource:(id)arg4 ;
+(id)_iTunesIconListsForLists:(id)arg1 preApex:(char)arg2 pending:(char)arg3 iconSource:(id)arg4 ;
+(id)_folderFromRepresentation:(id)arg1 withContext:(id)arg2 ;
+(id)_newFolderIconForFolder:(id)arg1 ;
+(id)_representationForFolder:(id)arg1 ;
+(id)_representationForIcon:(id)arg1 ;
+(id)_iconFromRepresentation:(id)arg1 withContext:(id)arg2 ;
+(Class)_folderClassForFolderType:(id)arg1 context:(id)arg2 ;
+(id)_listFromRepresentation:(id)arg1 withMaxIconCount:(unsigned)arg2 context:(id)arg3 overflow:(id)arg4 ;
+(id)_folderTypeForFolder:(id)arg1 ;
+(id)_representationForList:(id)arg1 ;
+(id)_migrateLeafIdentifierIfNecessary:(id)arg1 ;
+(id)_modernIconCellForCell:(id)arg1 allowFolders:(char)arg2 ;
+(id)_iTunesIconCellForCell:(id)arg1 preApex:(char)arg2 pending:(char)arg3 iconSource:(id)arg4 ;
+(id)_iTunesDictionaryForLeafIcon:(id)arg1 ;
+(id)_iTunesDictionaryForDownloadingIcon:(id)arg1 ;
+(id)_iTunesDictionaryForLeafIdentifier:(id)arg1 ;
@end

