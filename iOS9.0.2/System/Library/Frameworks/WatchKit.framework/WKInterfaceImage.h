/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>
#import <libobjc.A.dylib/WKImageAnimatable.h>

@class NSString;

@interface WKInterfaceImage : WKInterfaceObject <WKImageAnimatable>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setImageData:(id)arg1 ;
-(void)startAnimatingWithImagesInRange:(NSRange)arg1 duration:(double)arg2 repeatCount:(int)arg3 ;
-(void)setImageNamed:(id)arg1 ;
@end

