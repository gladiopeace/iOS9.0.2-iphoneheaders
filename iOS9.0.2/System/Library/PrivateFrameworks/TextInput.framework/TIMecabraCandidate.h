/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString, NSNumber;

@interface TIMecabraCandidate : TIKeyboardCandidate {

	char _emojiCandidate;
	char _extensionCandidate;
	char _isForShortcutConversion;
	NSString* _candidate;
	NSString* _input;
	NSNumber* _mecabraCandidatePointerValue;
	unsigned _deleteCount;
	int _cursorMovement;

}

@property (nonatomic,retain) NSNumber * mecabraCandidatePointerValue;              //@synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue - In the implementation block
+(int)type;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)input;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)deleteCount;
-(int)cursorMovement;
-(id)candidate;
-(char)isForShortcutConversion;
-(char)isExtensionCandidate;
-(char)isFullwidthCandidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(char)isEmojiCandidate;
-(void)setMecabraCandidatePointerValue:(NSNumber *)arg1 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(char)arg4 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(char)arg4 isEmoji:(char)arg5 isShortcut:(char)arg6 deleteCount:(unsigned)arg7 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(char)arg4 isEmoji:(char)arg5 isShortcut:(char)arg6 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(char)arg4 isEmoji:(char)arg5 isShortcut:(char)arg6 deleteCount:(unsigned)arg7 cursorMovement:(int)arg8 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(NSNumber *)mecabraCandidatePointerValue;
@end

