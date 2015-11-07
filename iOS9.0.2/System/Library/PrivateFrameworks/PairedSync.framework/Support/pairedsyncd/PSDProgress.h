/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <pairedsyncd/pairedsyncd-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PSDProgress : NSObject <NSCoding, NSCopying> {

	float _activityProgress;
	unsigned _totalActivityCount;
	unsigned _completedActivityCount;

}

@property (assign,nonatomic) float activityProgress;                       //@synthesize activityProgress=_activityProgress - In the implementation block
@property (assign,nonatomic) unsigned totalActivityCount;                  //@synthesize totalActivityCount=_totalActivityCount - In the implementation block
@property (assign,nonatomic) unsigned completedActivityCount;              //@synthesize completedActivityCount=_completedActivityCount - In the implementation block
-(void)setTotalActivityCount:(unsigned)arg1 ;
-(unsigned)completedActivityCount;
-(void)setCompletedActivityCount:(unsigned)arg1 ;
-(unsigned)totalActivityCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActivityProgress:(float)arg1 ;
-(float)activityProgress;
@end

