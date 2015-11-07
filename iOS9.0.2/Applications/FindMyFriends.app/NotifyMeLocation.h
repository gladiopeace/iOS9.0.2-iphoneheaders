/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FindMyFriends/FindMyFriends-Structs.h>
@class FMFGeoFence, UIImage;

@interface NotifyMeLocation : NSObject {

	char _selected;
	char _isFriendLocation;
	FMFGeoFence* _fence;
	UIImage* _image;
	SCD_Struct_Ma4 _lastMapRect;

}

@property (nonatomic,retain) FMFGeoFence * fence;                     //@synthesize fence=_fence - In the implementation block
@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) SCD_Struct_Ma4 lastMapRect;              //@synthesize lastMapRect=_lastMapRect - In the implementation block
@property (assign,nonatomic) char selected;                           //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) char isFriendLocation;                   //@synthesize isFriendLocation=_isFriendLocation - In the implementation block
-(FMFGeoFence *)fence;
-(void)setFence:(FMFGeoFence *)arg1 ;
-(SCD_Struct_Ma4)lastMapRect;
-(void)setLastMapRect:(SCD_Struct_Ma4)arg1 ;
-(char)isFriendLocation;
-(void)setIsFriendLocation:(char)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setSelected:(char)arg1 ;
-(char)selected;
@end

