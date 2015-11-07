/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PHAudioCallControlsViewDelegate <NSObject>
@required
-(unsigned)controlTypeAtRow:(unsigned)arg1 column:(unsigned)arg2;
-(unsigned)numberOfRowsInControlsView:(id)arg1;
-(unsigned)numberOfColumnsInControlsView:(id)arg1;
-(char)controlTypeIsEnabled:(unsigned)arg1;
-(char)controlTypeIsSelected:(unsigned)arg1;
-(id)imageNameForControlType:(unsigned)arg1;
-(id)titleForControlType:(unsigned)arg1;
-(void)controlTypeTapped:(unsigned)arg1 forView:(id)arg2;
-(void)controlTypeShortPressed:(unsigned)arg1;
-(void)controlTypeLongPressed:(unsigned)arg1;

@end

