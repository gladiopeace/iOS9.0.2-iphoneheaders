/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableDictionary, NSArray;

@interface IMDChatRegistry : NSObject {

	NSRecursiveLock* _chatsLock;
	NSMutableDictionary* _chats;
	char _isLoading;
	char _doneLoadingAfterMerge;

}

@property (nonatomic,readonly) NSArray * chats; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)existingChatWithGUID:(id)arg1 ;
-(void)systemDidUnlock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)removeChat:(id)arg1 ;
-(NSArray *)chats;
-(char)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 ;
-(void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(char)arg4 ;
-(id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3 ;
-(void)removeMessage:(id)arg1 fromChat:(id)arg2 ;
-(id)_chatInfo;
-(void)_forceReloadChats:(char)arg1 ;
-(id)existingChatForID:(id)arg1 account:(id)arg2 ;
-(void)addChat:(id)arg1 ;
-(id)existingChatWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)existingChatForRoom:(id)arg1 account:(id)arg2 ;
-(id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5 ;
-(void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 ;
-(void)updateLastMessageForChat:(id)arg1 ;
-(char)updateUnreadCountForChat:(id)arg1 ;
-(void)updateStateForChat:(id)arg1 ;
-(char)loadChatsWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)_saveChats;
-(id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)_makeAllAttachmentsClassC;
-(id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 ;
-(id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7 ;
-(id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 ;
-(id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 ;
-(void)updateStateForChat:(id)arg1 forcePost:(char)arg2 ;
-(void)addItem:(id)arg1 toChat:(id)arg2 ;
-(void)removeItem:(id)arg1 fromChat:(id)arg2 ;
-(void)addMessage:(id)arg1 toChat:(id)arg2 ;
-(id)_chatInfoForSaving;
-(char)saveChats;
@end

