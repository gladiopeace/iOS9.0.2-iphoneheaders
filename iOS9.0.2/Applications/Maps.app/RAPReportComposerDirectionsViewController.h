/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>

@class RAPDirectionsWhichOneQuestion, RAPTablePart, RAPDirectionsRequestsCheckmarkSection, RAPTableCheckmarkRadioSection, RAPReportComposerDirectionsWhichTransferSection, RAPReportComposerCommentPart;

@interface RAPReportComposerDirectionsViewController : RAPReportTableViewController {

	RAPDirectionsWhichOneQuestion* _question;
	RAPTablePart* _directionsRequestsPart;
	RAPDirectionsRequestsCheckmarkSection* _directionsRequestsSection;
	RAPTablePart* _transitDirectionsProblemsPart;
	RAPTableCheckmarkRadioSection* _transitDirectionsProblemsSection;
	RAPTablePart* _whichLineDelayOrServiceChangePart;
	RAPTableCheckmarkRadioSection* _whichLineDelayOrServiceChangeSection;
	RAPTableCheckmarkRadioSection* _whichServiceIssueQuestion;
	RAPTablePart* _whichLineScheduleTimesIncorrectPart;
	RAPTableCheckmarkRadioSection* _whichLineScheduleTimesIncorrectSection;
	RAPTablePart* _whichTransferPart;
	RAPReportComposerDirectionsWhichTransferSection* _whichTransferSection;
	RAPReportComposerCommentPart* _commentPart;
	RAPTablePart* _snippetPart;

}
-(id)tableParts;
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_transitDirectionsProblemsSection;
-(id)_whichServiceIssueSection;
-(id)_whichLineSectionWithQuestion:(id)arg1 ;
-(void)dealloc;
@end

