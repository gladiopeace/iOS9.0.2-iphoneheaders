/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFormsMetadataProvider.h>

@class NSArray, NSString;

@interface WBUFormsMetadataProviderWK1 : NSObject <WBSFormsMetadataProvider> {

	NSArray* _framesForAllForms;
	NSArray* _metadataForAllForms;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned formCount; 
+(id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
-(void)enumerateFormsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)formCount;
-(id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
@end
