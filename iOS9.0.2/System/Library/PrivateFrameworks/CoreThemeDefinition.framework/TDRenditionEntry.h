/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSData, TDRenditionSpec;

@interface TDRenditionEntry : NSObject {

	renditionkeytoken* key;
	renditionkeytoken stackKey[16];
	const renditionkeyfmt* keyFormat;
	NSData* assetData;
	TDRenditionSpec* renditionSpec;

}

@property (nonatomic,retain,readonly) TDRenditionSpec * renditionSpec; 
@property (nonatomic,retain,readonly) NSData * assetData; 
-(void)dealloc;
-(int)compare:(id)arg1 ;
-(TDRenditionSpec *)renditionSpec;
-(id)initWithKey:(const renditionkeytoken*)arg1 keyFormat:(const renditionkeyfmt*)arg2 assetData:(id)arg3 renditionSpec:(id)arg4 ;
-(NSData *)assetData;
@end

