/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationManagerDelegate <NSObject>
@optional
-(void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;

@required
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;

@end

