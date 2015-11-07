/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface SKUIExternalResourceImage : NSObject {

	char _alwaysTemplate;
	NSString* _imageName;
	NSBundle* _bundle;

}

@property (nonatomic,copy) NSString * imageName;               //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) char alwaysTemplate;              //@synthesize alwaysTemplate=_alwaysTemplate - In the implementation block
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(char)alwaysTemplate;
-(void)setAlwaysTemplate:(char)arg1 ;
@end

