/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class SCATColorCircle;

@interface SCATCursorColorCell : PSTableCell {

	SCATColorCircle* _circle;

}

@property (nonatomic,retain) SCATColorCircle * circle;              //@synthesize circle=_circle - In the implementation block
-(void)setCircle:(SCATColorCircle *)arg1 ;
-(SCATColorCircle *)circle;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

