/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SearchUI/SearchUIMultiResultTableViewCell.h>
#import <libobjc.A.dylib/CNContactGridViewControllerDelegate.h>

@class CNContactGridViewController, NSArray, NSString;

@interface SearchUIContactsTableViewCell : SearchUIMultiResultTableViewCell <CNContactGridViewControllerDelegate> {

	CNContactGridViewController* _contactsViewController;
	NSArray* _contactIdentifiers;

}

@property (retain) CNContactGridViewController * contactsViewController;              //@synthesize contactsViewController=_contactsViewController - In the implementation block
@property (nonatomic,retain) NSArray * contactIdentifiers;                            //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSArray *)contactIdentifiers;
-(void)gridViewController:(id)arg1 didPerformAction:(id)arg2 forContactAtIndex:(int)arg3 withContactProperty:(id)arg4 ;
-(void)reset;
-(void)willMoveToWindow:(id)arg1 ;
-(float)topInset;
-(float)bottomInset;
-(id)makeCollectionView;
-(id)collectionViewWrapper;
-(id)collectionViewDataSource;
-(char)includeTopPaddingInSingleRowHeight;
-(void)updateNumberOfColumns:(int)arg1 ;
-(void)setContactsViewController:(CNContactGridViewController *)arg1 ;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(CNContactGridViewController *)contactsViewController;
-(void)updateWithResults:(id)arg1 ;
@end

