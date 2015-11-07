/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKHeaderWithUnderlineView.h>

@class GKBubbleSegmentedControl;

@interface GKBubbleSegmentedHeaderView : GKHeaderWithUnderlineView {

	GKBubbleSegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) GKBubbleSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(char)drawsUnderline;
-(GKBubbleSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(GKBubbleSegmentedControl *)arg1 ;
@end

