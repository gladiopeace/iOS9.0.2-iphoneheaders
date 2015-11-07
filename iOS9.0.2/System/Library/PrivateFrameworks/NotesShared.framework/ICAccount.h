/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/ICNoteContainer.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class ICFolder, ICAccountProxy, NSString, NSSet;

@interface ICAccount : ICNoteContainer <ICCloudObject> {

	char _didAddObservers;
	char _didAddTrashObservers;
	ICFolder* _defaultFolder;
	ICFolder* _trashFolder;
	ICAccountProxy* _accountProxy;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,retain) NSSet * folders; 
@property (nonatomic,retain) NSSet * notes; 
@property (nonatomic,retain) NSSet * serverChangeTokens; 
@property (nonatomic,retain) NSSet * deviceMigrationStates; 
@property (nonatomic,retain) NSSet * legacyTombstones; 
@property (assign,nonatomic) int accountType; 
@property (assign,nonatomic) char didChooseToMigrate; 
@property (assign,nonatomic) char didFinishMigration; 
@property (assign,nonatomic) char didMigrateOnMac; 
@property (nonatomic,retain) NSString * userRecordName; 
@property (nonatomic,retain) ICAccountProxy * accountProxy;              //@synthesize accountProxy=_accountProxy - In the implementation block
@property (assign,nonatomic) char didAddObservers;                       //@synthesize didAddObservers=_didAddObservers - In the implementation block
@property (assign,nonatomic) char didAddTrashObservers;                  //@synthesize didAddTrashObservers=_didAddTrashObservers - In the implementation block
@property (nonatomic,retain) NSSet * ownerInverse; 
@property (nonatomic,retain) ICFolder * defaultFolder;                   //@synthesize defaultFolder=_defaultFolder - In the implementation block
@property (nonatomic,retain) ICFolder * trashFolder;                     //@synthesize trashFolder=_trashFolder - In the implementation block
+(id)recordType;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3 ;
+(id)keyPathsForValuesAffectingLocalizedName;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(int)compare:(id)arg1 ;
-(NSString *)localizedName;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)recordName;
-(id)recordZoneID;
-(id)loggingIdentifier;
-(id)loggingDescriptionValues;
-(char)shouldBeDeletedFromLocalDatabase;
-(id)folderWithIdentifier:(id)arg1 ;
-(id)visibleNotes;
-(id)predicateForVisibleAttachments;
-(void)createStandardFolders;
-(void)removeAllObserversIfNecessary;
-(char)hasAnyCustomFolders;
-(unsigned)visibleNotesIncludingTrashCount;
-(id)predicateForVisibleNotes;
-(id)titleForNavigationBar;
-(ICFolder *)defaultFolder;
-(ICFolder *)trashFolder;
-(id)visibleFolders;
-(unsigned)visibleNotesCount;
-(id)titleForTableViewCell;
-(char)supportsEditingNotes;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)visibleNoteContainerChildren;
-(char)supportsLegacyTombstones;
-(id)visibleFoldersWithParent:(id)arg1 ;
-(id)reservedAccountFolderTitles;
-(void)setMarkedForDeletion:(char)arg1 ;
-(id)threadUnsafeNewlyCreatedRecord;
-(char)needsToBeFetchedFromCloud;
-(void)mergeDataFromRecord:(id)arg1 ;
-(char)needsToBePushedToCloud;
-(char)needsToBeDeletedFromCloud;
-(char)isInICloudAccount;
-(char)didAddTrashObservers;
-(void)setDidAddTrashObservers:(char)arg1 ;
-(void)noteWillBeDeletedOrUndeleted:(id)arg1 ;
-(void)removeTrashObserversIfNecessary;
-(id)defaultFolderIdentifier;
-(id)trashFolderIdentifier;
-(void)addTrashObserversIfNecessary;
-(id)standardFolderIdentifierWithPrefix:(id)arg1 ;
-(id)allItemsFolderLocalizedTitle;
-(ICAccountProxy *)accountProxy;
-(id)predicateForVisibleNotesIncludingTrash;
-(void)updateAccountNameForAccountListSorting;
-(char)visibleRootFoldersContainFolderWithTitle:(id)arg1 ;
-(id)visibleNoteContainers;
-(id)allChildObjects;
-(char)didAddObservers;
-(void)setDidAddObservers:(char)arg1 ;
-(void)setDefaultFolder:(ICFolder *)arg1 ;
-(void)setTrashFolder:(ICFolder *)arg1 ;
-(void)setAccountProxy:(ICAccountProxy *)arg1 ;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(char)isLeaf;
-(char)isDeletable;
-(id)accountName;
-(void)setAccountType:(int)arg1 ;
@end
