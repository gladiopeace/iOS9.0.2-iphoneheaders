/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXIPCServerMessageHandlerContext : NSObject {

	char _async;
	/*^block*/id _handler;
	id _target;
	SEL _selector;

}

@property (nonatomic,readonly) id handler;                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id target;                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;              //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) char async;                //@synthesize async=_async - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(char)arg3 ;
-(char)async;
@end

