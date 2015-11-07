/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <Foundation/NSOperation.h>

@protocol IMOperationDelegate;
@interface IMOperation : NSOperation {

	double _progressUpdateInterval;
	float _progress;
	double _lastUpdate;
	int _backgroundTaskID;
	struct {
		unsigned hasStarted : 1;
		unsigned hasProgress : 1;
		unsigned hasFinished : 1;
		unsigned hasCancelled : 1;
		unsigned hasError : 1;
		unsigned hasResponseThread : 1;
	}  _delegateFlags;
	id<IMOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IMOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float progress;                                       //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double progressUpdateInterval;                        //@synthesize progressUpdateInterval=_progressUpdateInterval - In the implementation block
-(void)performOperation;
-(void)sendCancelledMessage;
-(void)sendFinishedMessage;
-(void)setBackgroundExpirationHandler:(/*^block*/id)arg1 ;
-(void)sendStartedMessage;
-(char)isApexOrLater;
-(void)_performDelegateSelector:(SEL)arg1 ;
-(double)progressUpdateInterval;
-(void)_sendError:(id)arg1 ;
-(void)sendHasProgressMessage;
-(void)sendError:(id)arg1 ;
-(void)setProgressUpdateInterval:(double)arg1 ;
-(void)setDelegate:(id<IMOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<IMOperationDelegate>)delegate;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)main;
@end

