/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, WBSOpenSearchURLTemplate;

@interface WBSOpenSearchDescription : NSObject {

	NSString* _descriptionDocumentURLString;
	WBSOpenSearchURLTemplate* _searchURLTemplate;
	WBSOpenSearchURLTemplate* _urlTemplateForSuggestionsInJSON;
	WBSOpenSearchURLTemplate* _urlTemplateForSuggestionsInXML;

}

@property (nonatomic,readonly) NSString * descriptionDocumentURLString;                                 //@synthesize descriptionDocumentURLString=_descriptionDocumentURLString - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate;                            //@synthesize searchURLTemplate=_searchURLTemplate - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInJSON;              //@synthesize urlTemplateForSuggestionsInJSON=_urlTemplateForSuggestionsInJSON - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInXML;               //@synthesize urlTemplateForSuggestionsInXML=_urlTemplateForSuggestionsInXML - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)descriptionDocumentURLString;
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInXML;
-(id)initWithDescriptionDocumentURLString:(id)arg1 searchURLTemplate:(id)arg2 urlTemplateForSuggestionsInJSON:(id)arg3 urlTemplateForSuggestionsInXML:(id)arg4 ;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInJSON;
@end

