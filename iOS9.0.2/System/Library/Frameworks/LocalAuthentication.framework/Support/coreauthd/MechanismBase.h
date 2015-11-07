/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LAUIDelegate;
@class NSDictionary, NSData, NSString;

@interface MechanismBase : NSObject {

	/*^block*/id _replyToRun;
	NSDictionary* _internalOptions;
	NSDictionary* _policyOptions;
	NSDictionary* _activationParams;
	id<LAUIDelegate> _eventsDelegate;
	int _eventIdentifier;
	NSData* _acmContext;
	int _remoteViewController;
	NSString* _remoteViewControllerName;

}

@property (nonatomic,readonly) NSDictionary * internalOptions;                    //@synthesize internalOptions=_internalOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * policyOptions;                      //@synthesize policyOptions=_policyOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * activationParams;                     //@synthesize activationParams=_activationParams - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIDelegate> eventsDelegate;              //@synthesize eventsDelegate=_eventsDelegate - In the implementation block
@property (nonatomic,readonly) int eventIdentifier;                               //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * availabilityEvents; 
@property (nonatomic,readonly) NSData * acmContext;                               //@synthesize acmContext=_acmContext - In the implementation block
@property (nonatomic,readonly) int remoteViewController;                          //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,readonly) NSString * remoteViewControllerName;               //@synthesize remoteViewControllerName=_remoteViewControllerName - In the implementation block
@property (getter=isRunning,nonatomic,readonly) char running; 
@property (getter=isAvailable,nonatomic,readonly) char available; 
-(void)failAuthenticationWithError:(id)arg1 ;
-(char)isAvailableWithError:(id*)arg1 ;
-(void)noResponseEventWithParams:(id)arg1 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 skipReply:(char)arg3 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(char)isProcessedBy:(id)arg1 ;
-(char)requiresRemoteViewControllerUiWithEventProcessing:(id)arg1 ;
-(id)initWithEventIdentifier:(int)arg1 remoteViewController:(int)arg2 remoteViewControllerName:(id)arg3 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)succeedAuthenticationWithResult:(id)arg1 ;
-(id)bestEffortAvailableMechanismWithError:(id*)arg1 ;
-(id)findMechanismWithEventIdentifier:(int)arg1 ;
-(id)findMechanismWithClass:(Class)arg1 ;
-(id)backgroundMechanismForEventProcessing:(id)arg1 ;
-(int)remoteViewControllerForEventProcessing:(id)arg1 ;
-(NSDictionary *)availabilityEvents;
-(id)adjustStringForNestedDescription:(id)arg1 ;
-(char)requiresUiWithEventProcessing:(id)arg1 ;
-(NSDictionary *)internalOptions;
-(NSDictionary *)policyOptions;
-(NSDictionary *)activationParams;
-(void)setActivationParams:(NSDictionary *)arg1 ;
-(id<LAUIDelegate>)eventsDelegate;
-(void)setEventsDelegate:(id<LAUIDelegate>)arg1 ;
-(NSData *)acmContext;
-(NSString *)remoteViewControllerName;
-(int)eventIdentifier;
-(void)event:(int)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(char)isAvailable;
-(int)remoteViewController;
-(char)isRunning;
-(void)willFinish;
-(void)cancelAuthentication;
@end

