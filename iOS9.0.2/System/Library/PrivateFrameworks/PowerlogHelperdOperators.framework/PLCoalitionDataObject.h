/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSValue;

@interface PLCoalitionDataObject : NSObject {

	NSString* _bundleID;
	NSString* _launchdName;
	NSValue* _coalStruct;
	unsigned long long _coalitionID;

}

@property (retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSString * launchdName;                      //@synthesize launchdName=_launchdName - In the implementation block
@property (retain) NSValue * coalStruct;                        //@synthesize coalStruct=_coalStruct - In the implementation block
@property (assign) unsigned long long coalitionID;              //@synthesize coalitionID=_coalitionID - In the implementation block
-(NSString *)bundleID;
-(void)dealloc;
-(id)description;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)coalitionID;
-(NSString *)launchdName;
-(NSValue *)coalStruct;
-(void)setLaunchdName:(NSString *)arg1 ;
-(void)setCoalStruct:(NSValue *)arg1 ;
-(void)setCoalitionID:(unsigned long long)arg1 ;
@end

