/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSourcePrivate.h>
#import <libobjc.A.dylib/ABPrimaryValueDelegate.h>
#import <libobjc.A.dylib/ABPersonCellLayoutManagerDelegate.h>

@protocol ABPersonTableViewDataSourceDelegate, ABStyleProvider;
@class ABActionsController, ABPersonTableViewMultiCellDelegate, ABPersonTableViewImageDataDelegate, ABPersonTableViewActionsDelegate, ABPersonTableViewLinkingDelegate, ABPersonPickersDelegate, ABPersonTableViewSharingDelegate, NSMutableDictionary, NSMutableArray, ABUIPerson, ABNamePropertyGroup, UILabel, ABPersonTableHeaderView, ABPersonTableFooterView, UIView, ABLabelViewWithVariablePositioning, UITableViewCell, ABPersonCellLayoutManager, NSDictionary, NSArray, ABPersonTableView, NSIndexPath, ABMultiCellContentView, UIResponder, NSString, UIFont, ABPersonImageView;

@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, ABPrimaryValueDelegate, ABPersonCellLayoutManagerDelegate> {

	ABActionsController* _actionsController;
	CFArrayRef _optionalProperties;
	CFArrayRef _additionalProperties;
	CFDictionaryRef _multiCellContentViewsByCustomCell;
	ABPersonTableViewMultiCellDelegate* _multiCellContentViewDelegate;
	ABPersonTableViewImageDataDelegate* _imageDataDelegate;
	ABPersonTableViewActionsDelegate* _actionsDelegate;
	ABPersonTableViewLinkingDelegate* _linkingDelegate;
	ABPersonPickersDelegate* _pickersDelegate;
	ABPersonTableViewSharingDelegate* _sharingDelegate;
	char _attemptDelayedBecomeFirstResponder;
	char _isPinningLocked;
	NSMutableDictionary* _propertyGroupsStore;
	NSMutableDictionary* _unusedPropertyGroupsStore;
	NSMutableArray* _editablePropertyGroups;
	NSMutableArray* _propertyGroups;
	ABUIPerson* _preinsertedPerson;
	CFSetRef _addNewValuePropertiesStore;
	CFSetRef _addNewValueProperties;
	ABNamePropertyGroup* _namePropertyGroup;
	UILabel* _noValueLabel;
	ABPersonTableHeaderView* _headerView;
	ABPersonTableFooterView* _footerView;
	UIView* _customPersonTableHeaderView;
	UIView* _customPersonTableFooterView;
	UIView* _notesHeaderView;
	ABLabelViewWithVariablePositioning* _linkingHeaderView;
	int _primaryProperty;
	UITableViewCell* _partiallySelectedCell;
	ABPersonCellLayoutManager* _cellLayoutManager;
	UIView* _tableHeaderViewContainer;
	NSDictionary* _cachedKeyboardInfo;
	char _isEditing;
	char _isUnlinkingPerson;
	char _badgeEmailPropertiesForMailVIP;
	float _lastReturnedHeaderHeight;
	char _allowsActions;
	char _allowsEditing;
	char _allowsAddToFavorites;
	char _allowsSendingTextMessage;
	char _allowsSharing;
	char _allowsConferencing;
	char _allowsDeletion;
	char _allowsSounds;
	char _allowsVibrations;
	char _shouldShowContactSourcesStringAsMessage;
	char _highlightedValueIsImportant;
	char _isSettingFirstResponder;
	char _isEndingEditingTransactions;
	char _viewControllerWillSlideOut;
	char _selectedPropertyForCellWithoutLabelDivider;
	char _ignoreVibrationsDidChangeNotification;
	NSArray* _people;
	void* _addressBook;
	id<ABPersonTableViewDataSourceDelegate> _delegate;
	ABPersonTableView* _tableView;
	CFArrayRef _displayedProperties;
	int _highlightedValueProperty;
	int _highlightedValueIdentifier;
	int _insertionProperty;
	id _insertionValue;
	id _insertionLabel;
	id<ABStyleProvider> _styleProvider;
	NSIndexPath* _lastActiveMultiCellIndexPath;
	ABMultiCellContentView* _lastActiveMultiCellContentView;
	ABMultiCellContentView* _multiCellContentViewForWillEndEditing;
	ABMultiCellContentView* _pinningMultiCellContentViewAlternate;
	NSIndexPath* _pinningMultiCellIndexPath;
	NSIndexPath* _pinningMultiCellRelativeIndexPath;
	UIResponder* _pinningResponder;
	int _customKeyboardOutDirection;
	NSMutableArray* _additionalLabels;

}

