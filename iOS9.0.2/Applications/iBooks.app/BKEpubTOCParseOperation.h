/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKPaginationOperation.h>
#import <iBooks/BKWebViewDelegate.h>

@class BKWebView, IMPulseEvent, NSNumber, NSString;

@interface BKEpubTOCParseOperation : BKPaginationOperation <BKWebViewDelegate> {

	BKWebView* _paginator;
	IMPulseEvent* _event;
	NSNumber* _vertical;
	NSString* _tocIdCssRules;

}

@property (retain) IMPulseEvent * event;                            //@synthesize event=_event - In the implementation block
@property (copy) NSNumber * vertical;                               //@synthesize vertical=_vertical - In the implementation block
@property (copy) NSString * tocIdCssRules;                          //@synthesize tocIdCssRules=_tocIdCssRules - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)tocIdCssRules;
-(id)paginator;
-(id)generateTocIdCssRulesWithDocument:(id)arg1 ;
-(void)parseTOCFinishedWithVertical:(id)arg1 tocIdCssRules:(id)arg2 ;
-(void)setTocIdCssRules:(NSString *)arg1 ;
-(void)loadTOC;
-(void)parseTOC;
-(void)execute;
-(void)cancel;
-(void)dealloc;
-(IMPulseEvent *)event;
-(void)setEvent:(IMPulseEvent *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setVertical:(NSNumber *)arg1 ;
-(NSNumber *)vertical;
@end

