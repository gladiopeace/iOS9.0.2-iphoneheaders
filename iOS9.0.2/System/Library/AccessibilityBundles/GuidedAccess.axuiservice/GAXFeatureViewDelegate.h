/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXFeatureViewDelegate <NSObject>
@optional
-(void)featureView:(id)arg1 didChangeState:(char)arg2;
-(void)presentOptionsForFeatureView:(id)arg1;
-(void)featureView:(id)arg1 didChangeTimeRestrictionDuration:(int)arg2 timeRestrictionsEnabled:(char)arg3;

@required
-(id)styleProviderForFeatureView:(id)arg1;

@end

