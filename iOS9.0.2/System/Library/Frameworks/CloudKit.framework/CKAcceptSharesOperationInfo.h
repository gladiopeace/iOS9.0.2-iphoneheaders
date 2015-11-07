/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _shareURLsToAccept;

}

@property (nonatomic,retain) NSArray * shareURLsToAccept;              //@synthesize shareURLsToAccept=_shareURLsToAccept - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)shareURLsToAccept;
-(void)setShareURLsToAccept:(NSArray *)arg1 ;
@end

