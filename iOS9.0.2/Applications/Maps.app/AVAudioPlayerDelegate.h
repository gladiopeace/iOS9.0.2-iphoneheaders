/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(char)arg2;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned)arg2;
-(void)audioPlayerEndInterruption:(id)arg1;

@end

