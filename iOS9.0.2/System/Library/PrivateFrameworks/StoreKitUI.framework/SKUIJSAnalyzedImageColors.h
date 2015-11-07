/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSAnalyzedImageColors.h>
@class SKUIJSColor;


@protocol SKUIJSAnalyzedImageColors <JSExport>
@property (nonatomic,readonly) SKUIJSColor * backgroundColor; 
@property (nonatomic,readonly) SKUIJSColor * textPrimaryColor; 
@property (nonatomic,readonly) SKUIJSColor * textSecondaryColor; 
@property (nonatomic,readonly) char isBackgroundLight; 
@required
-(SKUIJSColor *)backgroundColor;
-(SKUIJSColor *)textPrimaryColor;
-(SKUIJSColor *)textSecondaryColor;
-(char)isBackgroundLight;

@end


@class SKUIJSColor;

@interface SKUIJSAnalyzedImageColors : IKJSObject <SKUIJSAnalyzedImageColors> {

	SKUIJSColor* _backgroundColor;
	SKUIJSColor* _textPrimaryColor;
	SKUIJSColor* _textSecondaryColor;
	char _isBackgroundLight;

}

@property (nonatomic,readonly) SKUIJSColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) SKUIJSColor * textPrimaryColor;                //@synthesize textPrimaryColor=_textPrimaryColor - In the implementation block
@property (nonatomic,readonly) SKUIJSColor * textSecondaryColor;              //@synthesize textSecondaryColor=_textSecondaryColor - In the implementation block
@property (nonatomic,readonly) char isBackgroundLight;                        //@synthesize isBackgroundLight=_isBackgroundLight - In the implementation block
-(SKUIJSColor *)backgroundColor;
-(SKUIJSColor *)textPrimaryColor;
-(SKUIJSColor *)textSecondaryColor;
-(char)isBackgroundLight;
-(id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2 ;
@end

