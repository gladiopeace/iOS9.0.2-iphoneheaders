/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <MobileCoreServices/LSResourceProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {

	char _sourceIsManaged;
	NSString* _containerOwnerApplicationIdentifier;
	NSURL* _URL;
	NSString* _name;
	NSString* _typeIdentifier;
	NSString* _MIMEType;

}

@property (nonatomic,readonly) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * typeIdentifier;                                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * MIMEType;                                         //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) NSString * containerOwnerApplicationIdentifier;              //@synthesize containerOwnerApplicationIdentifier=_containerOwnerApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) char sourceIsManaged;                                        //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
+(char)supportsSecureCoding;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 ;
+(id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(char)arg4 ;
+(id)documentProxyForURL:(id)arg1 sourceIsManaged:(char)arg2 ;
-(CGSize)_defaultStyleSize:(id)arg1 ;
-(SCD_Struct_LS4*)_iconVariantDefinitions:(id)arg1 ;
-(id)iconStyleDomain;
-(id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 sourceIsManaged:(char)arg5 ;
-(void)bind;
-(char)isImageOrVideo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(id)uniqueIdentifier;
-(NSString *)typeIdentifier;
-(char)sourceIsManaged;
-(NSString *)containerOwnerApplicationIdentifier;
@end

