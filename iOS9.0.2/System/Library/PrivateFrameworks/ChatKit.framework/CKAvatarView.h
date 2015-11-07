/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNAvatarView.h>

@class UIViewController, NSString;

@interface CKAvatarView : CNAvatarView {

	UIViewController* _presentingViewController;
	NSString* _preferredHandle;

}

@property (assign,nonatomic) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) NSString * preferredHandle;                               //@synthesize preferredHandle=_preferredHandle - In the implementation block
-(UIViewController *)presentingViewController;
-(void)setHighlighted:(char)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setPreferredHandle:(NSString *)arg1 ;
-(NSString *)preferredHandle;
@end

