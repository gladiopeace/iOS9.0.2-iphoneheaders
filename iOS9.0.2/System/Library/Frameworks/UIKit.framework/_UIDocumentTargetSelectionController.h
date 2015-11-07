/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIDocumentPickerServiceViewController.h>

@protocol _UIDocumentTargetSelectionControllerDelegate;
@class NSURL, _UIDocumentPickerContainerViewController, UINavigationController, _UINavigationControllerPalette, UIImageView, UILabel, NSArray, NSString;

@interface _UIDocumentTargetSelectionController : UIViewController <_UIDocumentPickerServiceViewController> {

	id<_UIDocumentTargetSelectionControllerDelegate> _weak_delegate;
	_UIDocumentPickerContainerViewController* _containerViewController;
	UINavigationController* _embeddedNavController;
	_UINavigationControllerPalette* _palette;
	UIImageView* _iconView;
	UILabel* _filesLabel;
	id<_UIDocumentTargetSelectionControllerDelegate> _delegate;
	NSArray* _itemsToMove;

}

@property (assign,nonatomic,__weak) id<_UIDocumentTargetSelectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * itemsToMove;                                                       //@synthesize itemsToMove=_itemsToMove - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSURL * uploadURL; 
+(id)_loadThumbnailForURL:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 wantsBorder:(char*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_UIDocumentTargetSelectionControllerDelegate>)arg1 ;
-(id<_UIDocumentTargetSelectionControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSURL *)uploadURL;
-(void)setSortOrder:(int)arg1 ;
-(id)pickableTypes;
-(unsigned)pickerMode;
-(int)sortOrder;
-(id)initWithItemsToMove:(id)arg1 ;
-(void)_setContainerViewController:(id)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)setItemsToMove:(NSArray *)arg1 ;
-(void)_setIconViewImage:(id)arg1 border:(char)arg2 ;
-(void)updatePalette;
-(void)setupNavigationItemForPicker:(id)arg1 isRoot:(char)arg2 ;
-(void)didSelectItem:(id)arg1 ;
-(char)shouldShowSearch;
-(void)setDisplayMode:(int)arg1 ;
-(int)displayMode;
-(NSArray *)itemsToMove;
@end

