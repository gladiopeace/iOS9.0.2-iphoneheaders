/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIViewControllerPreviewAction : NSObject <NSCopying> {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id handler;                    //@synthesize handler=_handler - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)_initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

