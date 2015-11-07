/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class NoteObject, NoteContentLayer, NotesBackgroundView, NSString;

@interface NotePreviewController : UIViewController <UITextViewDelegate> {

	NoteObject* _note;
	NoteContentLayer* _contentLayer;

}

@property (nonatomic,retain) NoteObject * note;                                   //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) NotesBackgroundView * backgroundView; 
@property (nonatomic,retain) NoteContentLayer * contentLayer;                     //@synthesize contentLayer=_contentLayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupLegacyNotePreview;
-(void)setContentLayer:(NoteContentLayer *)arg1 ;
-(NotesBackgroundView *)backgroundView;
-(void)viewDidLoad;
-(NoteContentLayer *)contentLayer;
-(void)setNote:(NoteObject *)arg1 ;
-(NoteObject *)note;
@end

