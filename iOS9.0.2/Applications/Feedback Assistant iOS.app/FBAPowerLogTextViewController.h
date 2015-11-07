/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UITextView, NSString;

@interface FBAPowerLogTextViewController : UIViewController {

	UITextView* _textView;
	NSString* _contents;

}

@property (__weak) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (copy) NSString * contents;                  //@synthesize contents=_contents - In the implementation block
-(void)displayText:(id)arg1 ;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewDidLoad;
-(UITextView *)textView;
@end

