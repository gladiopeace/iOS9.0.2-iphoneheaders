/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBATableViewControler.h>

@protocol FBAProjectEntity;
@class FBAResponseSummaryViewController, UIView, NSArray, NSMutableArray, FBABugForm;

@interface FBAProjectListViewController : FBATableViewControler {

	char _showsFormsCount;
	FBAResponseSummaryViewController* _detailViewController;
	UIView* _loadingView;
	NSArray* _inboxes;
	NSArray* _sortedProjects;
	NSArray* _projectSortDescriptors;
	NSMutableArray* _fbaDataObservers;
	FBABugForm* _pendingBugForm;
	id<FBAProjectEntity> _pendingProject;

}

@property (nonatomic,retain) FBAResponseSummaryViewController * detailViewController;              //@synthesize detailViewController=_detailViewController - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                                 //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) NSArray * inboxes;                                                    //@synthesize inboxes=_inboxes - In the implementation block
@property (nonatomic,retain) NSArray * sortedProjects;                                             //@synthesize sortedProjects=_sortedProjects - In the implementation block
@property (nonatomic,retain) NSArray * projectSortDescriptors;                                     //@synthesize projectSortDescriptors=_projectSortDescriptors - In the implementation block
@property (assign,nonatomic) char showsFormsCount;                                                 //@synthesize showsFormsCount=_showsFormsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * fbaDataObservers;                                    //@synthesize fbaDataObservers=_fbaDataObservers - In the implementation block
@property (nonatomic,retain) FBABugForm * pendingBugForm;                                          //@synthesize pendingBugForm=_pendingBugForm - In the implementation block
@property (nonatomic,retain) id<FBAProjectEntity> pendingProject;                                  //@synthesize pendingProject=_pendingProject - In the implementation block
-(void)setFbaDataObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fbaDataObservers;
-(void)updateFromStore;
-(NSArray *)sortedProjects;
-(void)hideLoadingView;
-(NSArray *)projectSortDescriptors;
-(void)setSortedProjects:(NSArray *)arg1 ;
-(void)createNewFeedback:(id)arg1 ;
-(void)setPendingProject:(id<FBAProjectEntity>)arg1 ;
-(void)beginBugForProject:(id)arg1 sender:(id)arg2 ;
-(void)beginBugformProjects:(id)arg1 sender:(id)arg2 ;
-(id<FBAProjectEntity>)pendingProject;
-(void)setPendingBugForm:(FBABugForm *)arg1 ;
-(void)displayPickerForBugForms:(id)arg1 sender:(id)arg2 ;
-(NSArray *)inboxes;
-(FBABugForm *)pendingBugForm;
-(id)projectNameWithFormCountForProject:(id)arg1 ;
-(void)setInboxes:(NSArray *)arg1 ;
-(void)setProjectSortDescriptors:(NSArray *)arg1 ;
-(char)showsFormsCount;
-(void)setShowsFormsCount:(char)arg1 ;
-(void)reloadView;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)awakeFromNib;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)setDetailViewController:(FBAResponseSummaryViewController *)arg1 ;
-(FBAResponseSummaryViewController *)detailViewController;
-(void)commonInit;
-(void)showLoadingView;
-(void)showSettings;
-(void)setLoadingView:(UIView *)arg1 ;
-(UIView *)loadingView;
@end

