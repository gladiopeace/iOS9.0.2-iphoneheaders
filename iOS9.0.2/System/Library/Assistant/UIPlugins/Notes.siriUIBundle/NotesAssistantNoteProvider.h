/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSpeakableNamespaceProvider.h>

@class NoteContext, NoteObject, NSString, NSExtension;

@interface NotesAssistantNoteProvider : NSObject <AFSpeakableNamespaceProvider> {

	NoteContext* _context;
	NoteObject* _note;
	NSString* _noteTitle;
	NSString* _noteContents;
	NSExtension* _extension;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)stringForExpression:(id)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
@end
