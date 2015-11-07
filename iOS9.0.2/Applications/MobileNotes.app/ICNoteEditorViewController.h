/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICScrollViewDelegateViewController.h>
#import <MobileNotes/ICStyleSelectorDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>
#import <UIKit/UITextViewDelegate.h>
#import <MobileNotes/ICAudioBarViewControllerDelegate.h>

@protocol UIViewControllerPreviewing;
@class ICNote, ICTextController, ICAudioBarViewController, UIBarButtonItem, ICTextView, UIToolbar, ICStyleSelectorViewController, UIWindow, UIPopoverController, NSDateFormatter, NSUserActivity, ICNoteUserActivityState, NSArray, NSDate, UIBarButtonItemGroup, ICTextViewDelegateHelper, UITapGestureRecognizer, UIAlertController, ICSelectorDelayer, ICNoteContext, NSUndoManager, NotesBackgroundView, NSString;

@interface ICNoteEditorViewController : ICScrollViewDelegateViewController <ICStyleSelectorDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, NSUserActivityDelegate, UIPopoverPresentationControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate_Deprecated, UITextViewDelegate, ICAudioBarViewControllerDelegate> {

	char _isSettingSelection;
	char _startEditingAfterViewAppears;
	char _addDrawingAfterViewAppears;
	char _showImagePickerAfterViewAppears;
	char _isAddingImageAttachment;
	char _didEndEditingForAddingImageAttachment;
	char _userWantsToSeeDateLabel;
	char _animateRangeToScrollToVisible;
	char _shouldResetTextViewContentOffsetWhenAppearing;
	char _isSelecting;
	char _isPreviewingAttachmentFromNote;
	char _oldShouldAvoidBecomingFirstResponder;
	ICNote* _note;
	ICTextController* _textController;
	ICAudioBarViewController* _icaxAudioBarViewController;
	UIBarButtonItem* _icaxToggleTodoBarItem;
	UIBarButtonItem* _icaxSelectStyleBarItem;
	UIBarButtonItem* _icaxAddAttachmentBarItem;
	UIBarButtonItem* _icaxDrawBarButton;
	UIBarButtonItem* _icaxDrawBarButtonCompact;
	UIBarButtonItem* _icaxCameraBarButton;
	UIBarButtonItem* _icaxCameraBarButtonCompact;
	UIBarButtonItem* _icaxRecordAudioBarButton;
	UIBarButtonItem* _icaxRecordAudioBarButtonCompact;
	ICTextView* _textView;
	UIToolbar* _toolbar;
	UIBarButtonItem* _leadingBarItem;
	UIBarButtonItem* _toggleTodoBarItem;
	UIBarButtonItem* _selectStyleBarItem;
	UIBarButtonItem* _drawToolbarItem;
	UIBarButtonItem* _cameraToolbarItem;
	UIBarButtonItem* _trailingBarItem;
	unsigned _toolbarState;
	UIBarButtonItem* _drawBarButton;
	UIBarButtonItem* _cameraBarButton;
	UIBarButtonItem* _composeNoteBarButton;
	UIBarButtonItem* _composeNoteNavBarButton;
	UIBarButtonItem* _shareNoteBarButton;
	UIBarButtonItem* _shareNoteNavBarButton;
	UIBarButtonItem* _deleteBarButton;
	UIBarButtonItem* _deleteNavBarButton;
	UIBarButtonItem* _flexibleSpaceBarItem;
	UIBarButtonItem* _doneNavBarButton;
	ICStyleSelectorViewController* _styleSelectorController;
	UIWindow* _styleSelectorWindow;
	UIPopoverController* _styleSelectorPopoverController;
	UIPopoverController* _imageAttachmentPopoverController;
	ICAudioBarViewController* _audioBarViewController;
	NSDateFormatter* _dateFormatter;
	NSUserActivity* _noteUserActivity;
	ICNoteUserActivityState* _noteUserActivityState;
	NSArray* _keyboardButtonItems;
	NSDate* _keyboardAnimateInFinishTime;
	UIBarButtonItem* _toggleTodoStyleButton;
	UIBarButtonItem* _changeStyleButton;
	UIBarButtonItem* _addDrawingButton;
	UIBarButtonItem* _addImageAttachmentButton;
	UIBarButtonItem* _addAudioRecordingButton;
	UIBarButtonItemGroup* _inputAssistantLeadingGroup;
	UIBarButtonItemGroup* _inputAssistantTrailingGroup;
	float _textViewBottomInsetOverride;
	float _textViewBottomInsetOverrideToRestore;
	float _currentContentInsetTopLayoutGuideLength;
	ICTextViewDelegateHelper* _textViewDelegateHelper;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIAlertController* _limitExceededAlertController;
	ICSelectorDelayer* _updateNoteUserActivityStateDelayer;
	id<UIViewControllerPreviewing> _previewer;
	NSRange _rangeToScrollToVisible;
	NSRange _lastSelectedRange;
	NSRange _textSelectionBeforePeek;

}

