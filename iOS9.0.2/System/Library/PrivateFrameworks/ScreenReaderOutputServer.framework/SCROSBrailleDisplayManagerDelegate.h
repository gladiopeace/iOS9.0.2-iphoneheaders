/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
@required
-(void)handleDisplayModeChanged:(id)arg1;
-(void)handleBrailleDidDisplay:(id)arg1;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
-(void)handleBrailleDidShowNextAnnouncement:(id)arg1;
-(void)configurationDidChange;
-(void)handleBrailleTableFailedToLoad:(id)arg1;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1;
-(void)handleBrailleDriverDidLoad;
-(void)handleBrailleDriverDisconnected;
-(void)handleBrailleKeypress:(id)arg1;
-(void)handleBrailleKeyWillMemorize:(id)arg1;
-(void)handleBrailleKeyMemorize:(id)arg1;
-(void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
-(void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
-(void)handlePlayBorderHitSound;
-(void)handlePlayCommandNotSupportedSound;

@end

