/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WeatherValidatorDelegate <NSObject>
@optional
-(void)didGeocodeLocation:(id)arg1;
-(void)didFailGeocodeWithError:(id)arg1;

@required
-(void)didFailWithError:(id)arg1;
-(void)didValidateLocation:(id)arg1;

@end

