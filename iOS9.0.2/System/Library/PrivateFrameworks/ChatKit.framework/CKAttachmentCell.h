/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKAttachmentCellDelegate;
@class UIImage, CKAnimatedImage, UIImageView, NSObject, CKAttachmentItem, NSArray, UITapGestureRecognizer, NSString;

@interface CKAttachmentCell : UICollectionViewCell <CKAnimationTimerObserver, UIGestureRecognizerDelegate> {

	char _editing;
	char _isIrisAsset;
	UIImage* _image;
	CKAnimatedImage* _animatedImage;
	UIImageView* _checkmarkView;
	NSObject*<CKAttachmentCellDelegate> _delegate;
	CKAttachmentItem* _representedObject;
	NSArray* _frames;
	UITapGestureRecognizer* _tapRecognizer;
	UIImageView* _irisBadgeView;

}

@property (nonatomic,retain) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * iconImage; 
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                           //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                               //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic) NSObject*<CKAttachmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKAttachmentItem * representedObject;                      //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                             //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) char isIrisAsset;                                          //@synthesize isIrisAsset=_isIrisAsset - In the implementation block
@property (nonatomic,copy) NSArray * frames;                                            //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                    //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIImageView * irisBadgeView;                               //@synthesize irisBadgeView=_irisBadgeView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIconImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(NSObject*<CKAttachmentCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSObject*<CKAttachmentCellDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIImage *)image;
-(char)isEditing;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(void)setEditing:(char)arg1 ;
-(void)copy:(id)arg1 ;
-(UIImage *)iconImage;
-(void)delete:(id)arg1 ;
-(UIImageView *)checkmarkView;
-(CKAttachmentItem *)representedObject;
-(void)setRepresentedObject:(CKAttachmentItem *)arg1 ;
-(void)more:(id)arg1 ;
-(void)saveAttachment:(id)arg1 ;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(char)isIrisAsset;
-(void)setIsIrisAsset:(char)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(UIImageView *)irisBadgeView;
-(void)setFrames:(NSArray *)arg1 ;
-(CGImageRef)_cgImageForUIImage:(id)arg1 ;
-(NSArray *)frames;
-(void)updateAnimationTimerObserving;
-(void)setIrisBadgeView:(UIImageView *)arg1 ;
-(void)animationTimerFired:(unsigned)arg1 ;
-(CKAnimatedImage *)animatedImage;
-(UITapGestureRecognizer *)tapRecognizer;
@end

