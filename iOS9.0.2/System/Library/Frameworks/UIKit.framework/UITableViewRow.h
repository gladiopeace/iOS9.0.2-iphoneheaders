/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {

	int _indentationLevel;
	UITableViewCell* _cell;
	float _height;

}

@property (assign,nonatomic) float height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
+(id)row;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIndentationLevel:(int)arg1 ;
-(int)indentationLevel;
-(float)height;
-(UITableViewCell *)cell;
-(void)setHeight:(float)arg1 ;
-(void)setCell:(UITableViewCell *)arg1 ;
@end

