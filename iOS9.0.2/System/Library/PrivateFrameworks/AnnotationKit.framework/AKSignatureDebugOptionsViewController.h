/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UISlider;

@interface AKSignatureDebugOptionsViewController : UIViewController {

	float _minInValue;
	float _maxInValue;
	float _minOutValue;
	float _maxOutValue;
	/*^block*/id _completionHandler;
	UILabel* _minInValueLabel;
	UISlider* _minInValueSlider;
	UILabel* _maxInValueLabel;
	UISlider* _maxInValueSlider;
	UILabel* _minOutValueLabel;
	UISlider* _minOutValueSlider;
	UILabel* _maxOutValueLabel;
	UISlider* _maxOutValueSlider;

}

@property (assign,nonatomic) float minInValue;                          //@synthesize minInValue=_minInValue - In the implementation block
@property (assign,nonatomic) float maxInValue;                          //@synthesize maxInValue=_maxInValue - In the implementation block
@property (assign,nonatomic) float minOutValue;                         //@synthesize minOutValue=_minOutValue - In the implementation block
@property (assign,nonatomic) float maxOutValue;                         //@synthesize maxOutValue=_maxOutValue - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UILabel * minInValueLabel;                 //@synthesize minInValueLabel=_minInValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * minInValueSlider;               //@synthesize minInValueSlider=_minInValueSlider - In the implementation block
@property (nonatomic,retain) UILabel * maxInValueLabel;                 //@synthesize maxInValueLabel=_maxInValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * maxInValueSlider;               //@synthesize maxInValueSlider=_maxInValueSlider - In the implementation block
@property (nonatomic,retain) UILabel * minOutValueLabel;                //@synthesize minOutValueLabel=_minOutValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * minOutValueSlider;              //@synthesize minOutValueSlider=_minOutValueSlider - In the implementation block
@property (nonatomic,retain) UILabel * maxOutValueLabel;                //@synthesize maxOutValueLabel=_maxOutValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * maxOutValueSlider;              //@synthesize maxOutValueSlider=_maxOutValueSlider - In the implementation block
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLoad;
-(void)setMinInValue:(float)arg1 ;
-(void)setMaxInValue:(float)arg1 ;
-(void)setMinOutValue:(float)arg1 ;
-(void)setMaxOutValue:(float)arg1 ;
-(float)minInValue;
-(float)maxInValue;
-(float)minOutValue;
-(float)maxOutValue;
-(UISlider *)minInValueSlider;
-(UISlider *)maxInValueSlider;
-(UISlider *)minOutValueSlider;
-(UISlider *)maxOutValueSlider;
-(UILabel *)minInValueLabel;
-(float)_updateSlider:(id)arg1 andLabel:(id)arg2 withValue:(float)arg3 andLabelFormat:(id)arg4 ;
-(UILabel *)maxInValueLabel;
-(UILabel *)minOutValueLabel;
-(UILabel *)maxOutValueLabel;
-(void)sliderValueChanged:(id)arg1 ;
-(void)applyChanges:(id)arg1 ;
-(void)setMinInValueLabel:(UILabel *)arg1 ;
-(void)setMinInValueSlider:(UISlider *)arg1 ;
-(void)setMaxInValueLabel:(UILabel *)arg1 ;
-(void)setMaxInValueSlider:(UISlider *)arg1 ;
-(void)setMinOutValueLabel:(UILabel *)arg1 ;
-(void)setMinOutValueSlider:(UISlider *)arg1 ;
-(void)setMaxOutValueLabel:(UILabel *)arg1 ;
-(void)setMaxOutValueSlider:(UISlider *)arg1 ;
@end

