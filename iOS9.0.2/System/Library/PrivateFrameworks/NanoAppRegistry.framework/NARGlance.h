/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NARGlance : NSObject <NSSecureCoding> {

	NSString* _appID;
	NSString* _displayName;
	NSString* _glanceID;
	NSDictionary* _localizedDisplayNameMap;

}

@property (nonatomic,copy) NSString * appID;                                    //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * glanceID;                                 //@synthesize glanceID=_glanceID - In the implementation block
@property (nonatomic,copy) NSDictionary * localizedDisplayNameMap;              //@synthesize localizedDisplayNameMap=_localizedDisplayNameMap - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)displayName;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)glanceID;
-(NSDictionary *)localizedDisplayNameMap;
-(void)setGlanceID:(NSString *)arg1 ;
-(void)setLocalizedDisplayNameMap:(NSDictionary *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)appID;
@end

