/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/GameController.app/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <UIKit/UIView.h>

@class GCControllerDirectionPad;

@interface DPadUIView : UIView {

	GCControllerDirectionPad* _source;

}

@property (nonatomic,retain) GCControllerDirectionPad * source;              //@synthesize source=_source - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(GCControllerDirectionPad *)source;
-(void)setSource:(GCControllerDirectionPad *)arg1 ;
@end

