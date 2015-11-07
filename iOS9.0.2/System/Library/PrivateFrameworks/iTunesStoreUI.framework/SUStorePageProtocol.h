/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSNumber, SSURLRequestProperties;

@interface SUStorePageProtocol : NSObject <NSCopying> {

	NSArray* _allowedOrientations;
	NSString* _copyright;
	NSArray* _expectedClientIdentifiers;
	NSNumber* _focusedItemIdentifier;
	NSArray* _navigationButtons;
	NSArray* _navigationHistoryItems;
	NSArray* _navigationMenus;
	SSURLRequestProperties* _overlayBackgroundURLRequestProperties;
	NSString* _rootSectionIdentifier;
	char _shouldDisplayInOverlay;
	char _shouldExcludeFromNavigationHistory;
	char _shouldReplaceRootViewController;

}

@property (nonatomic,retain) NSArray * allowedOrientations;                                               //@synthesize allowedOrientations=_allowedOrientations - In the implementation block
@property (nonatomic,retain) NSString * copyright;                                                        //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,copy) NSArray * expectedClientIdentifiers;                                           //@synthesize expectedClientIdentifiers=_expectedClientIdentifiers - In the implementation block
@property (nonatomic,retain) NSNumber * focusedItemIdentifier;                                            //@synthesize focusedItemIdentifier=_focusedItemIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * navigationButtons;                                                   //@synthesize navigationButtons=_navigationButtons - In the implementation block
@property (nonatomic,retain) NSArray * navigationHistoryItems;                                            //@synthesize navigationHistoryItems=_navigationHistoryItems - In the implementation block
@property (nonatomic,copy) NSArray * navigationMenus;                                                     //@synthesize navigationMenus=_navigationMenus - In the implementation block
@property (nonatomic,retain) SSURLRequestProperties * overlayBackgroundURLRequestProperties;              //@synthesize overlayBackgroundURLRequestProperties=_overlayBackgroundURLRequestProperties - In the implementation block
@property (nonatomic,retain) NSString * rootSectionIdentifier;                                            //@synthesize rootSectionIdentifier=_rootSectionIdentifier - In the implementation block
@property (assign,nonatomic) char shouldDisplayInOverlay;                                                 //@synthesize shouldDisplayInOverlay=_shouldDisplayInOverlay - In the implementation block
@property (assign,nonatomic) char shouldExcludeFromNavigationHistory;                                     //@synthesize shouldExcludeFromNavigationHistory=_shouldExcludeFromNavigationHistory - In the implementation block
@property (assign,nonatomic) char shouldReplaceRootViewController;                                        //@synthesize shouldReplaceRootViewController=_shouldReplaceRootViewController - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCopyright:(NSString *)arg1 ;
-(NSArray *)allowedOrientations;
-(void)setAllowedOrientations:(NSArray *)arg1 ;
-(char)shouldExcludeFromNavigationHistory;
-(void)setShouldExcludeFromNavigationHistory:(char)arg1 ;
-(NSArray *)expectedClientIdentifiers;
-(char)shouldDisplayInOverlay;
-(id)navigationButtonForLocation:(id)arg1 ;
-(id)navigationMenuForLocation:(int)arg1 ;
-(NSArray *)navigationHistoryItems;
-(SSURLRequestProperties *)overlayBackgroundURLRequestProperties;
-(NSString *)rootSectionIdentifier;
-(char)shouldReplaceRootViewController;
-(NSString *)copyright;
-(void)setValuesFromStorePageDictionary:(id)arg1 ;
-(NSNumber *)focusedItemIdentifier;
-(void)setFocusedItemIdentifier:(NSNumber *)arg1 ;
-(id)overlayBackgroundURLRequest;
-(void)setOverlayBackgroundURLRequest:(id)arg1 ;
-(id)_initCommon;
-(void)setExpectedClientIdentifiers:(NSArray *)arg1 ;
-(id)_newNavigationButtonsFromArray:(id)arg1 ;
-(id)_newNavigationHistoryItemsFromArray:(id)arg1 ;
-(id)_newNavigationMenusFromArray:(id)arg1 ;
-(void)setRootSectionIdentifier:(NSString *)arg1 ;
-(void)setShouldReplaceRootViewController:(char)arg1 ;
-(void)setOverlayBackgroundURLRequestProperties:(SSURLRequestProperties *)arg1 ;
-(void)setShouldDisplayInOverlay:(char)arg1 ;
-(NSArray *)navigationButtons;
-(void)setNavigationButtons:(NSArray *)arg1 ;
-(void)setNavigationHistoryItems:(NSArray *)arg1 ;
-(NSArray *)navigationMenus;
-(void)setNavigationMenus:(NSArray *)arg1 ;
@end

