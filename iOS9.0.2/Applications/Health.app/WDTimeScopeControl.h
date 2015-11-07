/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray;

@interface WDTimeScopeControl : UIControl {

	NSArray* _timeScopes;
	int _selectedTimeScope;

}

@property (assign,nonatomic) int selectedTimeScope;              //@synthesize selectedTimeScope=_selectedTimeScope - In the implementation block
+(id)controlWithFrame:(CGRect)arg1 style:(int)arg2 timeScopes:(id)arg3 ;
-(int)selectedTimeScope;
-(void)setSelectedTimeScope:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 ;
-(int)_timeScopeForIndex:(int)arg1 ;
-(int)_indexForTimeScope:(int)arg1 ;
@end

