/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXOratorDelegate <NSObject>
@optional
-(void)oratorDidFinishSpeaking:(id)arg1;
-(void)oratorDidPauseSpeaking:(id)arg1;
-(void)oratorDidResumeSpeaking:(id)arg1;
-(void)oratorDidStartSpeaking:(id)arg1;
-(void)oratorDidCancelSpeaking:(id)arg1;
-(void)orator:(id)arg1 willSpeakRange:(NSRange)arg2 ofContent:(id)arg3;

@end

