/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>

@class SSAuthenticationContext, SSVShowDialogRequest;

@interface ServiceUIAlertView : UIAlertView {

	SSAuthenticationContext* _authenticationContext;
	char _runsModal;
	SSVShowDialogRequest* _showDialogRequest;

}
-(void)_storeKitUI_finishAlertWithResponse:(id)arg1 error:(id)arg2 ;
-(void)show;
-(void)setRunsModal:(char)arg1 ;
-(id)initWithAuthenticationContext:(id)arg1 ;
@end

