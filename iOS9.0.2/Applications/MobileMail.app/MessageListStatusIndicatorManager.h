/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MessageStatusIndicatorManager.h>

@class NSMutableArray, NSArray;

@interface MessageListStatusIndicatorManager : MessageStatusIndicatorManager {

	NSMutableArray* _statusIndicatorViews;

}

@property (nonatomic,readonly) NSArray * statusIndicatorViews; 
-(NSArray *)statusIndicatorViews;
-(unsigned)tierForIndicator:(unsigned)arg1 ;
-(id)primaryStatusIndicatorImage;
-(void)layoutStatusIndicatorViewsInRect:(CGRect)arg1 ;
-(void)_setUpIndicatorViews;
-(void)dealloc;
@end

