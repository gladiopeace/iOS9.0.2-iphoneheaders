/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXInterestAreaViewControllerDelegate <NSObject>
@optional
-(char)isInterestAreaViewAccessibilityElementWithController:(id)arg1;
-(id)referenceViewForConvertingFromAndToWindowCoordinateSystemForInterestAreaViewController:(id)arg1;
-(id)viewToCoverWithOutOfBoundsDrawingForInterestAreaViewWithController:(id)arg1 edgeInsets:(UIEdgeInsets*)arg2;
-(float)scaleForSpecialControlsInInterestAreaViewController:(id)arg1;
-(void)interestAreaViewController:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
-(void)interestAreaViewController:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2;
-(void)getInterestAreaPathForFingerPath:(id)arg1 interestAreaViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)interestAreaPathsDidChangeForInterestAreaViewController:(id)arg1;
-(CGRect*)boundsForConstrainingFingerPathInInterestAreaViewController:(id)arg1;

@end
