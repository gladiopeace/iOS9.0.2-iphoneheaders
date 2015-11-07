/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <FMCoreUI/FMDynamicTypeLabel.h>

@class NSURL;

@interface FMFLinkLabel : FMDynamicTypeLabel {

	char _isUnderlined;
	NSURL* _targetURL;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) char isUnderlined;              //@synthesize isUnderlined=_isUnderlined - In the implementation block
@property (nonatomic,retain) NSURL * targetURL;              //@synthesize targetURL=_targetURL - In the implementation block
@property (assign,nonatomic,__weak) id target;               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                     //@synthesize action=_action - In the implementation block
-(void)setIsUnderlined:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(char)isUnderlined;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setTargetURL:(NSURL *)arg1 ;
-(NSURL *)targetURL;
-(void)performAction;
@end

