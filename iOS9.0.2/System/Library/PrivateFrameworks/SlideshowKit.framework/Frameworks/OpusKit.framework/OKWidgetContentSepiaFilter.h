/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentSepiaFilter.h>

@class NSNumber;

@interface OKWidgetContentSepiaFilter : OKWidgetBasicFilter <JSOKWidgetContentSepiaFilter> {

	NSNumber* _inputIntensity;

}

@property (nonatomic,retain) NSNumber * inputIntensity;              //@synthesize inputIntensity=_inputIntensity - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithIntensity:(id)arg1 ;
-(id)outputImage;
-(void)dealloc;
-(id)inputKeys;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(void)setSettingInputIntensity:(id)arg1 ;
-(id)settingInputIntensity;
-(NSNumber *)inputIntensity;
@end

