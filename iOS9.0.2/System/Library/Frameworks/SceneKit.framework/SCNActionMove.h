/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionMove : SCNAction {

	SCNCActionMove* _mycaction;

}
+(id)moveByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)moveToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)moveBy:(SCNVector3)arg1 duration:(double)arg2 ;
+(char)supportsSecureCoding;
+(id)moveTo:(SCNVector3)arg1 duration:(double)arg2 ;
-(id)reversedAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parameters;
-(char)isRelative;
@end

