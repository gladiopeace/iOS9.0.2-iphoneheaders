/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCell;

@interface _UITableViewCellGrabber : UIControl {

	UITableViewCell* _cell;
	CGPoint _downPoint;

}
+(id)grabberImage;
-(void)drawRect:(CGRect)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)shouldTrack;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 tableViewCell:(id)arg2 ;
@end

