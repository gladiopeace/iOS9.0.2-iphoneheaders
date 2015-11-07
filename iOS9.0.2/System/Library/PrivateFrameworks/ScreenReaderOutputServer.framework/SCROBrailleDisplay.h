/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <libobjc.A.dylib/SCROBrailleDisplayCommandDispatcherDelegate.h>

@protocol SCROBrailleDisplayDelegate, SCROBrailleDisplayCommandDispatcherProtocol, SCROBrailleDriverProtocol, SCROIOElementProtocol;
@class NSLock, SCROBrailleLine, NSString, SCROBrailleEventDispatcher;

@interface SCROBrailleDisplay : NSObject <SCROBrailleDisplayCommandDispatcherDelegate> {

	NSLock* _contentLock;
	id<SCROBrailleDisplayDelegate> _delegate;
	id<SCROBrailleDisplayCommandDispatcherProtocol> _commandDispatcher;
	id<SCROBrailleDriverProtocol> _brailleDriver;
	id<SCROIOElementProtocol> _ioElement;
	SCROBrailleLine* _brailleLine;
	SCROBrailleLine* _inputBrailleLine;
	int _contractionMode;
	int _inputContractionMode;
	char _isInBrailleEntryMode;
	char _showEightDot;
	char _inputEightDot;
	char _shouldBatchUpdates;
	char _needsUpdating;
	char _automaticBrailleTranslationEnabled;
	NSString* _driverIdentifier;
	NSString* _driverModelIdentifier;
	int _mainSize;
	int _statusSize;
	char _postsKeyboardEvents;
	int _brailleInputMode;
	SCD_Struct_SC2 _status;
	SCROBrailleEventDispatcher* _eventDispatcher;
	CFRunLoopRef _runLoop;
	CFRunLoopTimerRef _inputEventTimer;
	CFRunLoopTimerRef _blinkerEventTimer;
	char _blinkingEnabled;
	char _inputAllowed;
	char _inputEnabled;
	SCD_Struct_SC5* _input;
	char _isValid;
	char _delegateWantsDisplayCallback;

}

@property (assign,nonatomic) char delegateWantsDisplayCallback; 
@property (assign,nonatomic) char inputAllowed;                                    //@synthesize inputAllowed=_inputAllowed - In the implementation block
@property (assign,nonatomic) char automaticBrailleTranslationEnabled;              //@synthesize automaticBrailleTranslationEnabled=_automaticBrailleTranslationEnabled - In the implementation block
@property (assign,nonatomic) int inputContractionMode;                             //@synthesize inputContractionMode=_inputContractionMode - In the implementation block
@property (assign,nonatomic) char inputEightDot;                                   //@synthesize inputEightDot=_inputEightDot - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)brailleDriverClassIsValid:(Class)arg1 ;
+(id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)_updateDisplay;
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(void)handleEvent:(id)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(id)configuration;
-(char)isLoaded;
-(long)token;
-(int)mainSize;
-(int)statusSize;
-(id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4 ;
-(void)_delayedDisplayLoad;
-(void)_unloadNotification:(id)arg1 ;
-(void)_configurationChangeNotification:(id)arg1 ;
-(void)_sleepNotification:(id)arg1 ;
-(void)_runThread;
-(int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3 ;
-(void)_setBrailleFormatterHandler:(id)arg1 ;
-(void)_statusDisplayHandler:(id)arg1 ;
-(void)_aggregatedStatusHandler:(id)arg1 ;
-(void)_setDelegateWantsDisplayCallbackHandler:(id)arg1 ;
-(void)_panHandler:(id)arg1 ;
-(char)_isMemorizingKeys;
-(void)_setIsInBrailleEntryMode:(char)arg1 ;
-(void)_unloadHandler;
-(void)_configurationChangeHandler;
-(void)_simulateKeypressHandler:(id)arg1 ;
-(void)_bulkStatusAttributesHandler:(id)arg1 ;
-(void)_setBatchUpdates:(id)arg1 ;
-(void)_setBrailleFormatter:(id)arg1 ;
-(id)_statusStringWithDictionary:(id)arg1 ;
-(void)_translateBrailleStringAndPostEvent;
-(void)_updateBrailleInputFormatter;
-(void)_setBrailleInputFormatter:(id)arg1 ;
-(void)setMasterStatusCellIndex:(long)arg1 ;
-(void)_processKeyEvents:(id)arg1 ;
-(void)_appendTranslatedBrailleStringEventsToArray:(_CFArray*)arg1 ;
-(void)panLeft;
-(void)panRight;
-(char)inputAllowed;
-(id)brailleInputManager;
-(char)_hasKeyChord;
-(char)_hasPressedBrailleKeys;
-(id)_newBrailleKeyForCurrentKeyChord;
-(char)_hasBrailleChord;
-(id)_newBrailleKeyForCurrentBrailleChord;
-(void)_stopMemorization;
-(void)_delayedUnloadNotification;
-(void)_delayedConfigurationChangeNotification;
-(void)_delayedSleepNotification:(id)arg1 ;
-(void)handleCommandPanLeftForDispatcher:(id)arg1 ;
-(void)handleCommandPanRightForDispatcher:(id)arg1 ;
-(void)handleCommandMoveLeftForDispatcher:(id)arg1 ;
-(void)handleCommandMoveRightForDispatcher:(id)arg1 ;
-(void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2 ;
-(void)handleCommandDeleteForDispatcher:(id)arg1 ;
-(void)handleCommandForwardDeleteForDispatcher:(id)arg1 ;
-(void)handleCommandEscapeForDispatcher:(id)arg1 ;
-(void)handleCommandTranslateForDispatcher:(id)arg1 ;
-(void)handleCommandReturnBrailleEvent:(id)arg1 forDispatcher:(id)arg2 ;
-(void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2 ;
-(void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2 ;
-(void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2 ;
-(id)driverIdentifier;
-(id)driverModelIdentifier;
-(id)lineDescriptor;
-(id)ioElement;
-(void)setInputAllowed:(char)arg1 ;
-(void)setBrailleFormatter:(id)arg1 ;
-(id)realStatus;
-(id)virtualStatus;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(long)masterStatusCellIndex;
-(char)delegateWantsDisplayCallback;
-(void)setDelegateWantsDisplayCallback:(char)arg1 ;
-(void)setStatusAttributesWithMasterCellIndex:(long)arg1 virtualAlignment:(int)arg2 ;
-(void)simulateKeypress:(id)arg1 ;
-(void)setPrepareToMemorizeNextKey:(char)arg1 immediate:(char)arg2 ;
-(id)_newBrailleKeyboardKeyForText:(id)arg1 modifiers:(unsigned)arg2 ;
-(void)_inputEventHandler;
-(void)_blinkerEventHandler;
-(char)automaticBrailleTranslationEnabled;
-(void)setAutomaticBrailleTranslationEnabled:(char)arg1 ;
-(int)inputContractionMode;
-(void)setInputContractionMode:(int)arg1 ;
-(char)inputEightDot;
-(void)setInputEightDot:(char)arg1 ;
@end

