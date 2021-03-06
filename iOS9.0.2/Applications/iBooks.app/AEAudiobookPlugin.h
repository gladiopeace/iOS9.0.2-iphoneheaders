/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AEPlugin.h>

@class AEAnnotationProvider, NSString;

@interface AEAudiobookPlugin : NSObject <AEPlugin> {

	AEAnnotationProvider* _sharedAnnotationProvider;

}

@property (nonatomic,retain) AEAnnotationProvider * sharedAnnotationProvider;              //@synthesize sharedAnnotationProvider=_sharedAnnotationProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)associatedAssetType;
+(id)mediaQueryFromAssetUrl:(id)arg1 ;
+(id)urlScheme;
-(id)associatedAssetType;
-(id)helperForURL:(id)arg1 withOptions:(id)arg2 ;
-(char)deleteAssetAtURL:(id)arg1 ;
-(AEAnnotationProvider *)sharedAnnotationProvider;
-(id)proofingHelperForMetadata:(id)arg1 ;
-(void)setSharedAnnotationProvider:(AEAnnotationProvider *)arg1 ;
-(id)supportedFileExtensions;
-(id)supportedUrlSchemes;
-(void)dealloc;
@end

