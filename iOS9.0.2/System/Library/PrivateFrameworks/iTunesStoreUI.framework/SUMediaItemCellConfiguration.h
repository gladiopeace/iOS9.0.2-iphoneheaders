/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (nonatomic,readonly) CGSize artworkSize; 
@property (nonatomic,readonly) int mediaIconType; 
@property (nonatomic,readonly) char showContentRating; 
+(id)copyDefaultContext;
-(CGSize)artworkSize;
-(void)drawWithModifiers:(unsigned)arg1 ;
-(id)fontForLabelAtIndex:(unsigned)arg1 ;
-(float)alphaForImageAtIndex:(unsigned)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned)arg3 ;
-(float)alphaForLabelAtIndex:(unsigned)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned)arg3 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(id)initWithStringCount:(unsigned)arg1 imageCount:(unsigned)arg2 ;
-(id)copyImageDataProvider;
-(UIEdgeInsets)_ratingBorderInsets;
-(int)mediaIconType;
-(char)showContentRating;
@end

