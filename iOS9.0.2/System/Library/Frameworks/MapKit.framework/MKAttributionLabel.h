/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UILabel.h>

@interface MKAttributionLabel : UILabel {

	unsigned _mapType;
	char _useDarkText;

}

@property (assign,nonatomic) unsigned mapType;              //@synthesize mapType=_mapType - In the implementation block
-(id)_attributesWithStroke:(char)arg1 ;
-(void)_prepareLabel;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(unsigned)mapType;
-(void)setMapType:(unsigned)arg1 ;
@end

