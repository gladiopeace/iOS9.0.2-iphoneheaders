/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSNumberFormatter;

@interface QLPageNumberView : UIView {

	int _pageNumber;
	int _pageCount;
	UILabel* _backgroundLabel;
	UILabel* _label;
	NSNumberFormatter* _indexFormatter;

}

@property (assign) int pageNumber; 
@property (assign) int pageCount; 
-(void)setPageNumber:(int)arg1 ;
-(id)_indexFormatter;
-(void)_updateString;
-(CGPathRef)_copyMutablePathForRoundedRect:(CGRect)arg1 radius:(float)arg2 inverted:(char)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;
-(int)pageCount;
-(void)setPageCount:(int)arg1 ;
-(int)pageNumber;
@end

