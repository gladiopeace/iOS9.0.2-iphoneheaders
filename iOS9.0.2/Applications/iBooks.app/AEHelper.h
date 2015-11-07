/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class AEAnnotationProvider;


@protocol AEHelper <NSObject>
@property (nonatomic,readonly) AEAnnotationProvider * annotationProvider; 
@optional
-(void)setMetadata:(id)arg1 forKey:(id)arg2;
-(AEAnnotationProvider *)annotationProvider;
-(char)helperValidateBookAuthorizationWithError:(id*)arg1;
-(char)acknowledgeAnnotationProvider:(id)arg1 willMergeAnnotationsWithAssertVersionMismatch:(id)arg2 assetID:(id)arg3 assetURL:(id)arg4;
-(id)assetType;

@required
-(id)helperMetadataForKey:(id)arg1;
-(void)helperDeletePersistentCache;
-(id)helperCoverImage;
-(void)helperViewControllerWithOptions:(id)arg1 completion:(/*^block*/id)arg2;

@end

