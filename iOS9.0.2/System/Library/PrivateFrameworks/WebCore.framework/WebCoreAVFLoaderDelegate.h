/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class NSString;

@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	MediaPlayerPrivateAVFoundationObjC* m_callback;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(id)initWithCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
-(char)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2 ;
@end

