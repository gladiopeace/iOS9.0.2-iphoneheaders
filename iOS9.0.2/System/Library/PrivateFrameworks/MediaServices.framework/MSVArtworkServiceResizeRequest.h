/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL, NSMutableArray;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest {

	char _overwriteExistingDestinations;
	NSURL* _sourceURL;
	NSMutableArray* _resizeDestinations;

}

@property (nonatomic,copy) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) char overwriteExistingDestinations;               //@synthesize overwriteExistingDestinations=_overwriteExistingDestinations - In the implementation block
@property (nonatomic,retain) NSMutableArray * resizeDestinations;              //@synthesize resizeDestinations=_resizeDestinations - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(char)overwriteExistingDestinations;
-(void)enumerateDestinationsUsingBlock:(/*^block*/id)arg1 ;
-(Class)operationClass;
-(NSMutableArray *)resizeDestinations;
-(void)setOverwriteExistingDestinations:(char)arg1 ;
-(void)setResizeDestinations:(NSMutableArray *)arg1 ;
-(id)initWithSourceURL:(id)arg1 ;
-(void)addDestinationWithSize:(CGSize)arg1 compressionQuality:(float)arg2 url:(id)arg3 ;
@end

