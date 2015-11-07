/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFComposeTypeFactoryDelegate.h>

@class NSArray, NSMutableArray, NSMutableString, MFLibraryMessage, MFPlainTextDocument, NSString;

@interface _MFPlaceholderMessageRewriter : NSObject <MFComposeTypeFactoryDelegate> {

	NSArray* _mixedContent;
	NSMutableArray* _placeholders;
	NSMutableString* _HTML;
	MFLibraryMessage* _libraryMessage;

}

@property (nonatomic,readonly) MFLibraryMessage * libraryMessage;                       //@synthesize libraryMessage=_libraryMessage - In the implementation block
@property (nonatomic,readonly) char isRichTextMessage; 
@property (nonatomic,readonly) MFPlainTextDocument * plaintextAlternative; 
@property (nonatomic,readonly) NSArray * mixedContent; 
@property (nonatomic,readonly) NSArray * placeholders; 
@property (nonatomic,readonly) NSString * HTML; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sendingEmailAddress;
-(id)sendingAccountProxy;
-(id)bodyField;
-(id)toRecipients;
-(id)ccRecipients;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(char)arg2 ;
-(id)bccRecipients;
-(id)accountProxyGenerator;
-(void)setSavedHeaders:(id)arg1 ;
-(char)hasAnyHiddenTrailingEmptyQuote;
-(NSArray *)mixedContent;
-(NSString *)HTML;
-(id)initWithLibraryMessage:(id)arg1 ;
-(char)isRichTextMessage;
-(MFPlainTextDocument *)plaintextAlternative;
-(MFLibraryMessage *)libraryMessage;
-(void)setToRecipients:(id)arg1 ;
-(void)dealloc;
-(id)attachments;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(NSArray *)placeholders;
@end

