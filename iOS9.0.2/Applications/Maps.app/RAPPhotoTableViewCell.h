/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, NSLayoutConstraint, UIImage;

@interface RAPPhotoTableViewCell : UITableViewCell {

	int _appearance;
	UIButton* _addAPhotoButton;
	UIImageView* _cameraGlyphImageView;
	UIImageView* _imageView;
	NSLayoutConstraint* _preferredHeightConstraint;
	UIImage* _photo;

}

@property (nonatomic,retain) UIImage * photo;              //@synthesize photo=_photo - In the implementation block
+(float)preferredHeightForAppearance:(int)arg1 photo:(id)arg2 ;
+(float)_actualPreferredHeightForAppearance:(int)arg1 photo:(id)arg2 ;
-(id)initWithAppearance:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIImage *)photo;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setPhoto:(UIImage *)arg1 ;
@end

