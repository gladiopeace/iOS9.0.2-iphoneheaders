/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable, UIView;

@interface StarkOverlayItem : NSObject <NSCopying> {

	NSMapTable* _targetActionPairs;
	UIView* _content;
	float _height;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) UIView * content;                  //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;              //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) float height;                      //@synthesize height=_height - In the implementation block
-(char)_contentsOfMapTable:(id)arg1 areEqualToContentsOfMapTable:(id)arg2 ;
-(void)sendTapActions;
-(char)isTappable;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(float)height;
-(void)removeTarget:(id)arg1 ;
-(UIView *)content;
-(void)setHeight:(float)arg1 ;
-(void)setContent:(UIView *)arg1 ;
@end

