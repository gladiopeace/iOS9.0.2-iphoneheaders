/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImage.h>

@class NSData;

@interface _UIMappedBitmapImage : UIImage {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
+(char)supportsSecureCoding;
+(void)initialize;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)_configureImage:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)_preheatBitmapData;
@end

