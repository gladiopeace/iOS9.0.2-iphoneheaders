/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXEventStealerViewDelegate;
@interface GAXEventStealerView : UIView {

	char _shouldStealAllEvents;
	id<GAXEventStealerViewDelegate> _eventStealerViewDelegate;

}

@property (assign,nonatomic) char shouldStealAllEvents;                                             //@synthesize shouldStealAllEvents=_shouldStealAllEvents - In the implementation block
@property (assign,nonatomic) id<GAXEventStealerViewDelegate> eventStealerViewDelegate;              //@synthesize eventStealerViewDelegate=_eventStealerViewDelegate - In the implementation block
-(void)setEventStealerViewDelegate:(id<GAXEventStealerViewDelegate>)arg1 ;
-(void)setShouldStealAllEvents:(char)arg1 ;
-(char)shouldStealAllEvents;
-(id<GAXEventStealerViewDelegate>)eventStealerViewDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
@end

