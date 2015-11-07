/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, _UITableViewCellActionButton, UIVisualEffect;

@interface UITableViewRowAction : NSObject <NSCopying> {

	int _style;
	NSString* _title;
	UIColor* _backgroundColor;
	/*^block*/id _handler;
	_UITableViewCellActionButton* _button;
	UIVisualEffect* _backgroundEffect;

}

@property (nonatomic,readonly) int style;                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (getter=_handler,nonatomic,readonly) id handler;                 //@synthesize handler=_handler - In the implementation block
+(id)rowActionWithStyle:(int)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(id)_initWithStyle:(int)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_button;
-(void)_setButton:(id)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(/*^block*/id)_handler;
@end

