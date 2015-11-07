/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding> {

	float _destinationCompressionQuality;
	NSURL* _destinationURL;
	CGSize _destinationSize;

}

@property (nonatomic,readonly) CGSize destinationSize;                           //@synthesize destinationSize=_destinationSize - In the implementation block
@property (nonatomic,readonly) float destinationCompressionQuality;              //@synthesize destinationCompressionQuality=_destinationCompressionQuality - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                           //@synthesize destinationURL=_destinationURL - In the implementation block
+(char)supportsSecureCoding;
+(id)destinationWithSize:(CGSize)arg1 compressionQuality:(float)arg2 url:(id)arg3 ;
-(NSURL *)destinationURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CGSize)destinationSize;
-(float)destinationCompressionQuality;
-(id)initWithDestinationSize:(CGSize)arg1 destinationCompressionQuality:(float)arg2 destinationURL:(id)arg3 ;
@end

