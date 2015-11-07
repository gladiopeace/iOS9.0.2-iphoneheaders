/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBApp : MBContainer

@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * bundleDir; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * plugins; 
@property (nonatomic,readonly) NSArray * containers; 
@property (nonatomic,readonly) char isPlaceholder; 
@property (nonatomic,readonly) char isSystemApp; 
+(id)appWithPropertyList:(id)arg1 ;
+(id)appWithBundleID:(id)arg1 ;
+(id)safeHarborWithPath:(id)arg1 ;
-(NSString *)bundleID;
-(NSArray *)containers;
-(id)domain;
-(NSString *)bundleVersion;
-(NSArray *)groups;
-(NSArray *)plugins;
-(NSDictionary *)entitlements;
-(NSString *)bundleDir;
-(id)placeholderInfoPlistRelativePath;
-(id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg1 relativePath:(id)arg2 ;
-(id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1 ;
-(void)setBundleDir:(NSString *)arg1 ;
-(NSString *)entitlementsRelativePath;
-(char)isSystemApp;
-(id)placeholderDomainWithCache:(id)arg1 ;
-(char)isPlaceholder;
@end

