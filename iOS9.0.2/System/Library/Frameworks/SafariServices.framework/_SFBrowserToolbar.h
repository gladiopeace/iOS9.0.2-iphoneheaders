/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFToolbar.h>

@protocol _SFBrowserToolbarDelegate, _SFBrowserToolbarDataSource;
@class UIBarButtonItem;

@interface _SFBrowserToolbar : _SFToolbar {

	UIBarButtonItem* _backItem;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _openInSafariItem;
	id<_SFBrowserToolbarDelegate> _browserDelegate;
	id<_SFBrowserToolbarDataSource> _dataSource;
	UIBarButtonItem* _actionItem;

}

@property (assign,nonatomic,__weak) id<_SFBrowserToolbarDelegate> browserDelegate;              //@synthesize browserDelegate=_browserDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_SFBrowserToolbarDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * actionItem;                                    //@synthesize actionItem=_actionItem - In the implementation block
-(id)_toolbarItems;
-(void)backButtonPressed;
-(void)forwardButtonPressed;
-(void)actionButtonPressed;
-(void)openInSafariButtonPressed;
-(void)updateButtonStates;
-(void)addBookmarkButtonPressed;
-(CGRect)popoverPresentationRectForButtonItem:(id)arg1 ;
-(id<_SFBrowserToolbarDelegate>)browserDelegate;
-(void)setBrowserDelegate:(id<_SFBrowserToolbarDelegate>)arg1 ;
-(UIBarButtonItem *)actionItem;
-(void)setDataSource:(id<_SFBrowserToolbarDataSource>)arg1 ;
-(void)layoutSubviews;
-(id<_SFBrowserToolbarDataSource>)dataSource;
-(char)isMinibar;
@end

