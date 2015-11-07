/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {

	char _titleDidChange;
	char _keyAssetDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) id<PLAssetContainer> container; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> album; 
@property (nonatomic,readonly) char titleDidChange; 
@property (nonatomic,readonly) char keyAssetDidChange; 
+(id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3 ;
-(NSObject*<PLAlbumProtocol>)album;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)userInfo;
-(id<PLAssetContainer>)container;
-(void)_calculateDiffs;
-(id)assetContainer;
-(char)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(char)titleDidChange;
-(char)keyAssetDidChange;
-(char)hasDeletes;
-(id)_contentRelationshipName;
@end

