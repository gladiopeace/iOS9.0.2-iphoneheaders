/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIResponder;

@interface UIInputViewPostPinningReloadState : NSObject {

	UIResponder* _responderPreventedFromSettingInputViews;

}

@property (nonatomic,retain) UIResponder * responderToReload;              //@synthesize responderPreventedFromSettingInputViews=_responderPreventedFromSettingInputViews - In the implementation block
+(id)stateWithResponder:(id)arg1 ;
-(void)dealloc;
-(void)setResponderToReload:(UIResponder *)arg1 ;
-(UIResponder *)responderToReload;
@end

