/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class EKEventViewController;

@interface CalendarInvitationPopoverWrapperController : UINavigationController {

	EKEventViewController* _eventViewController;

}

@property (nonatomic,retain) EKEventViewController * eventViewController;              //@synthesize eventViewController=_eventViewController - In the implementation block
-(id)initForEventUID:(int)arg1 ;
-(EKEventViewController *)eventViewController;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
@end

