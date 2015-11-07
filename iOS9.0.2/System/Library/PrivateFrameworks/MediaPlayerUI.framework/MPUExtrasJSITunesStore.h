/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSITunesStore.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/MPUExtrasJSITunesStore.h>

@protocol MPUExtrasJSITunesStore <JSExport>
@optional
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2 __JS_EXPORT_AS__loadStoreURL:(id)arg3;

@required
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2;

@end

#import <libobjc.A.dylib/IKJSITunesStore.h>

@class NSString, NSDictionary, UIViewController;

@interface MPUExtrasJSITunesStore : IKJSITunesStore <SKStoreProductViewControllerDelegatePrivate, MPUExtrasJSITunesStore, IKJSITunesStore> {

	UIViewController* _formPresentationViewController;

}

@property (assign,nonatomic,__weak) UIViewController * formPresentationViewController;              //@synthesize formPresentationViewController=_formPresentationViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) NSString * cookieURL; 
@property (nonatomic,retain) id cookie; 
-(void)setFormPresentationViewController:(UIViewController *)arg1 ;
-(UIViewController *)formPresentationViewController;
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2 ;
@end

