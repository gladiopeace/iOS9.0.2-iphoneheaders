/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HSSetupStepDelegate <NSObject>
@required
-(void)setupStepDidChange:(id)arg1;
-(void)setupStepDidCancel:(id)arg1;
-(void)setupStep:(id)arg1 didProvideSetupCode:(id)arg2;
-(void)setupStepDidFinish:(id)arg1;
-(id)accessoryDescriptionForSetupStep:(id)arg1;
-(void)setupStep:(id)arg1 didFailWithError:(id)arg2;

@end

