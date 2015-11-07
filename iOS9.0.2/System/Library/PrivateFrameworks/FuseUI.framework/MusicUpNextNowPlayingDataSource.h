/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicUpNextCompositeDataSource.h>

@protocol MusicUpNextCompositeDataSourceDelegate;
@class MPUAVPlayer, MusicEntityViewHorizontalLockupContentDescriptor;

@interface MusicUpNextNowPlayingDataSource : MusicUpNextCompositeDataSource {

	char _hidesViews;
	MPUAVPlayer* _player;
	id<MusicUpNextCompositeDataSourceDelegate> _delegate;
	MusicEntityViewHorizontalLockupContentDescriptor* _horizontalLockupContentDescriptor;

}

@property (assign,nonatomic) char hidesViews;              //@synthesize hidesViews=_hidesViews - In the implementation block
-(void)setPlayer:(id)arg1 ;
-(id)player;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(unsigned)numberOfSections;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(Class)tableViewCellClass;
-(id)tableViewCellReuseIdentifier;
-(id)tableViewHeaderReusueIdentifier;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)horizontalLockupContentDescriptor;
-(id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2 ;
-(char)isNowPlayingDataSource;
-(void)invalidateSizes;
-(void)setHidesViews:(char)arg1 ;
-(char)hidesViews;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
@end

