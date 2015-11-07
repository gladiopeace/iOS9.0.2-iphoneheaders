/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetLinearGradientViewProxyExports.h>

@class OFLinearGradientView, NSArray;

@interface OKWidgetLinearGradientView : OKWidgetView <OKWidgetLinearGradientViewProxyExports> {

	OFLinearGradientView* _gradientView;
	NSArray* _gradientColors;
	NSArray* _gradientLocations;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)prepareForDisplay:(char)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(void)setAntialiasing:(char)arg1 ;
-(void)updateGradient;
-(id)settingGradientLocations;
-(void)setSettingGradientLocations:(id)arg1 ;
-(id)settingGradientColors;
-(void)setSettingGradientColors:(id)arg1 ;
-(char)settingOpaque;
-(CGPoint)settingStartPoint;
-(void)setSettingStartPoint:(CGPoint)arg1 ;
-(CGPoint)settingEndPoint;
-(void)setSettingEndPoint:(CGPoint)arg1 ;
-(void)setSettingOpaque:(char)arg1 ;
@end

