/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RURadioAVItem.h>

@class NSString;

@interface RURadioTrackAVItem : RURadioAVItem {

	NSString* _assetFlavor;
	NSString* _preferredAssetFlavor;

}
+(id)_currentPreferredAssetFlavor;
-(void)loadAssetAndPlayerItem;
-(char)isValidPlayerSubstituteForItem:(id)arg1 ;
-(id)assetFlavor;
-(char)supportsRadioTrackActions;
-(id)_bestRadioTrackAssetWithPreferredAssetFlavor:(id)arg1 availableAssets:(id)arg2 ;
-(void)_saveDownloadKeyCookie:(id)arg1 forURL:(id)arg2 ;
-(id)_sinfsByRemovingEmptyPinfsFromSinfs:(id)arg1 ;
@end

