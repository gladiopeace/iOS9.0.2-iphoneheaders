/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKBookViewController, AEBookInfo, UIBarButtonItem, UIViewController, UIView;

@interface BKOutputAction : NSObject {

	BKBookViewController* _bookViewControllerForBookInfo;
	AEBookInfo* _bookInfo;
	UIBarButtonItem* _barButtonItem;
	UIViewController* _ancestorViewController;
	UIView* _sender;

}

@property (assign,nonatomic) BKBookViewController * bookViewControllerForBookInfo;              //@synthesize bookViewControllerForBookInfo=_bookViewControllerForBookInfo - In the implementation block
@property (nonatomic,retain) AEBookInfo * bookInfo;                                             //@synthesize bookInfo=_bookInfo - In the implementation block
@property (assign,nonatomic) UIBarButtonItem * barButtonItem;                                   //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic) UIViewController * ancestorViewController;                         //@synthesize ancestorViewController=_ancestorViewController - In the implementation block
@property (nonatomic,retain) UIView * sender;                                                   //@synthesize sender=_sender - In the implementation block
+(char)deviceHasCapability;
-(AEBookInfo *)bookInfo;
-(void)setBookInfo:(AEBookInfo *)arg1 ;
-(void)setAncestorViewController:(UIViewController *)arg1 ;
-(void)setBookViewControllerForBookInfo:(BKBookViewController *)arg1 ;
-(BKBookViewController *)bookViewControllerForBookInfo;
-(UIViewController *)ancestorViewController;
-(char)isActionEnabled;
-(void)cancel;
-(void)dealloc;
-(id)title;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIView *)sender;
-(void)setSender:(UIView *)arg1 ;
-(void)performAction:(id)arg1 ;
@end

