/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/OKWidgetContentColorMatrixFilter.h>

@protocol OKWidgetContentColorMatrixFilter <JSExport>
@optional
+(id)filterWithInputRVector:(SCNVector4)arg1 inputGVector:(SCNVector4)arg2 inputBVector:(SCNVector4)arg3 inputAVector:(SCNVector4)arg4 inputBiasVector:(SCNVector4)arg5 __JS_EXPORT_AS__filterWithInputRVector:(id)arg6;

@required
+(id)filterWithInputRVector:(SCNVector4)arg1 inputGVector:(SCNVector4)arg2 inputBVector:(SCNVector4)arg3 inputAVector:(SCNVector4)arg4 inputBiasVector:(SCNVector4)arg5;

@end


@class CIVector;

@interface OKWidgetContentColorMatrixFilter : OKWidgetBasicFilter <OKWidgetContentColorMatrixFilter> {

	CIVector* _inputRVector;
	CIVector* _inputGVector;
	CIVector* _inputBVector;
	CIVector* _inputAVector;
	CIVector* _inputBiasVector;

}

@property (nonatomic,retain) CIVector * inputRVector;                 //@synthesize inputRVector=_inputRVector - In the implementation block
@property (nonatomic,retain) CIVector * inputGVector;                 //@synthesize inputGVector=_inputGVector - In the implementation block
@property (nonatomic,retain) CIVector * inputBVector;                 //@synthesize inputBVector=_inputBVector - In the implementation block
@property (nonatomic,retain) CIVector * inputAVector;                 //@synthesize inputAVector=_inputAVector - In the implementation block
@property (nonatomic,retain) CIVector * inputBiasVector;              //@synthesize inputBiasVector=_inputBiasVector - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputRVector:(SCNVector4)arg1 inputGVector:(SCNVector4)arg2 inputBVector:(SCNVector4)arg3 inputAVector:(SCNVector4)arg4 inputBiasVector:(SCNVector4)arg5 ;
-(id)outputImage;
-(void)dealloc;
-(id)inputKeys;
-(void)setSettingInputRVector:(SCNVector4)arg1 ;
-(void)setSettingInputGVector:(SCNVector4)arg1 ;
-(void)setSettingInputBVector:(SCNVector4)arg1 ;
-(void)setSettingInputAVector:(SCNVector4)arg1 ;
-(void)setSettingInputBiasVector:(SCNVector4)arg1 ;
-(CIVector *)inputRVector;
-(void)setInputRVector:(CIVector *)arg1 ;
-(CIVector *)inputGVector;
-(void)setInputGVector:(CIVector *)arg1 ;
-(CIVector *)inputBVector;
-(void)setInputBVector:(CIVector *)arg1 ;
-(CIVector *)inputAVector;
-(void)setInputAVector:(CIVector *)arg1 ;
-(CIVector *)inputBiasVector;
-(void)setInputBiasVector:(CIVector *)arg1 ;
@end
