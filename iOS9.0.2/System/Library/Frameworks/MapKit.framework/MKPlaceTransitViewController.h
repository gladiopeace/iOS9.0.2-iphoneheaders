/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKTransitDeparturesViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>

@class NSString;

@interface MKPlaceTransitViewController : MKTransitDeparturesViewController <MKStackingViewControllerPreferredSizeUse> {

	char _displayError;
	char _analyticsAwaitingMapItemLoad;
	NSString* _errorString;
	char _mapItemIsLoading;

}

@property (assign,nonatomic) char mapItemIsLoading;                                          //@synthesize mapItemIsLoading=_mapItemIsLoading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char requiresPreferredContentSizeInStackingView; 
-(char)requiresPreferredContentSizeInStackingView;
-(char)_shouldDisplayError;
-(void)errorLoadingMapItem:(id)arg1 ;
-(id)_errorString;
-(id)_errorCell;
-(void)setMapItemIsLoading:(char)arg1 ;
-(char)mapItemIsLoading;
-(void)mapItemLoadingResolved;
-(id)initWithMapItem:(id)arg1 allowTransitLineSelection:(char)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

