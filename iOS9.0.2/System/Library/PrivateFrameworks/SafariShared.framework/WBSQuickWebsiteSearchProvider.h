/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate, WBSOpenSearchURLTemplate, WBSOpenSearchDescription;

@interface WBSQuickWebsiteSearchProvider : NSObject {

	NSString* _displayName;
	NSString* _hostname;
	NSString* _sourcePageURLString;
	NSDate* _dateAdded;
	WBSOpenSearchURLTemplate* _searchURLTemplateFromForm;
	NSString* _openSearchDescriptionURLString;
	NSDate* _dateOfLastSearch;

}

@property (nonatomic,readonly) NSString * sourcePageURLString;                                          //@synthesize sourcePageURLString=_sourcePageURLString - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                                                      //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,retain) WBSOpenSearchURLTemplate * searchURLTemplateFromForm;                      //@synthesize searchURLTemplateFromForm=_searchURLTemplateFromForm - In the implementation block
@property (nonatomic,copy) NSString * openSearchDescriptionURLString;                                   //@synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString - In the implementation block
@property (nonatomic,copy) NSDate * dateOfLastSearch;                                                   //@synthesize dateOfLastSearch=_dateOfLastSearch - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchDescription * openSearchDescription; 
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate; 
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInJSON; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * hostname; 
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInJSON;
-(NSDate *)dateAdded;
-(NSString *)openSearchDescriptionURLString;
-(NSDate *)dateOfLastSearch;
-(void)setDateOfLastSearch:(NSDate *)arg1 ;
-(WBSOpenSearchURLTemplate *)searchURLTemplateFromForm;
-(void)setSearchURLTemplateFromForm:(WBSOpenSearchURLTemplate *)arg1 ;
-(id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2 ;
-(void)setOpenSearchDescriptionURLString:(NSString *)arg1 ;
-(id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 ;
-(NSString *)sourcePageURLString;
-(WBSOpenSearchDescription *)openSearchDescription;
-(NSString *)hostname;
@end

