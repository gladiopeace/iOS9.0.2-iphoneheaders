/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSNumber, PLAccountingRange;


@protocol PLAccountingDependencyOwner <NSObject>
@property (nonatomic,retain) NSNumber * ID; 
@property (nonatomic,retain) PLAccountingRange * range; 
@required
-(PLAccountingRange *)range;
-(void)setRange:(id)arg1;
-(NSNumber *)ID;
-(void)setID:(id)arg1;

@end

