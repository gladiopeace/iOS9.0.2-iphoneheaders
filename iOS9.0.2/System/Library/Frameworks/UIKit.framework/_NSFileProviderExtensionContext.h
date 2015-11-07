/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>
#import <libobjc.A.dylib/_NSFileProviderVendor.h>

@class NSFileProviderExtension;

@interface _NSFileProviderExtensionContext : NSExtensionContext <_NSFileProviderVendor> {

	NSFileProviderExtension* _principalInstance;

}

@property (assign,nonatomic) NSFileProviderExtension * principalInstance;              //@synthesize principalInstance=_principalInstance - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setPrincipalInstance:(NSFileProviderExtension *)arg1 ;
-(void)_performInitialSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)_providePlaceholderAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startProvidingItemAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_itemChangedAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stopProvidingItemAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_identifierForItemAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_URLForItemIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSFileProviderExtension *)principalInstance;
@end

