/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SVSTranscriptDelegate <NSObject>
@required
-(id)viewControllerDelegateForTranscript:(id)arg1;
-(void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;
-(void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;
-(void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;
-(void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;
-(void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;
-(void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;
-(void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;

@end

