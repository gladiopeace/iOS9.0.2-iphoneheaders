/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UITextInteractionAssistant;


@protocol UITextInputPrivate <UITextInput,UITextInputTokenizer,UITextInputTraits_Private>
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) int selectionGranularity; 
@optional
-(char)_shouldRepeatInsertText:(id)arg1;
-(float)_delayUntilRepeatInsertText:(id)arg1;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
-(id)metadataDictionariesForDictationResults;
-(CGRect*)visibleRect;
-(id)textColorForCaretSelection;
-(int)selectionGranularity;
-(void)setSelectionGranularity:(int)arg1;
-(id)automaticallySelectedOverlay;
-(void)setBottomBufferHeight:(float)arg1;
-(char)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)arg1;
-(id)selectionInteractionAssistant;
-(void)streamingDictationDidBegin;
-(void)streamingDictationDidEnd;
-(void)acceptedAutoFillWord:(id)arg1;
-(char)isAutoFillMode;
-(id)fontForCaretSelection;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
-(void)_willShowCorrections;
-(void)_didHideCorrections;

@required
-(UITextInteractionAssistant *)interactionAssistant;
-(id)textInputTraits;
-(void)selectAll;
-(NSRange*)selectionRange;
-(char)hasSelection;
-(char)hasContent;

@end

