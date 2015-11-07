/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKAuthenticatorDelegate <NSObject>
@optional
-(void)authenticatorWillRestartEvaluation:(id)arg1;
-(void)authenticatorDidEncounterFingerOn:(id)arg1;
-(void)authenticatorDidEncounterFingerOff:(id)arg1;
-(void)authenticatorDidEncounterMatchMiss:(id)arg1;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dismissPasscodeRemoteViewController;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dismissPassphraseRemoteViewController;

@end

