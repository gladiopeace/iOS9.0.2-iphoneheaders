/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSMapTable, ACAccountStore, ACAccountCredential, OAURLRequestSigner, NSString;

@interface MKMapItemMetadataRequester : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate> {

	NSURLSession* _session;
	NSMapTable* _requestsForURLs;
	NSMapTable* _tasksForURLs;
	NSMapTable* _dataForTasks;
	char _hasCheckedYelpAccountCredentials;
	ACAccountStore* _accountStore;
	ACAccountCredential* _yelpAccountCredentials;
	OAURLRequestSigner* _signer;

}

@property (nonatomic,readonly) OAURLRequestSigner * signer; 
@property (nonatomic,readonly) ACAccountCredential * yelpAccountCredentials; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(ACAccountCredential *)yelpAccountCredentials;
-(void)handleTask:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(void)sendRequest:(id)arg1 ;
-(void)cancelRequestsForMapItem:(id)arg1 ;
-(id)accountStore;
-(OAURLRequestSigner *)signer;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)accountStoreDidChange:(id)arg1 ;
@end

