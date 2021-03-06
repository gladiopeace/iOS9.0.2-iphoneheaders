/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKContentViewController.h>
#import <iBooks/BKWebViewDelegate.h>

@protocol OS_dispatch_queue;
@class BKWebView, UIImageView, NSObject, NSString;

@interface BKCoverContentViewController : BKContentViewController <BKWebViewDelegate> {

	BKWebView* _coverWebView;
	UIImageView* _coverImage;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) UIImageView * coverImage;              //@synthesize coverImage=_coverImage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingContentNeedsFilter;
-(void)releaseViews;
-(char)contentNeedsFilter;
-(void)_releaseWebView;
-(void)setCoverImage:(id)arg1 isUndesirable:(char)arg2 ;
-(id)_getURLToLoad;
-(void)loadViewUIImage;
-(char)isReusable;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)currentLocation;
-(int)ordinal;
-(void)setCoverImage:(UIImageView *)arg1 ;
-(UIImageView *)coverImage;
@end

