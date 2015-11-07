/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UITableView.h>
#import <libobjc.A.dylib/SPUISearchTableHeaderViewDelegate.h>

@protocol SPUISearchTableViewDelegate;
@class NSMutableSet, NSString;

@interface SPUISearchTableView : UITableView <SPUISearchTableHeaderViewDelegate> {

	char _lastLayoutWasLandscape;
	char _isTogglingSectionExpansion;
	id<SPUISearchTableViewDelegate> _searchDelegate;
	NSMutableSet* _expandedSections;
	/*^block*/id _toggleSectionExpansionCompletion;

}

@property (assign,nonatomic,__weak) id<SPUISearchTableViewDelegate> searchDelegate;              //@synthesize searchDelegate=_searchDelegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * expandedSections;                                    //@synthesize expandedSections=_expandedSections - In the implementation block
@property (assign) char lastLayoutWasLandscape;                                                  //@synthesize lastLayoutWasLandscape=_lastLayoutWasLandscape - In the implementation block
@property (nonatomic,copy) id toggleSectionExpansionCompletion;                                  //@synthesize toggleSectionExpansionCompletion=_toggleSectionExpansionCompletion - In the implementation block
@property (assign) char isTogglingSectionExpansion;                                              //@synthesize isTogglingSectionExpansion=_isTogglingSectionExpansion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutMarginsDidChange;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(char)allowsHeaderViewsToFloat;
-(char)allowsFooterViewsToFloat;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setSearchDelegate:(id<SPUISearchTableViewDelegate>)arg1 ;
-(id<SPUISearchTableViewDelegate>)searchDelegate;
-(void)toggleExpansionForSection:(unsigned)arg1 ;
-(NSMutableSet *)expandedSections;
-(char)sectionIsExpanded:(int)arg1 ;
-(void)setIsTogglingSectionExpansion:(char)arg1 ;
-(void)updateSeparatorForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)toggleSectionExpansionCompletion;
-(void)setToggleSectionExpansionCompletion:(id)arg1 ;
-(void)setLastLayoutWasLandscape:(char)arg1 ;
-(char)lastLayoutWasLandscape;
-(void)clearExpansionState;
-(void)updateLayoutAfterDeferredRotationIfNeeded;
-(void)setExpandedSections:(NSMutableSet *)arg1 ;
-(char)isTogglingSectionExpansion;
@end

