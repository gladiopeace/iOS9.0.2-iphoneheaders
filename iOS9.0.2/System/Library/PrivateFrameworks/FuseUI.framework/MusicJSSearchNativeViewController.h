/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicJSNativeViewController.h>
#import <libobjc.A.dylib/MusicJSSearchNativeViewController.h>

@protocol MusicJSSearchNativeViewController <JSExport,MusicJSNativeViewController>
@required
-(void)selectMediaPickerItem:(id)arg1;
-(void)setStoreSearchResultsDocument:(id)arg1 :(id)arg2;
-(void)setSearchTerm:(id)arg1;

@end


@protocol MusicJSSearchNativeViewControllerDelegate;
@class IKDOMDocument, IKAppDocument, NSDictionary, IKJSNavigationDocument;

@interface MusicJSSearchNativeViewController : MusicJSNativeViewController <MusicJSSearchNativeViewController> {

	IKDOMDocument* _storeSearchResultsJSDocument;
	id<MusicJSSearchNativeViewControllerDelegate> _delegate;
	IKAppDocument* _storeSearchResultsDocument;
	NSDictionary* _storeSearchResultsDocumentOptions;

}

@property (assign,nonatomic,__weak) id<MusicJSSearchNativeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IKAppDocument * storeSearchResultsDocument;                               //@synthesize storeSearchResultsDocument=_storeSearchResultsDocument - In the implementation block
@property (nonatomic,readonly) NSDictionary * storeSearchResultsDocumentOptions;                         //@synthesize storeSearchResultsDocumentOptions=_storeSearchResultsDocumentOptions - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
-(void)setDelegate:(id<MusicJSSearchNativeViewControllerDelegate>)arg1 ;
-(id<MusicJSSearchNativeViewControllerDelegate>)delegate;
-(id)nativeViewIdentifier;
-(void)navigationDocumentDidChange;
-(IKAppDocument *)storeSearchResultsDocument;
-(void)selectMediaPickerItem:(id)arg1 ;
-(void)setStoreSearchResultsDocument:(id)arg1 :(id)arg2 ;
-(NSDictionary *)storeSearchResultsDocumentOptions;
-(void)setSearchTerm:(id)arg1 ;
@end

