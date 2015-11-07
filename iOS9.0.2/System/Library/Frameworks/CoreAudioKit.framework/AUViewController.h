/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSExtensionContext, NSString;

@interface AUViewController : UIViewController <NSExtensionRequestHandling> {

	NSExtensionContext* _context;

}

@property (assign) NSExtensionContext * context;                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtensionContext *)context;
-(void)setContext:(NSExtensionContext *)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
@end
