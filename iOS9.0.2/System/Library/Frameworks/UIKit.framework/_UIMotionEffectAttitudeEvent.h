/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIMotionEffectEvent.h>

@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent {

	SCD_Struct_UI86 _attitude;

}

@property (nonatomic,readonly) SCD_Struct_UI86 attitude;              //@synthesize attitude=_attitude - In the implementation block
-(SCD_Struct_UI86)attitude;
-(double)velocityRelativeToPreviousEvent:(id)arg1 ;
-(id)copyWithTimestamp:(double)arg1 ;
-(id)initWithTimestamp:(double)arg1 attitude:(SCD_Struct_UI86)arg2 ;
@end

