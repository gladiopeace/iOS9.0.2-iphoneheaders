/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class EKEventStore, CNAutocompleteCalendarServerOperationFactory, CNStringTokenizer, NSString;

@interface CNAutocompleteCalendarServerSearch : NSObject <CNAutocompleteSearch> {

	EKEventStore* _eventStore;
	CNAutocompleteCalendarServerOperationFactory* _operationFactory;
	CNStringTokenizer* _tokenizer;

}

@property (nonatomic,readonly) EKEventStore * eventStore;                                                    //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) CNAutocompleteCalendarServerOperationFactory * operationFactory;              //@synthesize operationFactory=_operationFactory - In the implementation block
@property (nonatomic,retain) CNStringTokenizer * tokenizer;                                                  //@synthesize tokenizer=_tokenizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKEventStore *)eventStore;
-(id)init;
-(CNStringTokenizer *)tokenizer;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 operationFactory:(id)arg2 ;
-(id)queryForFetchRequest:(id)arg1 ;
-(id)runQuery:(id)arg1 forSource:(id)arg2 resultsFactory:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(CNAutocompleteCalendarServerOperationFactory *)operationFactory;
-(/*^block*/id)resultTransformWithFactory:(id)arg1 ;
-(void)setTokenizer:(CNStringTokenizer *)arg1 ;
@end

