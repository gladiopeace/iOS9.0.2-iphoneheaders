/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol COSAppleIDLinkerDelegate <NSObject>
@optional
-(void)appleIDLinkerWillStartSecondFactorAuthentication:(id)arg1;
-(void)appleIDLinkerDidFinishSecondFactorAuthentication:(id)arg1;

@required
-(void)appleIDLinker:(id)arg1 didFinishWithSuccess:(char)arg2 error:(id)arg3;
-(id)viewControllerToPresentSecondFactorUIForAppleIDLinker:(id)arg1;

@end

