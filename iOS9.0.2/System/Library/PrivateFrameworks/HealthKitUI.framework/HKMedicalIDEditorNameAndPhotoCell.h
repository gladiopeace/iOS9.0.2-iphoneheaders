/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKMedicalIDEditorMultilineStringCell.h>

@class UIView, UIButton, NSString, UIImage;

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell {

	UIView* _nameBottomSeparator;
	UIButton* _editPhotoButton;
	UIButton* _editPhotoLabelButton;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) UIImage * photo; 
@property (nonatomic,readonly) UIButton * editPhotoButton;                   //@synthesize editPhotoButton=_editPhotoButton - In the implementation block
@property (nonatomic,readonly) UIButton * editPhotoLabelButton;              //@synthesize editPhotoLabelButton=_editPhotoLabelButton - In the implementation block
+(char)showsLabelAndValue;
-(UIButton *)editPhotoButton;
-(UIImage *)photo;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)setPhoto:(UIImage *)arg1 ;
-(UIButton *)editPhotoLabelButton;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

