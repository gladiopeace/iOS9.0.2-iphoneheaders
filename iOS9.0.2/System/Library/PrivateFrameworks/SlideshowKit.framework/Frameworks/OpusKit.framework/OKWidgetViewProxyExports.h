/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OKWidgetViewProxyExports <JSExport>
@optional
-(void)dynamicsSnapToPoint:(CGPoint)arg1 withDamping:(float)arg2 __JS_EXPORT_AS__dynamicsSnapToPoint:(id)arg3;
-(id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 __JS_EXPORT_AS__addSubWidgetViewWithTemplateName:(id)arg4;
-(CGPoint*)convertPointWithParallax:(CGPoint)arg1 __JS_EXPORT_AS__convertPointWithParallax:(id)arg2;
-(id)subWidgetViewsInRect:(CGRect)arg1 __JS_EXPORT_AS__subWidgetViewsInRect:(id)arg2;

@required
-(void)dynamicsRemoveSnapping;
-(void)dynamicsSnapToPoint:(CGPoint)arg1 withDamping:(float)arg2;
-(id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3;
-(CGPoint*)convertPointWithParallax:(CGPoint)arg1;
-(id)subWidgetViewsInRect:(CGRect)arg1;

@end

