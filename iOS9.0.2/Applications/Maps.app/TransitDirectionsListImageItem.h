/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/TransitDirectionsListItem.h>

@class UIImage;

@interface TransitDirectionsListImageItem : TransitDirectionsListItem {

	UIImage* _mainImage;

}

@property (nonatomic,retain) UIImage * mainImage;              //@synthesize mainImage=_mainImage - In the implementation block
-(id)initWithImage:(id)arg1 instructions:(id)arg2 ;
-(id)initWithImage:(id)arg1 instructions:(id)arg2 incidentMessage:(id)arg3 ;
-(UIImage *)mainImage;
-(void)setMainImage:(UIImage *)arg1 ;
@end

