/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarStyleRequest.h>

@class UIColor, NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (assign,nonatomic) int style; 
@property (assign,getter=isLegacy,nonatomic) char legacy; 
@property (assign,nonatomic) int legibilityStyle; 
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (nonatomic,retain) NSNumber * overrideHeight; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setLegibilityStyle:(int)arg1 ;
-(void)setLegacy:(char)arg1 ;
-(void)setOverrideHeight:(NSNumber *)arg1 ;
@end

