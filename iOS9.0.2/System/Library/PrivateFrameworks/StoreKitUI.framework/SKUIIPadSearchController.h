/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUISearchFieldDelegate.h>

@class SKUIClientContext, UIViewController, SKUISearchFieldController, NSString;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate> {

	SKUIClientContext* _clientContext;
	UIViewController* _parentViewController;
	SKUISearchFieldController* _searchFieldController;

}

@property (nonatomic,__weak,readonly) UIViewController * parentViewController;                 //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUISearchFieldController * searchFieldController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIViewController *)parentViewController;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
-(id)newSearchFieldBarItem;
-(void)reloadSearchField;
-(void)_termDidChangeNotification:(id)arg1 ;
-(id)_searchFieldController;
-(void)setNumberOfSearchResults:(int)arg1 ;
-(void)searchFieldController:(id)arg1 requestSearch:(id)arg2 ;
-(SKUISearchFieldController *)searchFieldController;
-(void)setSearchFieldPlaceholderText:(id)arg1 ;
-(void)setSearchFieldText:(id)arg1 ;
@end

