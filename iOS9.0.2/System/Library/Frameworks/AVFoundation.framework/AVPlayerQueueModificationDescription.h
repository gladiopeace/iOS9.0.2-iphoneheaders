/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVPlayerItem;

@interface AVPlayerQueueModificationDescription : NSObject {

	int _modificationType;
	AVPlayerItem* _item;
	AVPlayerItem* _afterItem;

}

@property (nonatomic,readonly) int modificationType;                  //@synthesize modificationType=_modificationType - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * item;                   //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * afterItem;              //@synthesize afterItem=_afterItem - In the implementation block
+(id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2 ;
+(id)modificationForRemovingItem:(id)arg1 ;
-(int)modificationType;
-(AVPlayerItem *)afterItem;
-(id)initWithModificationType:(int)arg1 item:(id)arg2 afterItem:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(AVPlayerItem *)item;
@end

