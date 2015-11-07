/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _MKPlaceViewControllerDelegate <NSObject>
@optional
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectTransitLine:(id)arg2;
-(void)placeViewController:(id)arg1 hasFavoriteForMapItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewController:(id)arg1 didSelectActivityOfType:(id)arg2 completed:(char)arg3;
-(void)placeViewController:(id)arg1 didSelectTransitConnectionInformation:(id)arg2;
-(void)placeViewControllerDidSelectRemovePin:(id)arg1;
-(void)placeViewControllerDidDismiss:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectReroute:(id)arg2 withDecoderData:(id)arg3 withOrigin:(id)arg4;
-(void)placeViewController:(id)arg1 addFavoriteForMapItem:(id)arg2 title:(id)arg3 result:(/*^block*/id)arg4;
-(void)placeViewController:(id)arg1 removeFavoriteForMapItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewControllerDidSelectShareLocation:(id)arg1;
-(id)activityViewControllerForPlaceViewController:(id)arg1;
-(void)placeViewControllerDidSelectFlyoverTour:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectRerouteFromAddressWithIdentifier:(int)arg2;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned)arg2;
-(char)placeViewController:(id)arg1 shouldOpenHomePage:(id)arg2;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectAddressWithIdentifier:(int)arg2;
-(void)placeViewControllerDidSelectDisplayedPhoneNumber:(id)arg1;
-(void)placeViewControllerDidSelectDisplayedHomePage:(id)arg1;
-(void)placeViewControllerDidSelectOnePhoto:(id)arg1;
-(void)placeViewControllerDidSelectOneReview:(id)arg1;
-(void)placeViewControllerDidSelectWriteAReview:(id)arg1;
-(void)placeViewControllerDidSelectMoreInfo:(id)arg1;
-(void)placeViewController:(id)arg1 didBecomeContact:(id)arg2;

@end

