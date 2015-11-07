/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DADAFilterData.h>
#import <Diagnostics/DADAScalarData.h>
#import <Diagnostics/DADAVectorData.h>

@interface DACompassData : NSObject <DADAFilterData, DADAScalarData, DADAVectorData> {

	float _x;
	float _y;
	float _z;
	double _timestamp;

}

@property (assign,x,nonatomic) float x;                     //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;                     //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) float z;                     //@synthesize z=_z - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)dataWithVectorDictionary:(id)arg1 ;
-(id)filterData;
-(id)scalarData;
-(id)vectorData;
-(id)init;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float)x;
-(void)setX:(float)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(float)z;
-(void)setZ:(float)arg1 ;
@end

