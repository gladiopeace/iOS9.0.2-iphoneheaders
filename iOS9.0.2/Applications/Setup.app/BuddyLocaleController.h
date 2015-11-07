/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <libobjc.A.dylib/BuddyController.h>

@protocol BuddyControllerDelegate;
@class NSMutableArray, NSString, BFFLocaleDataSource;

@interface BuddyLocaleController : BuddyTableViewController <BuddyController> {

	char _fakeMode;
	NSMutableArray* _fakeViews;
	float _savedScrollPoint;
	id<BuddyControllerDelegate> _delegate;
	NSString* _language;
	NSString* _selectedLanguage;
	BFFLocaleDataSource* _localeDataSource;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * language;                                        //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * selectedLanguage;                                //@synthesize selectedLanguage=_selectedLanguage - In the implementation block
@property (nonatomic,retain) BFFLocaleDataSource * localeDataSource;                   //@synthesize localeDataSource=_localeDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localeScreenshotCachePath:(char)arg1 tag:(id)arg2 ;
+(char)controllerNeedsToRun;
-(id)initInFakeMode:(char)arg1 ;
-(NSString *)selectedLanguage;
-(void)takeScreenshots;
-(void)switchToRealMode;
-(void)setSelectedLanguage:(NSString *)arg1 ;
-(char)restoreScreenshot:(id)arg1 ;
-(BFFLocaleDataSource *)localeDataSource;
-(id)countryAtIndexPath:(id)arg1 ;
-(void)selectCountry:(id)arg1 ;
-(char)takeScreenshot:(id)arg1 tag:(id)arg2 ;
-(void)setLocaleDataSource:(BFFLocaleDataSource *)arg1 ;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<BuddyControllerDelegate>)delegate;
-(void)loadView;
-(void)updateHeaderView;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)titleText;
-(void)controllerWasPopped;
@end

