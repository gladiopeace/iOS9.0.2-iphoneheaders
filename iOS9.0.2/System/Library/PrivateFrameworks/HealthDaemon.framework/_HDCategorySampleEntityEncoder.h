/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDEncoder.h>

@class HDEncoder;

@interface _HDCategorySampleEntityEncoder : HDEncoder {

	HDEncoder* _sampleEncoder;

}
-(void)finish;
-(id)initForHealthDaemon:(id)arg1 database:(id)arg2 ;
-(id)orderedProperties;
-(id)codableRepresentationOfEntity:(id)arg1 collection:(id)arg2 row:(HDSQLiteRowRef)arg3 ;
@end

