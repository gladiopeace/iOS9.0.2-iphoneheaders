/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class PSListController;

@interface PSListContainerView : UIView {

	PSListController* _delegate;

}

@property (assign,nonatomic,__weak) PSListController * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(PSListController *)arg1 ;
-(PSListController *)delegate;
-(void)layoutMarginsDidChange;
@end

