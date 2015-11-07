/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/AXSpeechAssetUpdater.axuiservice/AXSpeechAssetUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXUIService <NSObject>
@optional
+(id)sharedInstance;
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned)arg1;
+(id)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned)arg1;
-(char)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned)arg1;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(id)accessQueueForProcessingMessageWithIdentifier:(unsigned)arg1;
-(char)messageWithIdentifierRequiresWritingBlock:(unsigned)arg1;
-(void)processInitializationMessage:(id)arg1;
-(void)serviceWasFullyInitialized;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1;

@required
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4;

@end

