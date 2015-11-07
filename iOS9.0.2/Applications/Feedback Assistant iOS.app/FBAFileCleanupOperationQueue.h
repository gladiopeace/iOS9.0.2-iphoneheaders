/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class NSURL;

@interface FBAFileCleanupOperationQueue : NSOperationQueue {

	NSURL* _directoryURL;

}

@property (retain) NSURL * directoryURL;              //@synthesize directoryURL=_directoryURL - In the implementation block
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(void)addOperation:(id)arg1 ;
-(NSURL *)directoryURL;
-(id)initWithDirectoryURL:(id)arg1 ;
@end

