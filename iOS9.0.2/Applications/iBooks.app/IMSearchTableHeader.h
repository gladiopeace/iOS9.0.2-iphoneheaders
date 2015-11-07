/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIView.h>

@class IMSearchField, UIView;

@interface IMSearchTableHeader : UIView {

	IMSearchField* _searchField;
	UIView* _topLineView;
	UIView* _bottomLineView;

}

@property (nonatomic,readonly) IMSearchField * searchField;              //@synthesize searchField=_searchField - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(IMSearchField *)searchField;
@end

