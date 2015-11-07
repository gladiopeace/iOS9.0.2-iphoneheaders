/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor;

@interface ZoomController : PSListController {

	NPSDomainAccessor* _axDomainAccessor;

}

@property (retain) NPSDomainAccessor * axDomainAccessor;              //@synthesize axDomainAccessor=_axDomainAccessor - In the implementation block
-(void)setZoomEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)zoomEnabled:(id)arg1 ;
-(void)setGizmoAxPref:(id)arg1 forKey:(id)arg2 ;
-(NPSDomainAccessor *)axDomainAccessor;
-(void)setAxDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)reload;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
@end

