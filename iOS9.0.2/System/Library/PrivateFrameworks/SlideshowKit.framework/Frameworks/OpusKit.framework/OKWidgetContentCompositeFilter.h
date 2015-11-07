/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentCompositeFilter.h>

@class NSArray, NSString;

@interface OKWidgetContentCompositeFilter : OKWidgetBasicFilter <JSOKWidgetContentCompositeFilter> {

	NSArray* _inputFilters;
	NSArray* _inputBackgroundFilters;
	NSString* _inputCompositionFilterName;

}

@property (nonatomic,retain) NSArray * inputFilters;                             //@synthesize inputFilters=_inputFilters - In the implementation block
@property (nonatomic,retain) NSArray * inputBackgroundFilters;                   //@synthesize inputBackgroundFilters=_inputBackgroundFilters - In the implementation block
@property (nonatomic,retain) NSString * inputCompositionFilterName;              //@synthesize inputCompositionFilterName=_inputCompositionFilterName - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputFilters:(id)arg1 inputBackgroundFilters:(id)arg2 inputCompositionFilterName:(id)arg3 ;
-(id)outputImage;
-(void)dealloc;
-(id)inputKeys;
-(void)setInputCompositionFilterName:(NSString *)arg1 ;
-(void)setInputBackgroundFilters:(NSArray *)arg1 ;
-(void)setInputFilters:(NSArray *)arg1 ;
-(void)setSettingInputCompositionFilterName:(id)arg1 ;
-(void)setSettingInputFilters:(id)arg1 ;
-(void)setSettingInputBackgroundFilters:(id)arg1 ;
-(NSArray *)inputFilters;
-(NSArray *)inputBackgroundFilters;
-(NSString *)inputCompositionFilterName;
@end

