/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Frameworks/EscrowService.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSString, NSMutableURLRequest, NSNumber;

@interface LakituRequest : NSObject <NSURLSessionDelegate> {

	Class _responseClass;
	NSString* _urlString;

}

@property (readonly) NSMutableURLRequest * urlRequest; 
@property (readonly) Class responseClass;                           //@synthesize responseClass=_responseClass - In the implementation block
@property (readonly) NSNumber * protocolVersion; 
@property (copy) NSString * urlString;                              //@synthesize urlString=_urlString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)validateInput;
-(id)authorizationHeader;
-(id)sessionConfig;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)protectionSpace;
-(Class)responseClass;
-(NSNumber *)protocolVersion;
-(id)credential;
-(NSMutableURLRequest *)urlRequest;
-(id)bodyDictionary;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
@end

