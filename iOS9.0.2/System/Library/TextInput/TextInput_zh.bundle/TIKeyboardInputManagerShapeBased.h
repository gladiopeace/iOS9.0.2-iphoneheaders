/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TIKeyboardInputManagerChinese.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class NSMutableString, NSString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {

	NSMutableString* _searchString;
	char _keepRemainingInput;
	NSString* _remainingInput;
	char _previousActionWasAutoConfirmation;

}

@property (nonatomic,retain,readonly) NSMutableString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSString * remainingInput;                            //@synthesize remainingInput=_remainingInput - In the implementation block
@property (assign,nonatomic) char previousActionWasAutoConfirmation;               //@synthesize previousActionWasAutoConfirmation=_previousActionWasAutoConfirmation - In the implementation block
-(void)dealloc;
-(char)hasCandidates;
-(id)keyboardBehaviors;
-(char)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned)initialSelectedIndex;
-(void)clearInput;
-(char)usesAutoDeleteWord;
-(char)shouldExtendPriorWord;
-(unsigned)inputIndex;
-(NSMutableString *)searchString;
-(char)suppliesCompletions;
-(char)acceptInputString:(id)arg1 ;
-(unsigned)inputCount;
-(char)shouldLookForCompletionCandidates;
-(void)setPreviousActionWasAutoConfirmation:(char)arg1 ;
-(void)cancelCandidatesThread;
-(id)markedTextWithAutoconvertedCandidates;
-(char)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(char)arg2 ;
-(id)formattedSearchString;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(char)analyzeForPredictionsWithOption:(unsigned long)arg1 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(char)previousActionWasAutoConfirmation;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)acceptInput;
-(void)loadDictionaries;
-(void)setCollatorLocale;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(void)inputLocationChanged;
-(id)sortingMethods;
-(id)didAcceptCandidate:(id)arg1 ;
-(id)rawInputString;
-(NSString *)remainingInput;
@end

