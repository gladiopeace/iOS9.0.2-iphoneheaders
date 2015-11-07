/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIStatusOverlayProvider;
@class SKUIClientContext, UIView, UINavigationController, _UINavigationControllerPalette, UIViewController;

@interface SKUINavigationControllerAssistant : NSObject {

	SKUIClientContext* _clientContext;
	UIView* _childPaletteView;
	char _hidesShadow;
	UINavigationController* _navigationController;
	_UINavigationControllerPalette* _paletteBackgroundView;
	id<SKUIStatusOverlayProvider> _statusOverlayProvider;
	UIViewController* _statusOverlayViewController;

}

@property (nonatomic,__weak,readonly) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) char hidesShadow;                                                    //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (nonatomic,retain) id<SKUIStatusOverlayProvider> statusOverlayProvider;                 //@synthesize statusOverlayProvider=_statusOverlayProvider - In the implementation block
+(id)existingAssistantForNavigationController:(id)arg1 ;
+(id)assistantForNavigationController:(id)arg1 clientContext:(id)arg2 ;
-(void)dealloc;
-(char)hidesShadow;
-(void)setHidesShadow:(char)arg1 ;
-(UINavigationController *)navigationController;
-(void)willShowViewController:(id)arg1 animated:(char)arg2 ;
-(SKUIClientContext *)clientContext;
-(void)setPalettePinningBarHidden:(char)arg1 ;
-(void)setPaletteView:(id)arg1 animated:(char)arg2 ;
-(void)setStatusOverlayProvider:(id<SKUIStatusOverlayProvider>)arg1 ;
-(id<SKUIStatusOverlayProvider>)statusOverlayProvider;
-(void)setStatusOverlayProvider:(id)arg1 animated:(char)arg2 ;
-(void)_previewDocumentChangeNotification:(id)arg1 ;
-(id)_initWithNavigationController:(id)arg1 clientContext:(id)arg2 ;
-(void)_transitionToPaletteView:(id)arg1 animated:(char)arg2 operation:(int)arg3 ;
-(void)_setStatusOverlayProvider:(id)arg1 animated:(char)arg2 ;
-(void)_hideOverlayView:(id)arg1 animated:(char)arg2 ;
-(void)_showOverlayView:(id)arg1 previousOverlayView:(id)arg2 animated:(char)arg3 ;
-(void)_hideChildPaletteView:(id)arg1 animated:(char)arg2 ;
@end