@property (nonatomic,retain) ICNote * note;                                                        //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) ICTextController * textController;                                    //@synthesize textController=_textController - In the implementation block
@property (assign,nonatomic) char startEditingAfterViewAppears;                                    //@synthesize startEditingAfterViewAppears=_startEditingAfterViewAppears - In the implementation block
@property (assign,nonatomic) char addDrawingAfterViewAppears;                                      //@synthesize addDrawingAfterViewAppears=_addDrawingAfterViewAppears - In the implementation block
@property (assign,nonatomic) char showImagePickerAfterViewAppears;                                 //@synthesize showImagePickerAfterViewAppears=_showImagePickerAfterViewAppears - In the implementation block
@property (nonatomic,readonly) ICTextController * icaxTextController; 
@property (nonatomic,readonly) ICAudioBarViewController * icaxAudioBarViewController;              //@synthesize icaxAudioBarViewController=_icaxAudioBarViewController - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxToggleTodoBarItem;                            //@synthesize icaxToggleTodoBarItem=_icaxToggleTodoBarItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxSelectStyleBarItem;                           //@synthesize icaxSelectStyleBarItem=_icaxSelectStyleBarItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxAddAttachmentBarItem;                         //@synthesize icaxAddAttachmentBarItem=_icaxAddAttachmentBarItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxDrawBarButton;                                //@synthesize icaxDrawBarButton=_icaxDrawBarButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxDrawBarButtonCompact;                         //@synthesize icaxDrawBarButtonCompact=_icaxDrawBarButtonCompact - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxCameraBarButton;                              //@synthesize icaxCameraBarButton=_icaxCameraBarButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxCameraBarButtonCompact;                       //@synthesize icaxCameraBarButtonCompact=_icaxCameraBarButtonCompact - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxRecordAudioBarButton;                         //@synthesize icaxRecordAudioBarButton=_icaxRecordAudioBarButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * icaxRecordAudioBarButtonCompact;                  //@synthesize icaxRecordAudioBarButtonCompact=_icaxRecordAudioBarButtonCompact - In the implementation block
@property (nonatomic,retain) ICTextView * textView;                                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                                  //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leadingBarItem;                                     //@synthesize leadingBarItem=_leadingBarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * toggleTodoBarItem;                                  //@synthesize toggleTodoBarItem=_toggleTodoBarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectStyleBarItem;                                 //@synthesize selectStyleBarItem=_selectStyleBarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * drawToolbarItem;                                    //@synthesize drawToolbarItem=_drawToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cameraToolbarItem;                                  //@synthesize cameraToolbarItem=_cameraToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * trailingBarItem;                                    //@synthesize trailingBarItem=_trailingBarItem - In the implementation block
@property (assign,nonatomic) unsigned toolbarState;                                                //@synthesize toolbarState=_toolbarState - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * drawBarButton;                                      //@synthesize drawBarButton=_drawBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cameraBarButton;                                    //@synthesize cameraBarButton=_cameraBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeNoteBarButton;                               //@synthesize composeNoteBarButton=_composeNoteBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeNoteNavBarButton;                            //@synthesize composeNoteNavBarButton=_composeNoteNavBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareNoteBarButton;                                 //@synthesize shareNoteBarButton=_shareNoteBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareNoteNavBarButton;                              //@synthesize shareNoteNavBarButton=_shareNoteNavBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteBarButton;                                    //@synthesize deleteBarButton=_deleteBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteNavBarButton;                                 //@synthesize deleteNavBarButton=_deleteNavBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * flexibleSpaceBarItem;                               //@synthesize flexibleSpaceBarItem=_flexibleSpaceBarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneNavBarButton;                                   //@synthesize doneNavBarButton=_doneNavBarButton - In the implementation block
@property (nonatomic,retain) ICStyleSelectorViewController * styleSelectorController;              //@synthesize styleSelectorController=_styleSelectorController - In the implementation block
@property (nonatomic,retain) UIWindow * styleSelectorWindow;                                       //@synthesize styleSelectorWindow=_styleSelectorWindow - In the implementation block
@property (nonatomic,retain) UIPopoverController * styleSelectorPopoverController;                 //@synthesize styleSelectorPopoverController=_styleSelectorPopoverController - In the implementation block
@property (nonatomic,retain) UIPopoverController * imageAttachmentPopoverController;               //@synthesize imageAttachmentPopoverController=_imageAttachmentPopoverController - In the implementation block
@property (nonatomic,retain) ICAudioBarViewController * audioBarViewController;                    //@synthesize audioBarViewController=_audioBarViewController - In the implementation block
@property (nonatomic,readonly) ICNoteContext * noteContext; 
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (retain) NSUserActivity * noteUserActivity;                                              //@synthesize noteUserActivity=_noteUserActivity - In the implementation block
@property (retain) ICNoteUserActivityState * noteUserActivityState;                                //@synthesize noteUserActivityState=_noteUserActivityState - In the implementation block
@property (nonatomic,retain) NSArray * keyboardButtonItems;                                        //@synthesize keyboardButtonItems=_keyboardButtonItems - In the implementation block
@property (assign,nonatomic) char isAddingImageAttachment;                                         //@synthesize isAddingImageAttachment=_isAddingImageAttachment - In the implementation block
@property (assign,nonatomic) char didEndEditingForAddingImageAttachment;                           //@synthesize didEndEditingForAddingImageAttachment=_didEndEditingForAddingImageAttachment - In the implementation block
@property (nonatomic,readonly) NSUndoManager * textViewUndoManager; 
@property (nonatomic,copy) NSDate * keyboardAnimateInFinishTime;                                   //@synthesize keyboardAnimateInFinishTime=_keyboardAnimateInFinishTime - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * toggleTodoStyleButton;                              //@synthesize toggleTodoStyleButton=_toggleTodoStyleButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * changeStyleButton;                                  //@synthesize changeStyleButton=_changeStyleButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addDrawingButton;                                   //@synthesize addDrawingButton=_addDrawingButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addImageAttachmentButton;                           //@synthesize addImageAttachmentButton=_addImageAttachmentButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addAudioRecordingButton;                            //@synthesize addAudioRecordingButton=_addAudioRecordingButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItemGroup * inputAssistantLeadingGroup;                    //@synthesize inputAssistantLeadingGroup=_inputAssistantLeadingGroup - In the implementation block
@property (nonatomic,retain) UIBarButtonItemGroup * inputAssistantTrailingGroup;                   //@synthesize inputAssistantTrailingGroup=_inputAssistantTrailingGroup - In the implementation block
@property (nonatomic,readonly) NotesBackgroundView * backgroundView; 
@property (assign,nonatomic) float textViewBottomInsetOverride;                                    //@synthesize textViewBottomInsetOverride=_textViewBottomInsetOverride - In the implementation block
@property (assign,nonatomic) float textViewBottomInsetOverrideToRestore;                           //@synthesize textViewBottomInsetOverrideToRestore=_textViewBottomInsetOverrideToRestore - In the implementation block
@property (nonatomic,readonly) float textViewBottomInsetThatWeWant; 
@property (nonatomic,readonly) float textViewScrollIndicatorBottomInsetThatWeWant; 
@property (nonatomic,readonly) float textViewTopInsetThatWeWant; 
@property (assign,nonatomic) char userWantsToSeeDateLabel;                                         //@synthesize userWantsToSeeDateLabel=_userWantsToSeeDateLabel - In the implementation block
@property (assign,nonatomic) float currentContentInsetTopLayoutGuideLength;                        //@synthesize currentContentInsetTopLayoutGuideLength=_currentContentInsetTopLayoutGuideLength - In the implementation block
@property (assign,nonatomic) NSRange rangeToScrollToVisible;                                       //@synthesize rangeToScrollToVisible=_rangeToScrollToVisible - In the implementation block
@property (assign,nonatomic) char animateRangeToScrollToVisible;                                   //@synthesize animateRangeToScrollToVisible=_animateRangeToScrollToVisible - In the implementation block
@property (assign,nonatomic) char shouldResetTextViewContentOffsetWhenAppearing;                   //@synthesize shouldResetTextViewContentOffsetWhenAppearing=_shouldResetTextViewContentOffsetWhenAppearing - In the implementation block
@property (nonatomic,retain) ICTextViewDelegateHelper * textViewDelegateHelper;                    //@synthesize textViewDelegateHelper=_textViewDelegateHelper - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                        //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIAlertController * limitExceededAlertController;                     //@synthesize limitExceededAlertController=_limitExceededAlertController - In the implementation block
@property (assign,nonatomic) NSRange lastSelectedRange;                                            //@synthesize lastSelectedRange=_lastSelectedRange - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * updateNoteUserActivityStateDelayer;               //@synthesize updateNoteUserActivityStateDelayer=_updateNoteUserActivityStateDelayer - In the implementation block
@property (assign,nonatomic) char isSelecting;                                                     //@synthesize isSelecting=_isSelecting - In the implementation block
@property (assign,nonatomic) NSRange textSelectionBeforePeek;                                      //@synthesize textSelectionBeforePeek=_textSelectionBeforePeek - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewing> previewer;                             //@synthesize previewer=_previewer - In the implementation block
@property (assign,nonatomic) char isPreviewingAttachmentFromNote;                                  //@synthesize isPreviewingAttachmentFromNote=_isPreviewingAttachmentFromNote - In the implementation block
@property (assign,nonatomic) char oldShouldAvoidBecomingFirstResponder;                            //@synthesize oldShouldAvoidBecomingFirstResponder=_oldShouldAvoidBecomingFirstResponder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)respondToTapGesture:(id)arg1 ;
-(void)updateSelectionOnUndo:(id)arg1 ;
-(void)showRecoverNoteAlert;
-(void)updateFormatToolbarLayoutWithSize:(CGSize)arg1 ;
-(void)audioPlaybackPlayNotification:(id)arg1 ;
-(void)applyAccessibilityInfo;
-(void)setPreviewer:(id<UIViewControllerPreviewing>)arg1 ;
-(id<UIViewControllerPreviewing>)previewer;
-(id)previewMenuItemsForAttachment;
-(void)updateNavigationTitle;
-(float)textViewScrollPosition;
-(NSRange)textViewVisibleRange;
-(void)restoreTextViewScrollPosition:(float)arg1 ;
-(void)restoreTextViewVisibleRange:(NSRange)arg1 animated:(char)arg2 ;
-(void)showImagePickerForSourceType:(int)arg1 sender:(id)arg2 ;
-(void)setShowImagePickerAfterViewAppears:(char)arg1 ;
-(void)addDrawing:(id)arg1 ;
-(void)setAddDrawingAfterViewAppears:(char)arg1 ;
-(void)addNote:(id)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 animated:(char)arg2 ;
-(void)setNote:(id)arg1 delayedForLaunch:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startEditing;
-(void)timeFormatChanged:(id)arg1 ;
-(void)viewControllerWillStartEditModeNotification:(id)arg1 ;
-(void)notesContextRefreshNotification:(id)arg1 ;
-(void)updateBarButtonsAnimated:(char)arg1 ;
-(void)resetTextViewUndoManager;
-(void)addAudioRecordingWithFileURL:(id)arg1 ;
-(void)noteWillBeDeletedNotification:(id)arg1 ;
-(void)invalidateLastVisibleRange;
-(ICTextController *)textController;
-(void)setupMenuController;
-(void)runScrollPerformanceTest:(id)arg1 iterations:(int)arg2 ;
-(UIBarButtonItem *)shareNoteNavBarButton;
-(void)shareNote:(id)arg1 ;
-(void)warnUserAttachmentSizeExceededWithAttachmentCount:(unsigned)arg1 ;
-(void)warnUserNoteLengthExceeded;
-(void)warnUserAttachmentLimitExceeded;
-(void)setTextController:(ICTextController *)arg1 ;
-(id)createTextViewUsingTextController:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(char)arg2 ;
-(id)noteActivityItemsForSharing;
-(ICTextController *)icaxTextController;
-(void)icaxToggleTodoStyle;
-(NSUserActivity *)noteUserActivity;
-(void)updateNoteUserActivityState;
-(void)cleanupAfterBarSourcedPopoverPresentation;
-(void)prepareForBarSourcedPopoverPresentation;
-(void)setNoteUserActivity:(NSUserActivity *)arg1 ;
-(void)setNoteUserActivityState:(ICNoteUserActivityState *)arg1 ;
-(ICNoteUserActivityState *)noteUserActivityState;
-(void)audioBarViewControllerDone:(id)arg1 ;
-(void)openLink:(id)arg1 ;
-(void)setStartEditingAfterViewAppears:(char)arg1 ;
-(void)setShouldResetTextViewContentOffsetWhenAppearing:(char)arg1 ;
-(void)setRangeToScrollToVisible:(NSRange)arg1 ;
-(void)setAnimateRangeToScrollToVisible:(char)arg1 ;
-(void)setLastSelectedRange:(NSRange)arg1 ;
-(UIBarButtonItem *)toggleTodoStyleButton;
-(void)toggleTodoStyle:(id)arg1 ;
-(id)barButtonItemWithImageNamed:(id)arg1 selector:(SEL)arg2 ;
-(void)setToggleTodoStyleButton:(UIBarButtonItem *)arg1 ;
-(void)changeStyle:(id)arg1 ;
-(void)setChangeStyleButton:(UIBarButtonItem *)arg1 ;
-(void)addImageAttachment:(id)arg1 ;
-(void)setAddImageAttachmentButton:(UIBarButtonItem *)arg1 ;
-(void)setAddDrawingButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)changeStyleButton;
-(void)setInputAssistantLeadingGroup:(UIBarButtonItemGroup *)arg1 ;
-(UIBarButtonItem *)addImageAttachmentButton;
-(UIBarButtonItem *)addDrawingButton;
-(void)setInputAssistantTrailingGroup:(UIBarButtonItemGroup *)arg1 ;
-(UIBarButtonItemGroup *)inputAssistantLeadingGroup;
-(UIBarButtonItemGroup *)inputAssistantTrailingGroup;
-(void)updateNoteModificationDate;
-(void)recreateTextView;
-(void)addDrawingAtSelectionOrEndOfNote:(id)arg1 ;
-(void)setDrawBarButton:(UIBarButtonItem *)arg1 ;
-(void)addImageAttachmentAtSelectionOrEndOfNote:(id)arg1 ;
-(void)setCameraBarButton:(UIBarButtonItem *)arg1 ;
-(void)setComposeNoteBarButton:(UIBarButtonItem *)arg1 ;
-(void)setComposeNoteNavBarButton:(UIBarButtonItem *)arg1 ;
-(void)setShareNoteBarButton:(UIBarButtonItem *)arg1 ;
-(void)setShareNoteNavBarButton:(UIBarButtonItem *)arg1 ;
-(void)deleteCurrentNote:(id)arg1 ;
-(void)setDeleteBarButton:(UIBarButtonItem *)arg1 ;
-(void)setDeleteNavBarButton:(UIBarButtonItem *)arg1 ;
-(void)setFlexibleSpaceBarItem:(UIBarButtonItem *)arg1 ;
-(void)doneEditing:(id)arg1 ;
-(void)setDoneNavBarButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)composeNoteNavBarButton;
-(void)updateBarButtons;
-(UIBarButtonItem *)drawToolbarItem;
-(void)keyboardWillChangeFrameNotification:(id)arg1 ;
-(void)willAddAttachmentForNoteNotification:(id)arg1 ;
-(void)didAddAttachmentForNoteNotification:(id)arg1 ;
-(id)textViewInputAccessoryView;
-(char)startEditingAfterViewAppears;
-(char)addDrawingAfterViewAppears;
-(char)showImagePickerAfterViewAppears;
-(void)updateTextViewContentInsetsAnimated:(char)arg1 ;
-(NSRange)rangeToScrollToVisible;
-(char)animateRangeToScrollToVisible;
-(char)shouldResetTextViewContentOffsetWhenAppearing;
-(void)resetTextViewContentOffset;
-(float)currentContentInsetTopLayoutGuideLength;
-(float)textViewTopInsetThatWeWant;
-(char)useWindowForStyleSelector;
-(void)showStyleSelector:(char)arg1 animated:(char)arg2 ;
-(void)willDimOrUndimDetailView:(id)arg1 ;
-(void)inputAccessoryViewDisclosureStateDidChange:(id)arg1 ;
-(void)updateToolbarItems;
-(ICAudioBarViewController *)audioBarViewController;
-(UIAlertController *)limitExceededAlertController;
-(void)setLimitExceededAlertController:(UIAlertController *)arg1 ;
-(void)warnLimitExceededWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(void)adjustViewsForKeyboardNotification:(id)arg1 ;
-(void)setKeyboardAnimateInFinishTime:(NSDate *)arg1 ;
-(void)setTextViewBottomInsetOverride:(float)arg1 ;
-(float)textViewBottomInsetOverride;
-(float)textViewBottomInsetThatWeWant;
-(float)textViewScrollIndicatorBottomInsetThatWeWant;
-(char)userWantsToSeeDateLabel;
-(char)isSelecting;
-(void)setCurrentContentInsetTopLayoutGuideLength:(float)arg1 ;
-(void)setAudioBarViewController:(ICAudioBarViewController *)arg1 ;
-(void)noteWillLeaveCurrentNotesList;
-(id)_attachmentViewForPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)setIsPreviewingAttachmentFromNote:(char)arg1 ;
-(void)setTextSelectionBeforePeek:(NSRange)arg1 ;
-(void)setOldShouldAvoidBecomingFirstResponder:(char)arg1 ;
-(NSRange)textSelectionBeforePeek;
-(char)oldShouldAvoidBecomingFirstResponder;
-(char)isPreviewingAttachmentFromNote;
-(id)findNewNoteBasedOnPreviousIndex:(unsigned)arg1 ;
-(char)isAddingImageAttachment;
-(id)linkForSelection;
-(char)canOpenLink;
-(ICSelectorDelayer *)updateNoteUserActivityStateDelayer;
-(void)setCurrentTextStyle:(unsigned)arg1 ;
-(void)showStyleSelector:(char)arg1 animated:(char)arg2 sender:(id)arg3 ;
-(ICStyleSelectorViewController *)styleSelectorController;
-(void)setStyleSelectorController:(ICStyleSelectorViewController *)arg1 ;
-(void)showStyleSelectorWindow:(char)arg1 animated:(char)arg2 ;
-(void)showStyleSelectorPopover:(char)arg1 animated:(char)arg2 sender:(id)arg3 ;
-(UIPopoverController *)styleSelectorPopoverController;
-(void)setStyleSelectorPopoverController:(UIPopoverController *)arg1 ;
-(UIWindow *)styleSelectorWindow;
-(void)setStyleSelectorWindow:(UIWindow *)arg1 ;
-(void)cleanupAfterAddImageAttachmentOperation;
-(void)addICAttachment:(id)arg1 ;
-(char)didEndEditingForAddingImageAttachment;
-(unsigned)toolbarState;
-(void)setToolbarState:(unsigned)arg1 ;
-(UIBarButtonItem *)doneNavBarButton;
-(UIBarButtonItem *)shareNoteBarButton;
-(UIBarButtonItem *)toggleTodoBarItem;
-(UIBarButtonItem *)flexibleSpaceBarItem;
-(UIBarButtonItem *)selectStyleBarItem;
-(UIBarButtonItem *)cameraBarButton;
-(UIBarButtonItem *)drawBarButton;
-(UIBarButtonItem *)deleteBarButton;
-(UIBarButtonItem *)composeNoteBarButton;
-(UIBarButtonItem *)deleteNavBarButton;
-(UIBarButtonItem *)leadingBarItem;
-(UIBarButtonItem *)trailingBarItem;
-(void)setTextViewBottomInsetOverrideToRestore:(float)arg1 ;
-(void)attachmentsExceeded:(id)arg1 ;
-(void)loadNoteContentIntoView;
-(void)setUserWantsToSeeDateLabel:(char)arg1 ;
-(ICTextViewDelegateHelper *)textViewDelegateHelper;
-(void)updateChecklistButtonAccessibility;
-(void)prepareSelectionForAddingAttachment;
-(void)addAudioRecording:(id)arg1 ;
-(void)setIsAddingImageAttachment:(char)arg1 ;
-(void)setImageAttachmentPopoverController:(UIPopoverController *)arg1 ;
-(void)setDidEndEditingForAddingImageAttachment:(char)arg1 ;
-(void)hideSplitScreenPrimaryOverlayIfNecessary;
-(UIPopoverController *)imageAttachmentPopoverController;
-(NSDate *)keyboardAnimateInFinishTime;
-(float)textViewBottomInsetOverrideToRestore;
-(void)didEndEditingNote;
-(void)setIsSelecting:(char)arg1 ;
-(NSRange)lastSelectedRange;
-(void)setHeadingStyle:(id)arg1 ;
-(void)setBodyStyle:(id)arg1 ;
-(void)toggleTodoChecked:(id)arg1 ;
-(UIBarButtonItem *)cameraToolbarItem;
-(UIBarButtonItem *)addAudioRecordingButton;
-(void)updateDateLabelAccessibility;
-(void)styleSelector:(id)arg1 didSelectStyle:(id)arg2 ;
-(void)styleSelector:(id)arg1 toggleBIU:(unsigned)arg2 ;
-(void)styleSelectorDidCancel:(id)arg1 ;
-(id)flexibleSpaceBarButtonItem;
-(id)attributedStringFromHTML:(id)arg1 ;
-(void)showStyleSelector;
-(void)addAudioRecordingAtSelectionOrEndOfNote:(id)arg1 ;
-(ICAudioBarViewController *)icaxAudioBarViewController;
-(UIBarButtonItem *)icaxToggleTodoBarItem;
-(UIBarButtonItem *)icaxSelectStyleBarItem;
-(UIBarButtonItem *)icaxAddAttachmentBarItem;
-(UIBarButtonItem *)icaxDrawBarButton;
-(UIBarButtonItem *)icaxDrawBarButtonCompact;
-(UIBarButtonItem *)icaxCameraBarButton;
-(UIBarButtonItem *)icaxCameraBarButtonCompact;
-(UIBarButtonItem *)icaxRecordAudioBarButton;
-(UIBarButtonItem *)icaxRecordAudioBarButtonCompact;
-(void)setLeadingBarItem:(UIBarButtonItem *)arg1 ;
-(void)setToggleTodoBarItem:(UIBarButtonItem *)arg1 ;
-(void)setSelectStyleBarItem:(UIBarButtonItem *)arg1 ;
-(void)setDrawToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)setCameraToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)setTrailingBarItem:(UIBarButtonItem *)arg1 ;
-(NSArray *)keyboardButtonItems;
-(void)setKeyboardButtonItems:(NSArray *)arg1 ;
-(void)setAddAudioRecordingButton:(UIBarButtonItem *)arg1 ;
-(void)setTextViewDelegateHelper:(ICTextViewDelegateHelper *)arg1 ;
-(void)setUpdateNoteUserActivityStateDelayer:(ICSelectorDelayer *)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)updateInputAssistantItem;
-(NSDateFormatter *)dateFormatter;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(char)resignFirstResponder;
-(void)didReceiveMemoryWarning;
-(void)userActivityWillSave:(id)arg1 ;
-(void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)keyCommands;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(NotesBackgroundView *)backgroundView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setTextView:(ICTextView *)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)commitPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(ICTextView *)textView;
-(NSUndoManager *)textViewUndoManager;
-(void)fetchAll;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(char)isViewVisible;
-(void)setNote:(ICNote *)arg1 ;
-(ICNote *)note;
-(void)contentSizeCategoryDidChange;
-(ICNoteContext *)noteContext;
-(NSRange)visibleRange;
-(void)localeChanged:(id)arg1 ;
-(void)setTitleStyle:(id)arg1 ;
-(void)indent:(id)arg1 ;
-(void)outdent:(id)arg1 ;
@end

