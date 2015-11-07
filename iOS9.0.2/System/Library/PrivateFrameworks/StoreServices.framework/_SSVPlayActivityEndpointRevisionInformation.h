/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet, NSString;

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _additionalPendingRevisionsIndexSet;
	NSString* _revisionVersionToken;
	unsigned long long _currentRevision;

}

@property (nonatomic,copy) NSIndexSet * additionalPendingRevisionsIndexSet;              //@synthesize additionalPendingRevisionsIndexSet=_additionalPendingRevisionsIndexSet - In the implementation block
@property (assign,nonatomic) unsigned long long currentRevision;                         //@synthesize currentRevision=_currentRevision - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                              //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
+(char)supportsSecureCoding;
-(unsigned long long)currentRevision;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexSet *)additionalPendingRevisionsIndexSet;
-(void)setCurrentRevision:(unsigned long long)arg1 ;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(NSString *)revisionVersionToken;
-(void)setAdditionalPendingRevisionsIndexSet:(NSIndexSet *)arg1 ;
@end

