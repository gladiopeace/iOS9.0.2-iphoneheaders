/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>

@class RAPSearchWhichOneQuestion, RAPTablePart;

@interface RAPReportComposerIncorrectSearchViewController : RAPReportTableViewController {

	RAPSearchWhichOneQuestion* _question;
	RAPTablePart* _search;
	char _hasPushedComments;

}
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_pushCommentsIfNeeded;
-(void)_questionDidChange;
-(void)viewDidLoad;
@end

