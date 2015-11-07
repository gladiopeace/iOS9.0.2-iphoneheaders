/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PLWarningHelper : NSObject {

	NSArray* __assets;
	NSArray* __additionalPhotoStreamAssets;
	NSString* __clientName;
	int __style;

}

@property (setter=_setAssets:,nonatomic,retain) NSArray * _assets;                                                        //@synthesize _assets=__assets - In the implementation block
@property (setter=_setAdditionalPhotoStreamAssets:,nonatomic,retain) NSArray * _additionalPhotoStreamAssets;              //@synthesize _additionalPhotoStreamAssets=__additionalPhotoStreamAssets - In the implementation block
@property (setter=_setClientName:,nonatomic,retain) NSString * _clientName;                                               //@synthesize _clientName=__clientName - In the implementation block
@property (assign,setter=_setStyle:,nonatomic) int _style;                                                                //@synthesize _style=__style - In the implementation block
+(id)allWarningMessageCombinations;
+(void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 clientName:(id)arg6 style:(int)arg7 ;
+(void)getAvalancheDeleteWarning:(id*)arg1 actualDeletionCount:(int*)arg2 forAssets:(id)arg3 ;
+(void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(int)arg7 ;
+(void)_getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forItemSuffix:(id)arg4 count:(unsigned)arg5 operation:(int)arg6 clientName:(id)arg7 ;
+(id)_usedElsewhereWarningTextForAssetCount:(int)arg1 inPhotoStreamCount:(int)arg2 iniPhotoCount:(int)arg3 inSomeAlbumCount:(int)arg4 affectedLocalAlbumsCount:(int)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(int)arg7 ;
+(void)getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 operation:(int)arg5 clientName:(id)arg6 ;
-(NSArray *)_assets;
-(void)dealloc;
-(int)_style;
-(void)_setStyle:(int)arg1 ;
-(void)_setAssets:(id)arg1 ;
-(void)_setAdditionalPhotoStreamAssets:(id)arg1 ;
-(void)_setClientName:(id)arg1 ;
-(void)_getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 ;
-(id)_cloudSharedWarningTextForAssets:(id)arg1 ;
-(NSArray *)_additionalPhotoStreamAssets;
-(id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(int)arg3 ;
-(NSString *)_clientName;
@end

