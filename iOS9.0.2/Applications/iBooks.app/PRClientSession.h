/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol PRClientSessionDelegate;
@class PRDNCSession, NSArray, ATConnection, NSString;

@interface PRClientSession : NSObject <ATConnectionDelegate> {

	id<PRClientSessionDelegate> _delegate;
	PRDNCSession* _dncSession;
	char _isSyncing;
	unsigned _currentlySyncingAssetIndex;
	NSArray* _clientAssetIDs;
	ATConnection* _connection;

}

@property (assign,nonatomic) id<PRClientSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char sessionStarted; 
@property (nonatomic,readonly) char isSyncing;                                  //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,retain) PRDNCSession * dncSession;                         //@synthesize dncSession=_dncSession - In the implementation block
@property (nonatomic,retain) NSArray * clientAssetIDs;                          //@synthesize clientAssetIDs=_clientAssetIDs - In the implementation block
@property (nonatomic,retain) ATConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)minHostVersion;
+(void)setUnitTestHacks;
+(unsigned)clientVersion;
-(int)cancelSyncing;
-(int)restartSyncing;
-(void)stopListeningForProgress;
-(void)setDncSession:(PRDNCSession *)arg1 ;
-(void)setClientAssetIDs:(NSArray *)arg1 ;
-(PRDNCSession *)dncSession;
-(void)startListeningForProgress;
-(NSArray *)clientAssetIDs;
-(char)isSyncing;
-(void)setDelegate:(id<PRClientSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PRClientSessionDelegate>)delegate;
-(ATConnection *)connection;
-(void)setConnection:(ATConnection *)arg1 ;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(char)sessionStarted;
-(int)stopSession;
-(int)startSession;
@end

