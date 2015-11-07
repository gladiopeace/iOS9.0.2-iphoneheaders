/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding> {

	NSArray* _containerIDs;
	NSArray* _applicationBundleIDs;
	unsigned _enabledPermissions;

}

@property (nonatomic,retain) NSArray * containerIDs;                      //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,retain) NSArray * applicationBundleIDs;              //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) unsigned enabledPermissions;                 //@synthesize enabledPermissions=_enabledPermissions - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)enabledPermissions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)containerIDs;
-(id)CKPropertiesDescription;
-(NSArray *)applicationBundleIDs;
-(void)setApplicationBundleIDs:(NSArray *)arg1 ;
-(void)setEnabledPermissions:(unsigned)arg1 ;
-(void)setContainerIDs:(NSArray *)arg1 ;
@end

