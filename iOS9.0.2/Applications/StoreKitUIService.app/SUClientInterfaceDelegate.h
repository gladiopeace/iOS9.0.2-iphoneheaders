/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegate <NSObject>
@optional
-(void)clientInterface:(id)arg1 exitStoreWithReason:(int)arg2;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(char)arg2;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(char)arg2;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(char)arg2 withAnimation:(int)arg3;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(int)arg2 animated:(char)arg3;
-(void)returnToLibraryForClientInterface:(id)arg1;
-(id)previewOverlayForClientInterface:(id)arg1;
-(id)scriptInterfaceForClientInterface:(id)arg1;
-(id)tabBarControllerForClientInterface:(id)arg1;

@end

