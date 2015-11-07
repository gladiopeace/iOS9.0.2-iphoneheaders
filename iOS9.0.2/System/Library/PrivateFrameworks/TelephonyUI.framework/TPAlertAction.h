/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertAction.h>

@interface TPAlertAction : UIAlertAction {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
+(id)actionWithTitle:(id)arg1 style:(int)arg2 handler:(/*^block*/id)arg3 ;
+(id)actionWithType:(unsigned)arg1 ;
+(id)preferencesURLForClassName:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

