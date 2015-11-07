/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextSelectionRect.h>

@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect {

	WebSelectionRect* webRect;

}

@property (nonatomic,retain) WebSelectionRect * webRect; 
+(id)rectsWithWebRects:(id)arg1 ;
+(id)rectWithWebRect:(id)arg1 ;
-(void)dealloc;
-(WebSelectionRect *)webRect;
-(CGRect)rect;
-(id)range;
-(int)writingDirection;
-(char)containsStart;
-(char)containsEnd;
-(char)isVertical;
-(void)setWebRect:(WebSelectionRect *)arg1 ;
-(id)initWithWebRect:(id)arg1 ;
@end

