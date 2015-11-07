/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <DAEAS/DADataElement.h>

@class NoteObject, NSString, NSNumber, NSArray, NSDate;

@interface ASNote : ASChangedCollectionLeaf <DADataElement> {

	char _bodyIsPlaintext;
	NoteObject* _localRecord;
	NSString* _body;
	NSNumber* _bodyTruncated;
	NSArray* _categories;
	NSString* _subject;
	NSString* _messageClass;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,retain) NoteObject * localRecord;               //@synthesize localRecord=_localRecord - In the implementation block
@property (nonatomic,retain) NSString * body;                        //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSNumber * bodyTruncated;               //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (assign,nonatomic) char bodyIsPlaintext;                   //@synthesize bodyIsPlaintext=_bodyIsPlaintext - In the implementation block
@property (nonatomic,retain) NSArray * categories;                   //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSString * subject;                     //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * messageClass;                //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
+(id)noteWithLocalNoteObject:(id)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(NSDate *)lastModifiedDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)body;
-(NSArray *)categories;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setBody:(NSString *)arg1 ;
-(void)setMessageClass:(NSString *)arg1 ;
-(NSString *)messageClass;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)postProcessApplicationData;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(char)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(char)loadLocalItemWithAccount:(id)arg1 ;
-(char)saveServerIDToExistingItem;
-(char)deleteFromContainer:(void*)arg1 ;
-(int)dataclass;
-(void)loadClientIDs;
-(NSNumber *)bodyTruncated;
-(void)setBodyTruncated:(NSNumber *)arg1 ;
-(void)setBodyIsPlaintext:(char)arg1 ;
-(void)setLocalRecord:(NoteObject *)arg1 ;
-(void)_loadAttributesFromLocalNoteObject:(id)arg1 forAccount:(id)arg2 ;
-(id)initWithLocalNoteObject:(id)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(NoteObject *)localRecord;
-(char)bodyIsPlaintext;
-(char)saveToNoteDBWithExistingRecord:(id)arg1 intoNoteStore:(id)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 account:(id)arg5 ;
-(char)loadNoteObjectForAccount:(id)arg1 ;
-(char)saveServerIDToNoteDB;
-(char)deleteFromNoteContext;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
@end

