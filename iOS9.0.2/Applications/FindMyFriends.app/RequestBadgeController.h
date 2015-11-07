/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>

@class RequestsBadgeView, UINavigationController, NSString;

@interface RequestBadgeController : NSObject <UINavigationControllerDelegate> {

	char _forceNoBadge;
	char _isUpdatePending;
	RequestsBadgeView* _badgeView;
	int _nextDisplayMode;
	unsigned _lastCount;
	UINavigationController* _mainNavigationController;

}

@property (nonatomic,retain) RequestsBadgeView * badgeView;                                         //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) int nextDisplayMode;                                                   //@synthesize nextDisplayMode=_nextDisplayMode - In the implementation block
@property (assign,nonatomic) unsigned lastCount;                                                    //@synthesize lastCount=_lastCount - In the implementation block
@property (assign,nonatomic) char forceNoBadge;                                                     //@synthesize forceNoBadge=_forceNoBadge - In the implementation block
@property (assign,nonatomic) char isUpdatePending;                                                  //@synthesize isUpdatePending=_isUpdatePending - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * mainNavigationController;              //@synthesize mainNavigationController=_mainNavigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setBadgeView:(RequestsBadgeView *)arg1 ;
-(void)updateBadgeFrame;
-(void)splitViewDisplayModeWillChange:(id)arg1 ;
-(void)forceNoBadgeMomentarily;
-(void)setForceNoBadge:(char)arg1 ;
-(void)performUpdateWithDelay;
-(void)setNextDisplayMode:(int)arg1 ;
-(char)isUpdatePending;
-(void)setIsUpdatePending:(char)arg1 ;
-(UINavigationController *)mainNavigationController;
-(char)forceNoBadge;
-(int)nextDisplayMode;
-(unsigned)lastCount;
-(void)setLastCount:(unsigned)arg1 ;
-(void)hideBadge;
-(void)_showBadge;
-(void)setMainNavigationController:(UINavigationController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(RequestsBadgeView *)badgeView;
-(void)update;
-(void)showBadge;
@end

