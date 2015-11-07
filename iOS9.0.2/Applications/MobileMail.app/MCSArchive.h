/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MCSMessageOperation.h>
#import <MobileMail/MCSAllMessagesOperation.h>

@protocol MCSAllMessagesOperation;
@class MCSMessageOperation, NSString;

@interface MCSArchive : MCSMessageOperation <MCSAllMessagesOperation> {

	MCSMessageOperation*<MCSAllMessagesOperation> _seenOrTransferOperation;
	MCSMessageOperation*<MCSAllMessagesOperation> _deleteOperation;
	char _isDeleteInPlace;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localizedErrorDescriptionForMessageCount:(unsigned)arg1 ;
-(id)localizedErrorTitleForMessageCount:(unsigned)arg1 ;
-(id)localizedShortOperationDescription;
-(char)willMarkRead;
-(char)willMarkUnread;
-(char)willUnflag;
-(char)willFlag;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(char)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(char)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(char)isRevertibleWithMessages:(id)arg1 ;
-(char)commitToAllMessagesInStore:(id)arg1 ;
-(char)revertForAllMessagesInStore:(id)arg1 ;
-(char)isRevertibleForAllMessagesInStore:(id)arg1 ;
-(void)_fetchRemoteIdForMessages:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
@end

