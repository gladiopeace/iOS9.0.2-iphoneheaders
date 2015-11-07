/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNScheduler;
@interface _CNScheduledObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNScheduler> _scheduler;

}
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
-(id)initWithObservable:(id)arg1 scheduler:(id)arg2 ;
@end

