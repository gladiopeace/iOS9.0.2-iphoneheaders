/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextView.h>

@class UITapGestureRecognizer, UIViewController;

@interface ICLearnMoreTextView : UITextView {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;               //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
-(void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(float)arg3 addLearnMore:(char)arg4 ;
-(void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(float)arg4 addLearnMore:(char)arg5 ;
-(void)resetTextView;
-(void)didTapLearnMore;
-(char)_accessibilityHasTextOperations;
-(void)tapGesture:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)dealloc;
-(UIViewController *)parentViewController;
-(id)accessibilityLabel;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(char)accessibilityActivate;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

