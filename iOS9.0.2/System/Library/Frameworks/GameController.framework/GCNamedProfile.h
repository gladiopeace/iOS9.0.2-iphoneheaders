/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol GCNamedProfile <NSObject>
@property (readonly) NSString * name; 
@optional
-(void)appWillResignActive;
-(void)appDidBecomeActive;
-(void)set_motion:(id)arg1;
-(unsigned)sampleRate;

@required
-(/*^block*/id)valueChangedHandler;
-(id)inputForElement:(IOHIDElementRef)arg1;
-(void)handleReport:(unsigned)arg1 data:(id)arg2;
-(void)setPlayerIndex:(int)arg1;
-(id)initWithController:(id)arg1;
-(NSString *)name;
-(void)setController:(id)arg1;

@end

