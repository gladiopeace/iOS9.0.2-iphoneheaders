/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchTableViewCell.h>
#import <libobjc.A.dylib/SPUISearchContactButtonsViewDelegate.h>

@class _MKResultView, NSLayoutConstraint, NSString;

@interface SPUISearchParsecMapsCell : SPUISearchTableViewCell <SPUISearchContactButtonsViewDelegate> {

	_MKResultView* _resultView;
	NSLayoutConstraint* _heightConstraint;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSection:(id)arg1 result:(id)arg2 ;
-(id)constantConstraints;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)buttonPressedWithType:(unsigned)arg1 ;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
@end
