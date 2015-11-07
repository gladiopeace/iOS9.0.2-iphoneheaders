/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMessageHeaders.h>

@class NSMutableDictionary, NSMutableArray;

@interface MFMutableMessageHeaders : MFMessageHeaders {

	NSMutableDictionary* _headersAdded;
	NSMutableArray* _headersRemoved;

}
-(id)firstHeaderForKey:(id)arg1 ;
-(id)allHeaderKeys;
-(void)setHeader:(id)arg1 forKey:(id)arg2 ;
-(void)removeHeaderForKey:(id)arg1 ;
-(id)encodedHeaders;
-(void)stripInternalHeaders;
-(void)setAddressListForTo:(id)arg1 ;
-(void)setAddressListForCc:(id)arg1 ;
-(void)setAddressListForBcc:(id)arg1 ;
-(void)setAddressListForSender:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)mutableCopy;
-(void)setAddressList:(id)arg1 forKey:(id)arg2 ;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned*)arg2 decoded:(char)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 ;
-(void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)mergeHeaders:(id)arg1 ;
-(char)hasHeaderForKey:(id)arg1 ;
-(id)headersDictionary;
-(void)setReferences:(id)arg1 ;
@end

