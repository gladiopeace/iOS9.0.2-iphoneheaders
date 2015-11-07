/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class FMAccuracyOverlay, UIColor, UIImage, NSString;


@protocol FMAnnotation <NSObject>
@property (nonatomic,retain) FMAccuracyOverlay * overlay; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) SCD_Struct_FM0 coordinate; 
@property (assign,nonatomic) double distanceFromUser; 
@property (assign,nonatomic) char isBorderEnabled; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIImage * largeAnnotationIcon; 
@property (nonatomic,retain) UIImage * smallAnnotationIcon; 
@property (nonatomic,retain) UIImage * largeOverlayIcon; 
@property (nonatomic,retain) UIImage * smallOverlayIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(SCD_Struct_FM0)arg1;
-(NSString *)title;
-(NSString *)subtitle;

@required
-(SCD_Struct_FM0)coordinate;
-(double)horizontalAccuracy;
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(FMAccuracyOverlay *)overlay;
-(void)setOverlay:(id)arg1;
-(char)isThisDevice;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1;
-(char)isBorderEnabled;
-(UIImage *)largeAnnotationIcon;
-(UIImage *)smallAnnotationIcon;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(id)arg1;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(id)arg1;
-(void)setIsBorderEnabled:(char)arg1;
-(void)setSmallAnnotationIcon:(id)arg1;
-(void)setLargeAnnotationIcon:(id)arg1;
-(void)setHorizontalAccuracy:(double)arg1;
-(char)hasKnownLocation;

@end

