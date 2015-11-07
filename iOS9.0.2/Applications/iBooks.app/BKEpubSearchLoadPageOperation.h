/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <iBooks/PaginatingWebViewDelegate.h>

@protocol BKSearchOperationDelegate;
@class AEBookInfo, BKWebView, IMPulseEvent, NSString;

@interface BKEpubSearchLoadPageOperation : NSOperation <PaginatingWebViewDelegate> {

	id<BKSearchOperationDelegate> _delegate;
	AEBookInfo* _book;
	int _ordinal;
	char _loadDone;
	BKWebView* _webView;
	IMPulseEvent* _event;

}

@property (assign,nonatomic) id<BKSearchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int ordinal;                                         //@synthesize ordinal=_ordinal - In the implementation block
@property (assign,nonatomic) char isDone;                                         //@synthesize loadDone=_loadDone - In the implementation block
@property (nonatomic,readonly) BKWebView * webView; 
@property (nonatomic,retain) AEBookInfo * searchBook;                             //@synthesize book=_book - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)pageProgressionDirectionForPaginatingWebView:(id)arg1 ;
-(void)setSearchBook:(AEBookInfo *)arg1 ;
-(AEBookInfo *)searchBook;
-(void)clearWebView;
-(void)cancel;
-(void)setDelegate:(id<BKSearchOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<BKSearchOperationDelegate>)delegate;
-(BKWebView *)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)main;
-(char)isDone;
-(void)setIsDone:(char)arg1 ;
-(int)ordinal;
-(void)setOrdinal:(int)arg1 ;
@end

