/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>

@class NSSet, RAPCommentQuestion, NSString, NSArray;

@interface RAPBadRouteSuggestionsQuestion : RAPQuestion {

	NSSet* _selectedRouteSuggestions;
	RAPCommentQuestion* _commentQuestion;

}

@property (nonatomic,readonly) NSString * localizedSelectableRoutesPrompt; 
@property (nonatomic,readonly) NSArray * selectableRouteSuggestions; 
@property (nonatomic,copy) NSSet * selectedRouteSuggestions;                            //@synthesize selectedRouteSuggestions=_selectedRouteSuggestions - In the implementation block
@property (assign) char markAllRouteSuggestionsIncorrect; 
@property (nonatomic,readonly) char shouldShowCommentQuestion; 
@property (nonatomic,readonly) RAPCommentQuestion * commentQuestion;                    //@synthesize commentQuestion=_commentQuestion - In the implementation block
+(char)_canDisplayForContext:(id)arg1 ;
+(id)localizedTitle;
-(char)shouldShowCommentQuestion;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(RAPCommentQuestion *)commentQuestion;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(void)setMarkAllRouteSuggestionsIncorrect:(char)arg1 ;
-(NSString *)localizedSelectableRoutesPrompt;
-(NSSet *)selectedRouteSuggestions;
-(char)_routeSuggestionsCanBeSubmitted;
-(char)_areAllSuggestionsSelectableInSet:(id)arg1 ;
-(NSArray *)selectableRouteSuggestions;
-(void)setSelectedRouteSuggestions:(NSSet *)arg1 ;
-(char)markAllRouteSuggestionsIncorrect;
-(char)isComplete;
@end

