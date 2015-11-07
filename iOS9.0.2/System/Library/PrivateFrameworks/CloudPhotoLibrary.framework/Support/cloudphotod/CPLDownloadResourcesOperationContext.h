/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitOperationContext.h>

@class NSMapTable, NSString;

@interface CPLDownloadResourcesOperationContext : NSObject <CPLCloudKitOperationContext> {

	NSMapTable* resourceToProgressMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)extendedStatusDescriptionStrings;
-(void)updateProgress:(double)arg1 forResource:(id)arg2 ;
-(void)recordCompletionForResource:(id)arg1 withError:(id)arg2 ;
-(void)addResource:(id)arg1 ;
@end

