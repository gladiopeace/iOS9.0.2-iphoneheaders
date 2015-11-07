/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSDictionary;

@interface IMNowPlayingContentLabel : UIView {

	NSString* _fullString;
	NSDictionary* _stringAttributes;
	CTFramesetterRef _framesetter;
	CTFrameRef _frame;
	char _highlighted;

}

@property (assign,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(id)stringAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setHighlighted:(char)arg1 ;
-(void)update;
-(char)highlighted;
@end

