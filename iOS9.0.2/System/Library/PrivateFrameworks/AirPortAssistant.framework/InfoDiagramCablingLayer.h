/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@protocol InfoDiagramCablingAnchorDelegate;
@class CAShapeLayer, CAGradientLayer;

@interface InfoDiagramCablingLayer : CALayer {

	id<InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate;
	char swapCabling;
	char isCompactWidth;
	CAShapeLayer* internetInnerLineLayer;
	CAShapeLayer* internetOuterLineLayer;
	CAGradientLayer* internetGradientLayer;
	CAShapeLayer* broadbandToWANInnerLineLayer;
	CAShapeLayer* broadbandToWANOuterLineLayer;
	CAShapeLayer* swapArcLineLayer;
	CAShapeLayer* swapArcArrowLayer;

}

@property (assign,nonatomic) id<InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate; 
@property (assign,nonatomic) char swapCabling; 
@property (assign,nonatomic) char isCompactWidth; 
@property (nonatomic,retain) CAShapeLayer * internetInnerLineLayer; 
@property (nonatomic,retain) CAShapeLayer * internetOuterLineLayer; 
@property (nonatomic,retain) CAGradientLayer * internetGradientLayer; 
@property (nonatomic,retain) CAShapeLayer * broadbandToWANInnerLineLayer; 
@property (nonatomic,retain) CAShapeLayer * broadbandToWANOuterLineLayer; 
@property (nonatomic,retain) CAShapeLayer * swapArcLineLayer; 
@property (nonatomic,retain) CAShapeLayer * swapArcArrowLayer; 
-(void)dealloc;
-(void)commonInit;
-(void)layoutSublayers;
-(id)initNoWANLinkFirstFrame;
-(void)setDiagramAnchorPointDelegate:(id<InfoDiagramCablingAnchorDelegate>)arg1 ;
-(void)setIsCompactWidth:(char)arg1 ;
-(id)initNoWANLinkLastFrame;
-(void)setSwapCabling:(char)arg1 ;
-(void)setInternetOuterLineLayer:(CAShapeLayer *)arg1 ;
-(void)setInternetInnerLineLayer:(CAShapeLayer *)arg1 ;
-(void)setInternetGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setBroadbandToWANOuterLineLayer:(CAShapeLayer *)arg1 ;
-(void)setBroadbandToWANInnerLineLayer:(CAShapeLayer *)arg1 ;
-(void)setSwapArcLineLayer:(CAShapeLayer *)arg1 ;
-(void)setSwapArcArrowLayer:(CAShapeLayer *)arg1 ;
-(void)createPathForSublayer:(id)arg1 ;
-(char)swapCabling;
-(id<InfoDiagramCablingAnchorDelegate>)diagramAnchorPointDelegate;
-(CAShapeLayer *)internetOuterLineLayer;
-(CAShapeLayer *)internetInnerLineLayer;
-(CAGradientLayer *)internetGradientLayer;
-(CAShapeLayer *)broadbandToWANInnerLineLayer;
-(CAShapeLayer *)broadbandToWANOuterLineLayer;
-(CAShapeLayer *)swapArcLineLayer;
-(CAShapeLayer *)swapArcArrowLayer;
-(char)isCompactWidth;
@end

