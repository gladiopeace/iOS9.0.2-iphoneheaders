/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AEAssetSharingConnectionServer <NSObject>
@required
-(unsigned)bookSharingRequestNumberOfSelectedAnnotations:(id)arg1;
-(unsigned)bookSharingRequestNumberOfAnnotations:(id)arg1;
-(id)bookSharingRequestClient:(id)arg1 selectedAnnotationAtIndex:(unsigned)arg2;
-(int)assetSharingConnectionTypeForClient:(id)arg1;
-(void)beginAssetSharingConnectionWithClient:(id)arg1;
-(void)endAssetSharingConnectionWithClient:(id)arg1;
-(void)assetSharingConnectionClient:(id)arg1 performRequest:(int)arg2;
-(id)bookSharingRequestClient:(id)arg1 annotationAtIndex:(unsigned)arg2;

@end
