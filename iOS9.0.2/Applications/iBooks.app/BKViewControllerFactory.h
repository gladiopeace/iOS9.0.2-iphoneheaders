/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewControllerFactory.h>
#import <iBooks/AEStoreViewControllerFactory.h>

@class UIColor, NSString;

@interface BKViewControllerFactory : SUViewControllerFactory <AEStoreViewControllerFactory> {

	UIColor* _pageColor;

}

@property (nonatomic,retain) UIColor * pageColor;                   //@synthesize pageColor=_pageColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)pageColor;
-(void)setPageColor:(UIColor *)arg1 ;
-(id)newPlaceholderViewController;
-(id)newStorePageViewControllerWithSection:(id)arg1 ;
-(id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 ;
-(id)newNetworkLockoutViewControllerWithSection:(id)arg1 ;
@end
