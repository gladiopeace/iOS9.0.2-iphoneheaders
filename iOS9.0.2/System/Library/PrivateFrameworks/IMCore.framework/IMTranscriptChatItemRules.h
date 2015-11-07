/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMChatItemRules.h>

@class IMChat, NSArray, NSMutableArray, IMChatItem, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {

	IMChat* _chat;
	NSArray* _items;
	NSMutableArray* _chatItems;
	IMChatItem* _nextStaleChatItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_items;
-(void)_setItems:(id)arg1 ;
-(void)_invalidate;
-(char)shouldShowRaiseMessageStatus;
-(id)_initWithChat:(id)arg1 ;
-(id)_chatItems;
-(void)_didProcessChatItems:(id)arg1 ;
-(char)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2 ;
-(id)_nextStaleChatItem;
-(void)_setNextStaleChatItem:(id)arg1 ;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2 ;
-(id)testChatItems;
-(id)chatItemForIMChatItem:(id)arg1 ;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2 ;
-(char)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3 ;
@end

