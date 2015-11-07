/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKWidgetNode.h>
#import <libobjc.A.dylib/JSOKWidgetSphereNode.h>

@class SCNSphere;

@interface OKWidgetSphereNode : OKWidgetNode <JSOKWidgetSphereNode> {

	SCNSphere* _sphere;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)sphereWithRadius:(float)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(float)settingRadius;
-(void)setSettingRadius:(float)arg1 ;
@end

