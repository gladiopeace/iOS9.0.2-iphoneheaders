/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ETSettings/ETSettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIImage, NSString;

@interface ETPersonContentView : UIView {

	UILabel* _label;
	UIImageView* _imageView;
	UIImage* _photo;
	int _style;
	char _isHighlighted;
	char _isEmptySlot;
	char _isPeripherySelection;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIImage * photo; 
@property (assign,nonatomic) char isPeripherySelection;                          //@synthesize isPeripherySelection=_isPeripherySelection - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (assign,getter=isEmptySlot,nonatomic) char emptySlot; 
+(id)monogramFontForStyle:(int)arg1 ;
+(SCD_Struct_ET2)_specValuesForStyle:(int)arg1 ;
+(id)_addFriendPeripheryImage;
+(id)_silhouetteImage12upCenter;
+(id)_silhouetteImageQuickLook;
+(id)_silhouetteImageNotificationCenter;
+(id)_silhouetteImage1up;
+(id)_addFriendImage;
+(id)_dotImage;
-(char)isPeripherySelection;
-(char)isEmptySlot;
-(void)setIsPeripherySelection:(char)arg1 ;
-(void)setEmptySlot:(char)arg1 ;
-(void)_updateColorsForCurrentState;
-(UIImage *)photo;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(id)_placeholderImage;
-(void)setPhoto:(UIImage *)arg1 ;
@end

