/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface _UIInlineCandidateCell : UIView {

	NSString* _candidate;
	unsigned _index;
	UIFont* _font;
	CGSize _stringImageSize;
	char _highlighted;
	id _target;
	SEL _action;
	char _lastItem;
	char _dontDrawRightEdge;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(unsigned)index;
-(id)initWithCandidate:(id)arg1 andIndex:(unsigned)arg2 withFontSize:(float)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(CGSize)stringImageSize;
-(void)setLastItem:(char)arg1 ;
-(void)dontDrawRightEdge:(char)arg1 ;
@end

