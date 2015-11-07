/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIViewController.h>
#import <FaceTime/PhoneTabViewController.h>

@class NSString;

@interface PhoneViewController : UIViewController <PhoneTabViewController> {

	float _cachedCellHeight;
	Class _cellClassForCachedCellHeight;

}

@property (assign) float cachedCellHeight;                                    //@synthesize cachedCellHeight=_cachedCellHeight - In the implementation block
@property (nonatomic,retain) Class cellClassForCachedCellHeight;              //@synthesize cellClassForCachedCellHeight=_cellClassForCachedCellHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeIconAndTitle:(id)arg1 ;
+(id)tabBarIconName;
+(int)tabViewType;
+(void)cacheFinishedTabBarIconImage:(id)arg1 finishedSelectedTabBarIconImage:(id)arg2 withTabBarItemName:(id)arg3 ;
+(char)tabBarIconImageFinished:(id*)arg1 selectedImage:(id*)arg2 forTabBarItemName:(id)arg3 ;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(void)savePreferences;
-(void)_updateCachedCellHeight;
-(Class)cellClassForCachedCellHeight;
-(void)setCachedCellHeight:(float)arg1 ;
-(char)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)_saveOffsetDefaultForKey:(id)arg1 withScrollView:(id)arg2 ;
-(void)_loadOffsetDefaultForKey:(id)arg1 withScrollView:(id)arg2 ;
-(void)_prepareForLoadView;
-(void)setCellClassForCachedCellHeight:(Class)arg1 ;
-(float)cachedCellHeight;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillUnload;
-(void)contentSizeCategoryDidChange;
-(void)handleURL:(id)arg1 ;
@end

