/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@interface IMPulseEvent : NSObject {

	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _cond;
	int _gate_open;

}
-(void)dealloc;
-(id)init;
-(void)pulse;
-(void)wait;
@end

