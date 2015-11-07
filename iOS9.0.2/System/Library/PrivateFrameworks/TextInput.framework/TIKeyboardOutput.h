/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardCandidate, NSString, NSIndexSet;

@interface TIKeyboardOutput : NSObject <NSSecureCoding> {

	TIKeyboardCandidate* _acceptedCandidate;
	NSString* _textToCommit;
	unsigned _deletionCount;
	NSString* _insertionText;
	unsigned _forwardDeletionCount;
	NSString* _insertionTextAfterSelection;
	TIKeyboardCandidate* _shortcutConversion;
	NSIndexSet* _handwritingStrokesToDelete;

}

@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;               //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
@property (nonatomic,copy) NSString * textToCommit;                                 //@synthesize textToCommit=_textToCommit - In the implementation block
@property (assign,nonatomic) unsigned deletionCount;                                //@synthesize deletionCount=_deletionCount - In the implementation block
@property (nonatomic,copy) NSString * insertionText;                                //@synthesize insertionText=_insertionText - In the implementation block
@property (assign,nonatomic) unsigned forwardDeletionCount;                         //@synthesize forwardDeletionCount=_forwardDeletionCount - In the implementation block
@property (nonatomic,copy) NSString * insertionTextAfterSelection;                  //@synthesize insertionTextAfterSelection=_insertionTextAfterSelection - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * shortcutConversion;              //@synthesize shortcutConversion=_shortcutConversion - In the implementation block
@property (nonatomic,copy) NSIndexSet * handwritingStrokesToDelete;                 //@synthesize handwritingStrokesToDelete=_handwritingStrokesToDelete - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(unsigned)deletionCount;
-(NSString *)insertionText;
-(void)setDeletionCount:(unsigned)arg1 ;
-(void)setInsertionText:(NSString *)arg1 ;
-(TIKeyboardCandidate *)acceptedCandidate;
-(NSString *)textToCommit;
-(unsigned)forwardDeletionCount;
-(NSString *)insertionTextAfterSelection;
-(void)insertTextAfterSelection:(id)arg1 ;
-(TIKeyboardCandidate *)shortcutConversion;
-(NSIndexSet *)handwritingStrokesToDelete;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)deleteBackward:(unsigned)arg1 ;
-(void)setTextToCommit:(NSString *)arg1 ;
-(void)setForwardDeletionCount:(unsigned)arg1 ;
-(void)setInsertionTextAfterSelection:(NSString *)arg1 ;
-(void)setShortcutConversion:(TIKeyboardCandidate *)arg1 ;
-(void)setHandwritingStrokesToDelete:(NSIndexSet *)arg1 ;
-(void)deleteForward;
-(void)deleteForward:(unsigned)arg1 ;
@end

