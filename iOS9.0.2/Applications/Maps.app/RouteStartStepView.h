/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/TopBarTitleView.h>

@class MNRoute, NSString;

@interface RouteStartStepView : TopBarTitleView {

	unsigned _alternateRoutesCount;
	unsigned _selectedAlternateRouteIndex;
	MNRoute* _selectedRoute;
	NSString* _destinationName;

}

@property (assign,nonatomic) unsigned alternateRoutesCount;              //@synthesize alternateRoutesCount=_alternateRoutesCount - In the implementation block
@property (nonatomic,retain) NSString * destinationName;                 //@synthesize destinationName=_destinationName - In the implementation block
-(void)setAlternateRoutesCount:(unsigned)arg1 ;
-(void)setRoute:(id)arg1 withIndex:(unsigned)arg2 destinationName:(id)arg3 ;
-(unsigned)alternateRoutesCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
@end

