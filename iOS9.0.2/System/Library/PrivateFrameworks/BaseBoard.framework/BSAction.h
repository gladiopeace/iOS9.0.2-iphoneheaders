/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class BSSettings, NSObject, BSTimer, BSActionResponse, BSAuditHistory, BSMachPortReceiveRight, BSMachPortTransferableSendRight, BSPortDeathWatcher, NSString;

@interface BSAction : NSObject <BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding> {

	BSSettings* _info;
	char _hasTimeout;
	char _expectsResponse;
	char _originatingAction;
	unsigned long long _timeout;
	NSObject*<OS_dispatch_queue> _queue;
	char _queue_hasBeenNeutered;
	char _queue_invalidated;
	/*^block*/id _queue_handler;
	SCD_Struct_BS8 _queue_listenerTokens;
	BSTimer* _queue_timer;
	/*^block*/id _queue_invalidationHandler;
	BSActionResponse* _queue_response;
	BSAuditHistory* _queue_auditHistory;
	BSMachPortReceiveRight* _queue_receiveRight;
	BSMachPortTransferableSendRight* _queue_sendRight;
	BSPortDeathWatcher* _queue_portDeathWatcher;

}

@property (nonatomic,copy,readonly) BSSettings * info;              //@synthesize info=_info - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)UIActionType;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(char)canSendResponse;
-(void)sendResponse:(id)arg1 ;
-(char)isValid;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(BSSettings *)info;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(void)_queue_addAuditHistoryWithFormat:(id)arg1 ;
-(void)_queue_setInvalidatedAndNotify:(char)arg1 errorCode:(int)arg2 ;
-(void)_queue_callHandlerWithResponse:(id)arg1 ;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 safely:(char)arg2 ;
-(id)_queue_handlerDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