@property (assign,nonatomic) id<ABPersonTableViewDataSourceDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ABPersonTableView * tableView;                                                    //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) void* addressBook;                                                                //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) NSArray * people;                                                                 //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                                                //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) char canSave; 
@property (nonatomic,readonly) char hasChanges; 
@property (nonatomic,readonly) char hasImageChanges; 
@property (nonatomic,readonly) char hasNameChanges; 
@property (assign,nonatomic) char allowsDeletion;                                                              //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                                               //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char allowsAddToFavorites;                                                        //@synthesize allowsAddToFavorites=_allowsAddToFavorites - In the implementation block
@property (assign,nonatomic) char allowsSendingTextMessage;                                                    //@synthesize allowsSendingTextMessage=_allowsSendingTextMessage - In the implementation block
@property (assign,nonatomic) char allowsSharing;                                                               //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (assign,nonatomic) char allowsConferencing;                                                          //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) char allowsActions;                                                               //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) char allowsSounds;                                                                //@synthesize allowsSounds=_allowsSounds - In the implementation block
@property (assign,nonatomic) char allowsVibrations;                                                            //@synthesize allowsVibrations=_allowsVibrations - In the implementation block
@property (assign,nonatomic) char shouldShowContactSourcesStringAsMessage;                                     //@synthesize shouldShowContactSourcesStringAsMessage=_shouldShowContactSourcesStringAsMessage - In the implementation block
@property (assign,nonatomic) CFArrayRef displayedProperties;                                                   //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (nonatomic,copy) NSString * alternateName; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (assign,nonatomic) int highlightedValueProperty;                                                     //@synthesize highlightedValueProperty=_highlightedValueProperty - In the implementation block
@property (assign,nonatomic) int highlightedValueIdentifier;                                                   //@synthesize highlightedValueIdentifier=_highlightedValueIdentifier - In the implementation block
@property (assign,nonatomic) char highlightedValueIsImportant;                                                 //@synthesize highlightedValueIsImportant=_highlightedValueIsImportant - In the implementation block
@property (nonatomic,readonly) int insertionProperty;                                                          //@synthesize insertionProperty=_insertionProperty - In the implementation block
@property (nonatomic,readonly) id insertionValue;                                                              //@synthesize insertionValue=_insertionValue - In the implementation block
@property (nonatomic,readonly) id insertionLabel;                                                              //@synthesize insertionLabel=_insertionLabel - In the implementation block
@property (nonatomic,readonly) ABPersonImageView * personImageView; 
@property (nonatomic,retain) ABPersonTableHeaderView * tableHeaderView; 
@property (nonatomic,retain) UIView * personHeaderView; 
@property (assign,nonatomic) char shouldAlignPersonHeaderViewToImage; 
@property (nonatomic,retain) UIView * customPersonTableHeaderView; 
@property (nonatomic,retain) UIView * customPersonTableFooterView; 
@property (nonatomic,readonly) ABPersonTableFooterView * tableFooterView; 
@property (assign,getter=isEditing,nonatomic) char editing; 
@property (assign,nonatomic) int customKeyboardOutDirection;                                                   //@synthesize customKeyboardOutDirection=_customKeyboardOutDirection - In the implementation block
@property (assign,nonatomic) char viewControllerWillSlideOut;                                                  //@synthesize viewControllerWillSlideOut=_viewControllerWillSlideOut - In the implementation block
@property (nonatomic,readonly) int primaryProperty; 
@property (nonatomic,readonly) NSString * attribution; 
@property (getter=isAttributionEnabled,nonatomic,readonly) char attributionEnabled; 
@property (nonatomic,retain) NSIndexPath * lastActiveMultiCellIndexPath;                                       //@synthesize lastActiveMultiCellIndexPath=_lastActiveMultiCellIndexPath - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * lastActiveMultiCellContentView;                          //@synthesize lastActiveMultiCellContentView=_lastActiveMultiCellContentView - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * multiCellContentViewForWillEndEditing;                   //@synthesize multiCellContentViewForWillEndEditing=_multiCellContentViewForWillEndEditing - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewMultiCellDelegate * multiCellContentViewDelegate; 
@property (nonatomic,readonly) ABPersonTableViewImageDataDelegate * imageDataDelegate; 
@property (nonatomic,readonly) ABPersonTableViewActionsDelegate * actionsDelegate; 
@property (nonatomic,readonly) ABPersonTableViewLinkingDelegate * linkingDelegate; 
@property (nonatomic,readonly) ABPersonPickersDelegate * pickersDelegate; 
@property (nonatomic,readonly) ABPersonTableViewSharingDelegate * sharingDelegate; 
@property (nonatomic,retain) NSMutableArray * additionalLabels;                                                //@synthesize additionalLabels=_additionalLabels - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * pinningMultiCellContentViewAlternate;                    //@synthesize pinningMultiCellContentViewAlternate=_pinningMultiCellContentViewAlternate - In the implementation block
@property (nonatomic,retain) NSIndexPath * pinningMultiCellIndexPath;                                          //@synthesize pinningMultiCellIndexPath=_pinningMultiCellIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * pinningMultiCellRelativeIndexPath;                                  //@synthesize pinningMultiCellRelativeIndexPath=_pinningMultiCellRelativeIndexPath - In the implementation block
@property (nonatomic,retain) UIResponder * pinningResponder;                                                   //@synthesize pinningResponder=_pinningResponder - In the implementation block
@property (nonatomic,readonly) char isPinning; 
@property (assign,nonatomic) char isSettingFirstResponder;                                                     //@synthesize isSettingFirstResponder=_isSettingFirstResponder - In the implementation block
@property (nonatomic,readonly) char isEndingEditingTransactions;                                               //@synthesize isEndingEditingTransactions=_isEndingEditingTransactions - In the implementation block
@property (assign,nonatomic) char selectedPropertyForCellWithoutLabelDivider;                                  //@synthesize selectedPropertyForCellWithoutLabelDivider=_selectedPropertyForCellWithoutLabelDivider - In the implementation block
@property (assign,nonatomic) char ignoreVibrationsDidChangeNotification;                                       //@synthesize ignoreVibrationsDidChangeNotification=_ignoreVibrationsDidChangeNotification - In the implementation block
@property (assign,nonatomic) char badgeEmailPropertiesForMailVIP;                                              //@synthesize badgeEmailPropertiesForMailVIP=_badgeEmailPropertiesForMailVIP - In the implementation block
@property (nonatomic,retain) UITableViewCell * partiallySelectedCell;                                          //@synthesize partiallySelectedCell=_partiallySelectedCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateRecord;
-(ABPersonTableViewActionsDelegate *)actionsDelegate;
-(void)selectLabelPartForCell:(id)arg1 ;
-(void)selectValuePartForCell:(id)arg1 ;
-(void)selectWholePartForCell:(id)arg1 ;
-(void)selectCustomPartWithFrame:(CGRect)arg1 occupiedCorners:(unsigned)arg2 forCell:(id)arg3 ;
-(ABPersonImageView *)personImageView;
-(ABPersonTableViewImageDataDelegate *)imageDataDelegate;
-(void)setAdditionalLabels:(NSMutableArray *)arg1 ;
-(UITableViewCell *)partiallySelectedCell;
-(id)insertionValue;
-(int)insertionProperty;
-(id)namePropertyGroup:(id)arg1 primaryValueForProperty:(int)arg2 ;
-(void)endEditingTransactions;
-(char)allowsConferencing;
-(CFArrayRef)displayedProperties;
-(char)allowsActions;
-(void)setAllowsConferencing:(char)arg1 ;
-(ABPersonTableViewLinkingDelegate *)linkingDelegate;
-(void)setAllowsVibrations:(char)arg1 ;
-(char)allowsSounds;
-(char)isInFullEditingMode;
-(char)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2 ;
-(void)reloadImageData;
-(char)hasImageChanges;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(id)namePropertyGroup;
-(int)primaryProperty;
-(NSString *)messageDetail;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(void)setInsertionLabel:(id)arg1 ;
-(NSMutableArray *)additionalLabels;
-(void)unselectAllCellParts;
-(void)setSelectedPropertyForCellWithoutLabelDivider:(char)arg1 ;
-(void)setIgnoreVibrationsDidChangeNotification:(char)arg1 ;
-(id)_indexPathForPropertyGroup:(id)arg1 index:(int)arg2 editableFlag:(char)arg3 ;
-(id)propertyGroupForProperty:(int)arg1 context:(void*)arg2 ;
-(void)_performVibrationRelatedChangesReloadingFromModel:(char)arg1 updatingDataUsingBlock:(/*^block*/id)arg2 ;
-(void)setInsertionValue:(id)arg1 ;
-(NSIndexPath *)pinningMultiCellIndexPath;
-(void)cancelPinning;
-(int)tableViewRowAnimationForUpdateAction:(unsigned)arg1 isFirstRow:(char)arg2 ;
-(void)setLastActiveMultiCellContentView:(ABMultiCellContentView *)arg1 ;
-(void)updateByAddingFieldForProperty:(int)arg1 whenEditing:(char)arg2 ;
-(NSIndexPath *)lastActiveMultiCellIndexPath;
-(char)isPinning;
-(ABPersonPickersDelegate *)pickersDelegate;
-(void)setAttribution:(id)arg1 enabled:(char)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(char)isAttributionEnabled;
-(NSString *)alternateName;
-(void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2 ;
-(void)propertyGroup:(id*)arg1 orActions:(id*)arg2 forSection:(int)arg3 whenEditing:(char)arg4 ;
-(void)_enumerateContextPointersForProperty:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)reloadDataIncludingHeaderView:(char)arg1 invalidatePropertyData:(char)arg2 ;
-(char)isPropertyDisplayed:(int)arg1 ;
-(char)allowsAddToFavorites;
-(char)allowsVoiceFavorite;
-(char)allowsFaceTimeFavorite;
-(char)allowsSendingTextMessage;
-(char)allowsSharing;
-(void)indexOfFirstPropertyGroupSection:(int*)arg1 lastPropertyGroupSection:(int*)arg2 addFieldSection:(int*)arg3 linkingUISection:(int*)arg4 primaryPropertyActionsSection:(int*)arg5 topGroupingActionSection:(int*)arg6 bottomGroupingActionSection:(int*)arg7 cardActionsSection:(int*)arg8 cardActionsSectionCount:(int*)arg9 totalSectionCount:(int*)arg10 whenEditing:(char)arg11 ;
-(id)propertyGroupsForEditing:(char)arg1 ;
-(int)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(char)arg3 ;
-(id)actionsController;
-(int)highlightedValueProperty;
-(void)setHighlightedValueProperty:(int)arg1 ;
-(int)highlightedValueIdentifier;
-(void)setHighlightedValueIdentifier:(int)arg1 ;
-(id)tableHeaderViewContainer;
-(id)realHeaderView;
-(void)updateTableHeaderViewAnimated:(char)arg1 ;
-(void)_registerForKeyboardNotifications;
-(void)_conferenceHistoryChanged:(id)arg1 ;
-(void)_registerForVibrationsChangedNotifications;
-(void)_unregisterForVibrationsChangedNotifications;
-(void)_getPropertyGroup:(id*)arg1 index:(int*)arg2 editableFlag:(char*)arg3 atIndexPath:(id)arg4 ;
-(char)shouldShowContactSourcesStringAsMessage;
-(id)_contactSourcesString;
-(void)deleteButtonClicked:(id)arg1 ;
-(int)indexOfLinkingUISectionWhenEditing:(char)arg1 ;
-(void)notifyDataWasReloaded;
-(void)reloadConferencing;
-(void)setAllowsAddToFavorites:(char)arg1 andReload:(char)arg2 ;
-(void)setAllowsSendingTextMessage:(char)arg1 andReload:(char)arg2 ;
-(void)setAllowsSharing:(char)arg1 andReload:(char)arg2 ;
-(void)setAllowsConferencing:(char)arg1 andReload:(char)arg2 ;
-(void)updateContactSourcesStringIfNeeded;
-(void)invalidateAllPropertyGroups;
-(void)setDisplayedProperties:(CFArrayRef)arg1 andRefreshUI:(char)arg2 ;
-(id)_footerView;
-(void)_updateDeleteButtonIfNeededForFooterView:(id)arg1 ;
-(void)setAllowsSendingTextMessage:(char)arg1 ;
-(void)reloadDataIncludingHeaderView:(char)arg1 ;
-(char)hasNameChanges;
-(id)titleForNoValueWithProperty:(int)arg1 ;
-(void)setMultiCellContentViewForWillEndEditing:(ABMultiCellContentView *)arg1 ;
-(void)invalidateAdditionalProperties;
-(void)resetPropertyGroupStores;
-(void)reloadNoValueLabelAnimated:(char)arg1 ;
-(void)scrollToLastActiveEntryFieldAnimated:(char)arg1 ;
-(id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2 whenEditing:(char)arg3 ;
-(id)noValueLabel;
-(ABPersonTableViewMultiCellDelegate *)multiCellContentViewDelegate;
-(id)newHeaderView;
-(void)notifyHeaderViewHeightDidChange;
-(void)updateTableHeaderViewAnimated:(char)arg1 andSkipTableViewHeaderHeightNotification:(char)arg2 ;
-(void)updateTableFooterViewAnimated:(char)arg1 ;
-(int)_sectionIndexForPropertyGroup:(id)arg1 orProperty:(int)arg2 propertyGroupContext:(void*)arg3 withPropertyGroups:(id)arg4 whenEditing:(char)arg5 ;
-(int)sectionIndexForProperty:(int)arg1 propertyGroupContext:(void*)arg2 withPropertyGroups:(id)arg3 whenEditing:(char)arg4 ;
-(void)updateSectionHeaderAndFooterHeightsForEditing:(char)arg1 ;
-(void)_resetAddNewValueCells;
-(id)sectionAnimationsDictionaryForEditing:(char)arg1 ;
-(void)_getFirstRows:(id*)arg1 andOtherRows:(id*)arg2 fromIndexPaths:(id)arg3 ;
-(void)updateHeadersAndFootersForEditing:(char)arg1 animated:(char)arg2 ;
-(char)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)_updateBackgroundForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setHighlightedValueIsImportant:(char)arg1 ;
-(char)usesAddNewValueCellForProperty:(int)arg1 ;
-(char)shouldUseAddNewValueCellForProperty:(int)arg1 ;
-(void)setShouldUseAddNewValueCell:(char)arg1 forProperty:(int)arg2 ;
-(void)_unregisterForKeyboardNotifications;
-(void)_endTableViewUpdatesWithoutScroll;
-(CFArrayRef)additionalProperties;
-(void)scrollToLastActiveEntryFieldAnimated:(char)arg1 becomeFirstResponder:(char)arg2 ;
-(int)numberOfSectionsWhenEditing:(char)arg1 ;
-(id)_indexPathForHeaderViewRow:(unsigned)arg1 ;
-(id)propertyGroupForProperty:(int)arg1 context:(void*)arg2 createIfEmpty:(char)arg3 ;
-(void)setLastActiveMultiCellIndexPath:(NSIndexPath *)arg1 ;
-(void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)beginPinning;
-(CFArrayRef)newAdditionalProperties;
-(void*)_copyDefaultPolicy:(void*)arg1 ;
-(char)isPropertyOptional:(int)arg1 ;
-(id)newPropertyGroupsForEditing:(char)arg1 withDisplayedProperties:(CFArrayRef)arg2 ;
-(id)newPropertyGroupsForEditing:(char)arg1 ;
-(void)invalidatePropertyGroupsForEditing:(char)arg1 ;
-(void)setPinningMultiCellIndexPath:(NSIndexPath *)arg1 ;
-(void)setPinningResponder:(UIResponder *)arg1 ;
-(void)setPinningMultiCellRelativeIndexPath:(NSIndexPath *)arg1 ;
-(void)setPinningMultiCellContentViewAlternate:(ABMultiCellContentView *)arg1 ;
-(void)setPartiallySelectedCell:(UITableViewCell *)arg1 ;
-(char)hasOnlyRingtoneChanges;
-(void)setInsertionProperty:(int)arg1 value:(id)arg2 label:(id)arg3 ;
-(id)addValueCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(void)_getDataProvider:(id*)arg1 andInfo:(id*)arg2 forIndexPath:(id)arg3 ;
-(id)cellLayoutManager;
-(id)newAccessoryViewWhenEditing:(char)arg1 forDataProvider:(id)arg2 info:(id)arg3 ;
-(void)_setMultiCellContentView:(id)arg1 forCustomPropertyCell:(id)arg2 ;
-(id)_multiCellContentViewForCustomPropertyCell:(id)arg1 ;
-(id)actionCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 isConference:(char)arg3 hasCustomContent:(char)arg4 ;
-(id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(int)arg3 editing:(char)arg4 allowDequeing:(char)arg5 tag:(int*)arg6 ;
-(int)rowIndexInPropertyGroup:(id*)arg1 orActions:(id*)arg2 forRow:(int)arg3 inSection:(int)arg4 whenEditing:(char)arg5 ;
-(id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(char)arg4 allowDequeing:(char)arg5 tag:(int*)arg6 ;
-(void)presentRelatedNamesPicker:(id)arg1 ;
-(id)linkedCardCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(char)viewControllerWillSlideOut;
-(void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(char)arg2 ;
-(void)_updateTableForVibrationChanges;
-(void)tableView:(id)arg1 cell:(id*)arg2 orTag:(int*)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(char)arg5 ;
-(int)numberOfRowsInSection:(int)arg1 whenEditing:(char)arg2 ;
-(id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1 ;
-(void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(int)arg2 isInsertionIndex:(char)arg3 inTableView:(id)arg4 ;
-(void)endPinning;
-(char)_isReadonlyAtIndexPath:(id)arg1 ;
-(void)valueAtIndex:(int)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(char)arg4 ;
-(void)swapAddNewValueCellForProperty:(int)arg1 atIndexPath:(id)arg2 ;
-(void)addFieldCellSelected:(id)arg1 ;
-(void)showLinkedCardAtRow:(int)arg1 ;
-(id)_notesHeaderView;
-(id)_linkingHeaderView;
-(void)setLinkingDelegate:(ABPersonTableViewLinkingDelegate *)arg1 ;
-(ABPersonTableViewSharingDelegate *)sharingDelegate;
-(id)controllerMainView;
-(char)isUnlinkingPersonWithAnimation;
-(id)prepareForLinkingUIUpdate;
-(void)updateLinkingUI:(id)arg1 ;
-(void)updateForConferencingAvailabilityChange;
-(void)setAllowsAddToFavorites:(char)arg1 ;
-(void)setShouldShowContactSourcesStringAsMessage:(char)arg1 ;
-(void)reloadNameData;
-(void)reloadPreferredPersonForName;
-(void)reloadDeleteButton;
-(void)reloadPropertyGroups;
-(void)reloadFavoritesData;
-(UIView *)customPersonTableHeaderView;
-(void)setCustomPersonTableHeaderView:(UIView *)arg1 ;
-(char)shouldAlignPersonHeaderViewToImage;
-(void)setShouldAlignPersonHeaderViewToImage:(char)arg1 ;
-(UIView *)customPersonTableFooterView;
-(void)setCustomPersonTableFooterView:(UIView *)arg1 ;
-(void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)prepareView;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(char)arg4 ;
-(void)addFieldCellWillSelect:(id)arg1 ;
-(void)addToContactsButtonClicked:(id)arg1 ;
-(void)updateCellEditingStyleAtIndexPath:(id)arg1 ;
-(id)displayedPropertyGroupForProperty:(int)arg1 context:(void*)arg2 whenEditing:(char)arg3 ;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(int)editingSectionForNonEditingSection:(int)arg1 ;
-(char)allowsVibrations;
-(char)highlightedValueIsImportant;
-(id)insertionLabel;
-(ABMultiCellContentView *)lastActiveMultiCellContentView;
-(ABMultiCellContentView *)multiCellContentViewForWillEndEditing;
-(ABMultiCellContentView *)pinningMultiCellContentViewAlternate;
-(NSIndexPath *)pinningMultiCellRelativeIndexPath;
-(UIResponder *)pinningResponder;
-(char)isSettingFirstResponder;
-(void)setIsSettingFirstResponder:(char)arg1 ;
-(char)isEndingEditingTransactions;
-(void)setViewControllerWillSlideOut:(char)arg1 ;
-(int)customKeyboardOutDirection;
-(void)setCustomKeyboardOutDirection:(int)arg1 ;
-(char)selectedPropertyForCellWithoutLabelDivider;
-(char)ignoreVibrationsDidChangeNotification;
-(char)badgeEmailPropertiesForMailVIP;
-(void)setBadgeEmailPropertiesForMailVIP:(char)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setAlternateName:(NSString *)arg1 ;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)setAllowsDeletion:(char)arg1 ;
-(char)allowsDeletion;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(UIFont *)messageFont;
-(char)hasChanges;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(CFArrayRef)arg1 ;
-(void)setAllowsSounds:(char)arg1 ;
-(void)setAllowsActions:(char)arg1 ;
-(void)setDelegate:(id<ABPersonTableViewDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<ABPersonTableViewDataSourceDelegate>)delegate;
-(void)sizeToFit;
-(ABPersonTableView *)tableView;
-(ABPersonTableHeaderView *)tableHeaderView;
-(void)setTableView:(ABPersonTableView *)arg1 ;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(char)tableView:(id)arg1 wantsHeaderForSection:(int)arg2 ;
-(float)marginForTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(id)viewForFooterInTableView:(id)arg1 ;
-(void)setTableHeaderView:(ABPersonTableHeaderView *)arg1 ;
-(ABPersonTableFooterView *)tableFooterView;
-(void)setEditing:(char)arg1 ;
-(NSString *)message;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)setAllowsSharing:(char)arg1 ;
-(char)canSave;
-(NSString *)attribution;
-(void)setPeople:(NSArray *)arg1 ;
-(NSArray *)people;
-(void*)addressBook;
@end

