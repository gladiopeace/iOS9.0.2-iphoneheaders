/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIViewController, UITableView, NSDictionary, NSCache;

@interface ICNotesListCellHandler : NSObject {

	char _supportCompact;
	UIViewController* _viewController;
	UITableView* _tableView;
	float _imageHeight;
	NSDictionary* _identifierNibDictionary;
	NSDictionary* _sizingCells;
	NSCache* _thumbnailCache;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) float imageHeight;                                     //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) char supportCompact;                                   //@synthesize supportCompact=_supportCompact - In the implementation block
@property (nonatomic,readonly) char showCompact; 
@property (nonatomic,copy) NSDictionary * identifierNibDictionary;                  //@synthesize identifierNibDictionary=_identifierNibDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * sizingCells;                              //@synthesize sizingCells=_sizingCells - In the implementation block
@property (nonatomic,retain) NSCache * thumbnailCache;                              //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
-(id)newIdentifierNibDictionary;
-(void)registerNibsForTableView:(id)arg1 ;
-(char)supportCompact;
-(void)addIdentifierNibToDictionary:(id)arg1 ;
-(NSDictionary *)identifierNibDictionary;
-(NSDictionary *)sizingCells;
-(id)newSizingCells;
-(void)setSizingCells:(NSDictionary *)arg1 ;
-(id)sizingCellForCellClass:(Class)arg1 ;
-(char)showCompact;
-(Class)uniformRowHeightCellClass;
-(float)rowHeightForCellClass:(Class)arg1 ;
-(void)copySizingInfoToCell:(id)arg1 ;
-(void)updateTableViewRowHeight;
-(id)dequeueReusableSizingUpdatedCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)createCellWithImageView:(id)arg1 forNote:(id)arg2 atIndexPath:(id)arg3 searchResult:(id)arg4 ;
-(id)initWithViewController:(id)arg1 tableView:(id)arg2 supportCompact:(char)arg3 ;
-(void)updateForContentSizeCategoryChange;
-(id)cellForNote:(id)arg1 searchResult:(id)arg2 atIndexPath:(id)arg3 ;
-(id)emptyCellForIndexPath:(id)arg1 ;
-(void)updateThumbnailForNote:(id)arg1 inCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)invalidateCachedThumbnailForNote:(id)arg1 ;
-(void)invalidateAllCachedThumbnails;
-(Class)cellClassForNote:(id)arg1 ;
-(void)setSupportCompact:(char)arg1 ;
-(void)setIdentifierNibDictionary:(NSDictionary *)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(float)screenScale;
-(NSCache *)thumbnailCache;
-(void)setThumbnailCache:(NSCache *)arg1 ;
-(void)setImageHeight:(float)arg1 ;
-(float)imageHeight;
@end

