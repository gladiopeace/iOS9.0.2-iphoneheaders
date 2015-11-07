/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>
#import <MobileNotes/NoteTextViewActionDelegate.h>
#import <MobileNotes/NoteTextViewLayoutDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol NoteContentLayerDelegate;
@class NSLayoutConstraint, NotesScrollView, NoteTextView, UIView, NoteDateLabel, ICTextViewDelegateHelper, NSString, UIScrollView, _UICompatibilityTextView, DOMHTMLDocument, NSArray;

@interface NoteContentLayer : UIView <NoteTextViewActionDelegate, NoteTextViewLayoutDelegate, UITextViewDelegate> {

	char _containsCJK;
	char _tracksMaximumContentLength;
	char _updatedTitleRange;
	id<NoteContentLayerDelegate> _delegate;
	NSLayoutConstraint* _bottomMarginConstraint;
	NSLayoutConstraint* _dateTopMarginConstraint;
	NSLayoutConstraint* _dateHorizontalContraint;
	NSLayoutConstraint* _textTopMarginConstraint;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;
	NotesScrollView* _scrollView;
	NoteTextView* _textView;
	UIView* _horizontalLayoutGuide;
	NoteDateLabel* _dateLabel;
	ICTextViewDelegateHelper* _textViewDelegateHelper;

}

@property (assign,nonatomic,__weak) id<NoteContentLayerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char containsCJK;                                                       //@synthesize containsCJK=_containsCJK - In the implementation block
@property (assign,getter=isEditable,nonatomic) char editable; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) char contentContainsValuableContent; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,readonly) UIScrollView * contentScrollView; 
@property (nonatomic,readonly) _UICompatibilityTextView * contentTextView; 
@property (assign,nonatomic,__weak) id<NotesTextureScrolling> textureScrollingDelegate; 
@property (nonatomic,readonly) DOMHTMLDocument * htmlDocument; 
@property (nonatomic,readonly) NSArray * subWebResources; 
@property (assign,nonatomic) char tracksMaximumContentLength;                                        //@synthesize tracksMaximumContentLength=_tracksMaximumContentLength - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomMarginConstraint;                            //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dateTopMarginConstraint;                           //@synthesize dateTopMarginConstraint=_dateTopMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dateHorizontalContraint;                           //@synthesize dateHorizontalContraint=_dateHorizontalContraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textTopMarginConstraint;                           //@synthesize textTopMarginConstraint=_textTopMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftConstraint;                                    //@synthesize leftConstraint=_leftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightConstraint;                                   //@synthesize rightConstraint=_rightConstraint - In the implementation block
@property (nonatomic,retain) NotesScrollView * scrollView;                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NoteTextView * textView;                                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * horizontalLayoutGuide;                                         //@synthesize horizontalLayoutGuide=_horizontalLayoutGuide - In the implementation block
@property (nonatomic,retain) NoteDateLabel * dateLabel;                                              //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic) char updatedTitleRange;                                                 //@synthesize updatedTitleRange=_updatedTitleRange - In the implementation block
@property (nonatomic,readonly) char hasFullWidth; 
@property (nonatomic,readonly) char hasFullHeight; 
@property (nonatomic,retain) ICTextViewDelegateHelper * textViewDelegateHelper;                      //@synthesize textViewDelegateHelper=_textViewDelegateHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UICompatibilityTextView *)contentTextView;
-(void)setTextureScrollingDelegate:(id<NotesTextureScrolling>)arg1 ;
-(char)containsCJK;
-(void)setContent:(id)arg1 isPlainText:(char)arg2 isCJK:(char)arg3 ;
-(void)setTimestampDate:(id)arg1 ;
-(DOMHTMLDocument *)htmlDocument;
-(void)updateDateLabel;
-(id<NotesTextureScrolling>)textureScrollingDelegate;
-(id)contentAsPasteboardItems;
-(void)setTracksMaximumContentLength:(char)arg1 ;
-(id)contentAsPlainText:(char)arg1 ;
-(char)contentContainsValuableContent;
-(NSArray *)subWebResources;
-(char)tracksMaximumContentLength;
-(void)addSubWebResourcesObject:(id)arg1 ;
-(void)reloadInterface;
-(CGRect)rectForDOMNode:(id)arg1 ;
-(void)editorWillSetEditing:(char)arg1 note:(id)arg2 animated:(char)arg3 ;
-(ICTextViewDelegateHelper *)textViewDelegateHelper;
-(void)setTextViewDelegateHelper:(ICTextViewDelegateHelper *)arg1 ;
-(char)canInsertImagesInTextView:(id)arg1 ;
-(void)insertImageInTextView:(id)arg1 ;
-(void)noteTextView:(id)arg1 didChangeContentSize:(CGSize)arg2 ;
-(char)isNoteTextViewVisible:(id)arg1 ;
-(char)noteTextView:(id)arg1 acceptContentsFromPasteboard:(id)arg2 ;
-(char)allowsAttachmentsInTextView:(id)arg1 ;
-(void)noteTextView:(id)arg1 handleLongPressOnElement:(id)arg2 atPoint:(CGPoint)arg3 ;
-(char)noteTextView:(id)arg1 canHandleLongPressOnElement:(id)arg2 ;
-(void)updateHorizontalConstraints;
-(void)setTextTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textTopMarginConstraint;
-(void)setDateTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)dateTopMarginConstraint;
-(void)setNotesWebPreferencesOnWebView:(id)arg1 ;
-(void)webViewDidChangeNotification:(id)arg1 ;
-(NSLayoutConstraint *)leftConstraint;
-(NSLayoutConstraint *)rightConstraint;
-(NSLayoutConstraint *)dateHorizontalContraint;
-(void)setDateHorizontalContraint:(NSLayoutConstraint *)arg1 ;
-(char)hasFullHeight;
-(void)setupDateHorizontalConstraint;
-(void)forcedSetContainsCJK:(char)arg1 ;
-(char)hasFullWidth;
-(void)didChangeFullSizeClass;
-(void)invalidateSizeRelatedConstraints;
-(char)updatedTitleRange;
-(void)setUpdatedTitleRange:(char)arg1 ;
-(void)setLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)horizontalLayoutGuide;
-(void)setHorizontalLayoutGuide:(UIView *)arg1 ;
-(CGRect)rectForSelection;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)setDateLabel:(NoteDateLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<NoteContentLayerDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<NoteContentLayerDelegate>)delegate;
-(CGPoint)contentOffset;
-(char)resignFirstResponder;
-(NSString *)title;
-(char)becomeFirstResponder;
-(id)keyCommands;
-(char)isEditable;
-(void)setScrollView:(NotesScrollView *)arg1 ;
-(NotesScrollView *)scrollView;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)flashScrollIndicators;
-(void)setTextView:(NoteTextView *)arg1 ;
-(void)scrollSelectionToVisible:(char)arg1 ;
-(UIScrollView *)contentScrollView;
-(void)updateConstraints;
-(char)canResignFirstResponder;
-(void)setEditable:(char)arg1 ;
-(id)selectedDOMRange;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setSelectionToStart;
-(id)webArchive;
-(NoteTextView *)textView;
-(id)viewPrintFormatter;
-(void)setBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(NoteDateLabel *)dateLabel;
-(void)updateMarginConstraints;
-(void)setContainsCJK:(char)arg1 ;
-(void)replaceSelectionWithNode:(id)arg1 ;
@end

