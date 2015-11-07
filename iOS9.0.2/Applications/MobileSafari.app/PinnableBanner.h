/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface PinnableBanner : UIView {

	char _pinnedToTop;
	char _initiallyBehindNavigationBar;

}

@property (assign,getter=isPinnedToTop,nonatomic) char pinnedToTop;                                                //@synthesize pinnedToTop=_pinnedToTop - In the implementation block
@property (assign,getter=isInitiallyBehindNavigationBar,nonatomic) char initiallyBehindNavigationBar;              //@synthesize initiallyBehindNavigationBar=_initiallyBehindNavigationBar - In the implementation block
+(double)pinAnimationDelay;
+(double)unpinAnimationDelay;
+(double)unpinAnimationDuration;
-(char)isPinnedToTop;
-(char)isInitiallyBehindNavigationBar;
-(void)setPinnedToTop:(char)arg1 ;
-(void)setInitiallyBehindNavigationBar:(char)arg1 ;
@end

