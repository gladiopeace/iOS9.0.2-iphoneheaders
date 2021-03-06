/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PSUICellularUsageApp : NSObject {

	NSString* _bundleIdentifier;
	NSString* _displayName;
	double _totalBytesUsed;
	double _roamingBytesUsed;

}

@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) double totalBytesUsed;                    //@synthesize totalBytesUsed=_totalBytesUsed - In the implementation block
@property (assign,nonatomic) double roamingBytesUsed;                  //@synthesize roamingBytesUsed=_roamingBytesUsed - In the implementation block
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(double)totalBytesUsed;
-(void)setTotalBytesUsed:(double)arg1 ;
-(double)roamingBytesUsed;
-(void)setRoamingBytesUsed:(double)arg1 ;
@end

