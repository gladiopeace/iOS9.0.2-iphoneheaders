/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCPlug.h>

@class NSString, MCContainerNavigator, MCAction;

@interface MCPlugHaven : MCPlug {

	NSString* mIDInSupercontainer;
	MCContainerNavigator* mSupercontainer;

}

@property (getter=idInSupercontainer,copy) NSString * idInSupercontainer; 
@property (nonatomic,retain) MCAction * actionOnCompletion; 
@property (assign) MCContainerNavigator * supercontainer; 
-(MCContainerNavigator *)supercontainer;
-(NSString *)idInSupercontainer;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setSupercontainer:(MCContainerNavigator *)arg1 ;
-(void)setIDInSupercontainer:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setActionOnCompletion:(MCAction *)arg1 ;
-(MCAction *)actionOnCompletion;
-(id)imprint;
@end

