/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSPort;

@interface PLMomentAnalyzerWorkThread : NSThread {

	NSPort* _dummyPort;

}
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)main;
-(void)removeDummyPort;
@end

