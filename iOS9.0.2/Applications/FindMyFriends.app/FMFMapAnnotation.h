/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <libobjc.A.dylib/FMAnnotation.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class FMAccuracyOverlay, UIColor, UIImage, NSString, NSNumber, FMFClientLocation, MKCircle, FMFFriend;

@interface FMFMapAnnotation : NSObject <FMAnnotation, MKAnnotation> {

	NSString* title;
	NSString* subtitle;
	double lastUpdated;
	char userManuallyMoved;
	char isBorderEnabled;
	NSNumber* latitude;
	NSNumber* longitude;
	FMFClientLocation* location;
	MKCircle* circle;
	NSString* uid;
	FMFFriend* friend;
	UIColor* tintColor;
	UIImage* largeAnnotationIcon;
	UIImage* largeOverlayIcon;
	UIImage* smallAnnotationIcon;
	UIImage* smallOverlayIcon;
	FMAccuracyOverlay* _overlay;
	double horizontalAccuracy;
	double distanceFromUser;
	SCD_Struct_FM3 coordinate;

}

@property (nonatomic,retain) FMAccuracyOverlay * overlay;                //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) SCD_Struct_FM3 coordinate; 
@property (assign,nonatomic) double distanceFromUser; 
@property (assign,nonatomic) char isBorderEnabled; 
@property (nonatomic,retain) UIImage * largeAnnotationIcon; 
@property (nonatomic,retain) UIImage * largeOverlayIcon; 
@property (nonatomic,retain) UIImage * smallAnnotationIcon; 
@property (nonatomic,retain) UIImage * smallOverlayIcon; 
@property (nonatomic,retain) FMFFriend * friend; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) FMFClientLocation * location; 
@property (nonatomic,readonly) MKCircle * circle; 
@property (nonatomic,copy) NSString * uid; 
@property (assign,nonatomic) double lastUpdated; 
@property (assign,nonatomic) char userManuallyMoved; 
@property (nonatomic,retain) NSNumber * latitude; 
@property (nonatomic,retain) NSNumber * longitude; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFMFLocation:(id)arg1 andTintColor:(id)arg2 ;
-(void)updateAnnotationData;
-(void)updateValues:(id)arg1 ;
-(char)userManuallyMoved;
-(void)setUserManuallyMoved:(char)arg1 ;
-(MKCircle *)circle;
-(void)setCoordinate:(SCD_Struct_FM3)arg1 ;
-(SCD_Struct_FM3)coordinate;
-(double)horizontalAccuracy;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(FMFClientLocation *)location;
-(NSString *)uid;
-(FMAccuracyOverlay *)overlay;
-(void)setLocation:(FMFClientLocation *)arg1 ;
-(void)setOverlay:(FMAccuracyOverlay *)arg1 ;
-(char)isThisDevice;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1 ;
-(char)isBorderEnabled;
-(UIImage *)largeAnnotationIcon;
-(UIImage *)smallAnnotationIcon;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(UIImage *)arg1 ;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(UIImage *)arg1 ;
-(void)setIsBorderEnabled:(char)arg1 ;
-(void)setSmallAnnotationIcon:(UIImage *)arg1 ;
-(void)setLargeAnnotationIcon:(UIImage *)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(char)hasKnownLocation;
-(void)setLastUpdated:(double)arg1 ;
-(double)lastUpdated;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(char)isNearby;
-(FMFFriend *)friend;
-(void)setFriend:(FMFFriend *)arg1 ;
@end

