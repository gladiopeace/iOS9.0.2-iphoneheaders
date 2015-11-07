/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIView.h>

@class CALayer;

@interface PHRingView : UIView {

	char __selected;
	char __highlighted;
	char __enabled;
	CALayer* _luminanceRingLayer;
	CALayer* _dodgeRingLayer;
	CALayer* _highlightDodgeLayer;
	CALayer* _highlightLuminanceLayer;
	CALayer* _selectionLayer;
	CGSize _ringSize;

}

@property (assign) CGSize ringSize;                                //@synthesize ringSize=_ringSize - In the implementation block
@property (retain) CALayer * luminanceRingLayer;                   //@synthesize luminanceRingLayer=_luminanceRingLayer - In the implementation block
@property (retain) CALayer * dodgeRingLayer;                       //@synthesize dodgeRingLayer=_dodgeRingLayer - In the implementation block
@property (retain) CALayer * highlightDodgeLayer;                  //@synthesize highlightDodgeLayer=_highlightDodgeLayer - In the implementation block
@property (retain) CALayer * highlightLuminanceLayer;              //@synthesize highlightLuminanceLayer=_highlightLuminanceLayer - In the implementation block
@property (retain) CALayer * selectionLayer;                       //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (assign) char _selected;                                 //@synthesize _selected=__selected - In the implementation block
@property (assign) char _highlighted;                              //@synthesize _highlighted=__highlighted - In the implementation block
@property (assign) char _enabled;                                  //@synthesize _enabled=__enabled - In the implementation block
+(id)ringImageCache;
+(id)_createRingImageWithSize:(CGSize)arg1 strokeWidth:(float)arg2 color:(id)arg3 ;
-(char)_highlighted;
-(void)setRingSize:(CGSize)arg1 ;
-(id)ringImageWithSize:(CGSize)arg1 strokeWidth:(float)arg2 color:(id)arg3 cacheIdentifier:(id)arg4 ;
-(char)_selected;
-(void)set_selected:(char)arg1 ;
-(void)set_highlighted:(char)arg1 ;
-(void)set_enabled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)_enabled;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)ringSize;
-(CALayer *)luminanceRingLayer;
-(void)setLuminanceRingLayer:(CALayer *)arg1 ;
-(CALayer *)dodgeRingLayer;
-(void)setDodgeRingLayer:(CALayer *)arg1 ;
-(CALayer *)highlightDodgeLayer;
-(void)setHighlightDodgeLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLuminanceLayer;
-(void)setHighlightLuminanceLayer:(CALayer *)arg1 ;
-(CALayer *)selectionLayer;
-(void)setSelectionLayer:(CALayer *)arg1 ;
@end

