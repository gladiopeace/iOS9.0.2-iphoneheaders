/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MPAVItem, MPAVController, UIView;


@protocol MPControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain,readonly) UIView * view; 
@required
-(void)clearWeakReferencesToObject:(id)arg1;
-(void)setOrientation:(int)arg1 animate:(char)arg2;
-(void)noteIgnoredChangeTypes:(unsigned)arg1;
-(void)setPlayer:(id)arg1;
-(MPAVController *)player;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(UIView *)view;
-(MPAVItem *)item;
-(void)setOrientation:(int)arg1;
-(int)orientation;
-(void)setItem:(id)arg1;

@end

