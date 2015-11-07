/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIModalSourceViewProviderDelegate;
@class UIView, UIBarButtonItem;

@interface SKUIModalSourceViewProvider : NSObject {

	id<SKUIModalSourceViewProviderDelegate> _delegate;
	char _hideOriginalSourceView;
	UIView* _originalSourceView;
	UIBarButtonItem* _sourceButtonBarItem;
	id _userInfo;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) id<SKUIModalSourceViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * originalSourceView;                                          //@synthesize originalSourceView=_originalSourceView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * sourceButtonBarItem;                                //@synthesize sourceButtonBarItem=_sourceButtonBarItem - In the implementation block
@property (nonatomic,retain) id userInfo;                                                          //@synthesize userInfo=_userInfo - In the implementation block
-(void)setDelegate:(id<SKUIModalSourceViewProviderDelegate>)arg1 ;
-(id<SKUIModalSourceViewProviderDelegate>)delegate;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setOriginalSourceView:(UIView *)arg1 ;
-(void)setSourceButtonBarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)sourceButtonBarItem;
-(UIView *)originalSourceView;
-(id)animationView;
-(void)hideOriginalSourceView;
-(void)showOriginalSourceView;
@end

