/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying> {

	char _original;
	char _markedForDelete;
	CPLResourceIdentity* _identity;
	NSDate* _lastAccessDate;

}

@property (nonatomic,readonly) CPLResourceIdentity * identity;                             //@synthesize identity=_identity - In the implementation block
@property (getter=isOriginal,nonatomic,readonly) char original;                            //@synthesize original=_original - In the implementation block
@property (getter=isMarkedForDelete,nonatomic,readonly) char markedForDelete;              //@synthesize markedForDelete=_markedForDelete - In the implementation block
@property (nonatomic,readonly) NSDate * lastAccessDate;                                    //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(char)isOriginal;
-(char)isMarkedForDelete;
-(NSDate *)lastAccessDate;
-(id)initWithIdentity:(id)arg1 original:(char)arg2 markedForDelete:(char)arg3 lastAccessDate:(id)arg4 ;
-(CPLResourceIdentity *)identity;
@end

