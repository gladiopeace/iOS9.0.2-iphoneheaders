/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary;


@protocol MCActionSupport
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned countOfActions; 
@required
-(void)demolishActions;
-(void)initActionsWithImprints:(id)arg1;
-(id)imprintsForActions;
-(void)removeActionForKey:(id)arg1;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2;
-(unsigned)countOfActions;

@end

