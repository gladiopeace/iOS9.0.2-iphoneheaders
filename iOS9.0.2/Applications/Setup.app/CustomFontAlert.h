/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIAlertView.h>

@class UIFont;

@interface CustomFontAlert : UIAlertView {

	UIFont* _customFont;
	CGRect _desiredFrame;

}
-(id)initWithFrame:(CGRect)arg1 Font:(id)arg2 ;
-(void)layout;
-(void)_setupTitleStyle;
@end

