/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSLayoutAnchor : NSObject {

	id _item;
	int _attr;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	id _reserved5;

}
+(id)layoutAnchorWithItem:(id)arg1 attribute:(int)arg2 ;
-(int)attribute;
-(id)constraintEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3 ;
-(void)setAttribute:(int)arg1 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 ;
-(id)init;
-(id)item;
-(id)initWithItem:(id)arg1 attribute:(int)arg2 ;
-(id)constraintEqualToAnchor:(id)arg1 ;
-(id)constraintEqualToAnchor:(id)arg1 constant:(float)arg2 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 ;
-(void)setItem:(id)arg1 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(float)arg2 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(float)arg2 ;
@end
