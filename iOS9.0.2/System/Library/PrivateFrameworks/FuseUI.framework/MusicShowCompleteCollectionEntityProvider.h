/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicEntityProviding.h>

@class MusicShowCompleteCollectionEntityValueProvider, MusicCompleteOfferEntityProvider, NSString;

@interface MusicShowCompleteCollectionEntityProvider : NSObject <MusicEntityProviding> {

	MusicShowCompleteCollectionEntityValueProvider* _showCompleteCollectionEntityValueProvider;
	char _shouldIncludeShowCompleteButton;
	MusicCompleteOfferEntityProvider* _completeOfferEntityProvider;
	NSString* _localizedTitle;

}

@property (nonatomic,readonly) MusicCompleteOfferEntityProvider * completeOfferEntityProvider;              //@synthesize completeOfferEntityProvider=_completeOfferEntityProvider - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                                       //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (assign,nonatomic) char shouldIncludeStoreCompleteOffer; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasEntities;
-(void)dealloc;
-(unsigned)numberOfSections;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(void)setShouldIncludeStoreCompleteOffer:(char)arg1 ;
-(id)initWithCompleteOfferEntityProvider:(id)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(char)shouldIncludeStoreCompleteOffer;
-(void)_completeOfferEntityProviderStoreCompleteOfferAvailableDidChangeNotification:(id)arg1 ;
-(id)_showCompleteCollectionEntityValueProvider;
-(void)_updateShouldIncludeShowCompleteButton;
-(MusicCompleteOfferEntityProvider *)completeOfferEntityProvider;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end

