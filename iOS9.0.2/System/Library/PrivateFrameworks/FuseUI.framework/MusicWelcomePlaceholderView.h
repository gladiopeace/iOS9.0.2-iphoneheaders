/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@class UIImageView, MusicClientContext, NSString, SKUIClientContext;

@interface MusicWelcomePlaceholderView : UIView <MusicClientContextConsuming> {

	UIImageView* _backgroundImageView;
	float _logoImageTopInset;
	UIImageView* _logoImageView;
	MusicClientContext* _clientContext;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)_reloadWelcomePlaceholderImages;
-(void)_handleUpdatableAssetsControllerDidChangeNotification:(id)arg1 ;
-(id)_resourceNameForWelcomeScreenImageConfiguration:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

