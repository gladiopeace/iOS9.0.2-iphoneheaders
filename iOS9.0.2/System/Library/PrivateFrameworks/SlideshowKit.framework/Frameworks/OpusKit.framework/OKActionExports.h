/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary;


@protocol OKActionExports <JSExport>
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) unsigned state; 
@property (nonatomic,readonly) unsigned touchCount; 
@property (nonatomic,readonly) unsigned platform; 
@property (nonatomic,retain,readonly) NSDictionary * context; 
@required
-(double)timestamp;
-(unsigned)state;
-(NSDictionary *)context;
-(CGPoint)location;
-(unsigned)touchCount;
-(unsigned)platform;
-(void)setContextObject:(id)arg1 forKey:(id)arg2;

@end

