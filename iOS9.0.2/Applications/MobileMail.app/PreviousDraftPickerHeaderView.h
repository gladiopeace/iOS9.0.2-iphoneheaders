/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface PreviousDraftPickerHeaderView : UIView {

	UILabel* _label;
	UIActivityIndicatorView* _activityIndicatorView;
	char _hasDrafts;
	char _loading;
	char _completedFirstLoad;

}
-(void)setHasDrafts:(char)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateUI;
-(void)setLoading:(char)arg1 ;
@end

