/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, AEBookInfo, NSArray, NSString;

@interface BKAppearanceFontViewController : BKViewController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	char _shownCannotDownloadFontAlert;
	char _disappearing;
	AEBookInfo* _book;
	NSArray* _fonts;

}

@property (nonatomic,retain) AEBookInfo * book;                                    //@synthesize book=_book - In the implementation block
@property (nonatomic,retain) NSArray * fonts;                                      //@synthesize fonts=_fonts - In the implementation block
@property (assign,getter=isDisappearing,nonatomic) char disappearing;              //@synthesize disappearing=_disappearing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)releaseViews;
-(void)tableView:(id)arg1 setSelectionState:(char)arg2 cell:(id)arg3 ;
-(AEBookInfo *)book;
-(void)setBook:(AEBookInfo *)arg1 ;
-(void)stylizeForTheme;
-(void)fontDownloadFailed:(id)arg1 ;
-(id)indexPathForSelectedFont;
-(void)setDisappearing:(char)arg1 ;
-(float)fontSizeForFontFamilyName:(id)arg1 ;
-(void)stopDownloadingFont:(id)arg1 ;
-(void)downloadFont:(id)arg1 ;
-(char)isDisappearing;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)contentSize;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setFonts:(NSArray *)arg1 ;
-(void)setTheme:(id)arg1 ;
-(NSArray *)fonts;
@end

