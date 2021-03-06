/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, NSUUID;

@interface MFSnapshotCacheItem : NSObject {

	char _updating;
	UIImage* _snapshotImage;
	NSUUID* _identifier;
	int _state;
	unsigned _decodedSize;

}

@property (nonatomic,retain) UIImage * snapshotImage;                      //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned decodedSize;                         //@synthesize decodedSize=_decodedSize - In the implementation block
@property (assign,getter=isUpdating,nonatomic) char updating;              //@synthesize updating=_updating - In the implementation block
-(void)setSnapshotImage:(UIImage *)arg1 ;
-(unsigned)decodedSize;
-(void)setDecodedSize:(unsigned)arg1 ;
-(void)setUpdating:(char)arg1 ;
-(char)isUpdating;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(UIImage *)snapshotImage;
@end

