/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol _UIDocumentPickerOverviewDelegate;
@class NSArray, NSString;

@interface _UIDocumentPickerOverviewViewController : UITableViewController {

	char _manage;
	id<_UIDocumentPickerOverviewDelegate> _delegate;
	NSArray* _allPickers;
	NSString* _currentExtensionIdentifier;
	NSArray* _auxiliaryOptions;
	NSArray* _fileTypes;
	unsigned _mode;

}

@property (assign,nonatomic,__weak) id<_UIDocumentPickerOverviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * allPickers;                                               //@synthesize allPickers=_allPickers - In the implementation block
@property (nonatomic,retain) NSString * currentExtensionIdentifier;                              //@synthesize currentExtensionIdentifier=_currentExtensionIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * auxiliaryOptions;                                         //@synthesize auxiliaryOptions=_auxiliaryOptions - In the implementation block
@property (nonatomic,retain) NSArray * fileTypes;                                                //@synthesize fileTypes=_fileTypes - In the implementation block
@property (assign,nonatomic) unsigned mode;                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char manage;                                                        //@synthesize manage=_manage - In the implementation block
-(void)setDelegate:(id<_UIDocumentPickerOverviewDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<_UIDocumentPickerOverviewDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setAuxiliaryOptions:(NSArray *)arg1 ;
-(NSArray *)auxiliaryOptions;
-(NSArray *)allPickers;
-(id)initWithFileTypes:(id)arg1 mode:(unsigned)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(char)arg4 ;
-(void)updateContents;
-(void)setFileTypes:(NSArray *)arg1 ;
-(void)setManage:(char)arg1 ;
-(NSArray *)fileTypes;
-(char)manage;
-(void)setAllPickers:(NSArray *)arg1 ;
-(void)updatePreferredContentSize;
-(void)setCurrentExtensionIdentifier:(NSString *)arg1 ;
-(NSString *)currentExtensionIdentifier;
@end

