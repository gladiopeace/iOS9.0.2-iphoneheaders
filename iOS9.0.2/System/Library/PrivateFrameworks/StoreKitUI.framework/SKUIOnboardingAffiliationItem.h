/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString, NSURL;

@interface SKUIOnboardingAffiliationItem : NSObject <NSCopying> {

	UIColor* _fillColor;
	NSString* _identifier;
	NSString* _imageName;
	NSString* _imageTreatment;
	NSURL* _imageURL;
	NSString* _title;
	int _userAffinityCount;

}

@property (nonatomic,copy) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * imageName;                   //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * imageTreatment;              //@synthesize imageTreatment=_imageTreatment - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                       //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int userAffinityCount;                //@synthesize userAffinityCount=_userAffinityCount - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(NSString *)imageName;
-(int)userAffinityCount;
-(void)setUserAffinityCount:(int)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)imageTreatment;
-(void)setImageTreatment:(NSString *)arg1 ;
-(NSURL *)imageURL;
@end

