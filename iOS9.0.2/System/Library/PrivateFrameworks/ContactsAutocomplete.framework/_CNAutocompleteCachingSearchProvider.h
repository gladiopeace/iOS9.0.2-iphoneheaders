/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearchProvider.h>

@protocol CNFuture;
@class NSString;

@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {

	id<CNFuture> _localSearchFuture;
	id<CNFuture> _recentsSearchFuture;
	id<CNFuture> _suggestionsSearchFuture;
	id<CNFuture> _duetSearchFuture;
	id<CNFuture> _directoryServerSearchFuture;
	id<CNFuture> _calendarServerSearchFuture;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localSearch;
-(id)initWithSearchProvider:(id)arg1 ;
-(id)recentsSearch;
-(id)suggestionsSearch;
-(id)duetSearch;
-(id)directoryServerSearch;
-(id)calendarServerSearch;
@end

