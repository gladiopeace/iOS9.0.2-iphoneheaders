/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IMBloomFilter, NSString;

@interface IMDocumentFragmentFilter : NSObject <NSCoding> {

	IMBloomFilter* _filter;
	SCD_Struct_IM32 _specification;

}

@property (readonly) NSString * usageDescription; 
-(int)indexSize;
-(NSString *)usageDescription;
-(id)initWithDocument:(id)arg1 filterSpecification:(SCD_Struct_IM33)arg2 ;
-(char)mightContainFragment:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

