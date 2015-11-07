/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICSearchIndexable <NSObject>
@optional
-(id)generateSearchIndexStringsOperation;

@required
-(id)identifier;
-(id)modificationDate;
-(id)managedObjectContext;
-(id)objectIdentifier;
-(char)searchResultCanBeDeletedFromNoteContext;
-(void)deleteFromNoteContextUsingIndexerContext:(id)arg1;
-(int)visibilityTestingType;
-(id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
-(unsigned)searchResultsSection;
-(char)isHiddenFromSearch;
-(id)searchIndexStringsOutHasAdditionalStrings:(char*)arg1;
-(char)shouldUpdateIndexForChangedValues:(id)arg1;

@end

