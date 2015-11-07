/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPDirectionsWhichLineSelectionQuestion.h>

@class NSDictionary, NSArray, RAPTransitLineProblem, NSString;

@interface RAPDirectionsTransitDelayOrServiceChangeQuestion : RAPDirectionsWhichLineSelectionQuestion {

	NSDictionary* _selectableProblemsByKind;
	NSArray* _selectableProblems;
	RAPTransitLineProblem* _selectedProblem;

}

@property (nonatomic,readonly) NSString * localizedIssueSelectionPrompt; 
@property (nonatomic,readonly) NSArray * selectableProblems;                          //@synthesize selectableProblems=_selectableProblems - In the implementation block
@property (nonatomic,retain) RAPTransitLineProblem * selectedProblem;                 //@synthesize selectedProblem=_selectedProblem - In the implementation block
-(void)_fillSubmittableProblem:(id)arg1 ;
-(void)setSelectedProblem:(RAPTransitLineProblem *)arg1 ;
-(NSArray *)selectableProblems;
-(RAPTransitLineProblem *)selectedProblem;
-(NSString *)localizedIssueSelectionPrompt;
-(char)isComplete;
@end

