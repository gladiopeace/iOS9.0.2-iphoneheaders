/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/DOMEventListener.h>

@class NSString;

@interface BKWebViewMainThreadEventListener : NSObject <DOMEventListener> {

	char _shouldPreventDefault;
	id _target;
	SEL _action;

}

@property (assign) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                      //@synthesize action=_action - In the implementation block
@property (assign) char shouldPreventDefault;                       //@synthesize shouldPreventDefault=_shouldPreventDefault - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldPreventDefault;
-(void)mainThreadHandleEvent:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 shouldPreventDefault:(char)arg3 ;
-(void)setShouldPreventDefault:(char)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(void)handleEvent:(id)arg1 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
@end

