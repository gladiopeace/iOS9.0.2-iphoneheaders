/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIViewTextProperties : NSObject <NSCopying> {

	float _baselineOffsetFromBottom;
	float _desiredOffsetTop;
	float _firstBaselineOffset;

}

@property (assign,nonatomic) float baselineOffsetFromBottom;              //@synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom - In the implementation block
@property (assign,nonatomic) float desiredOffsetTop;                      //@synthesize desiredOffsetTop=_desiredOffsetTop - In the implementation block
@property (assign,nonatomic) float firstBaselineOffset;                   //@synthesize firstBaselineOffset=_firstBaselineOffset - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)firstBaselineOffset;
-(float)baselineOffsetFromBottom;
-(float)desiredOffsetTop;
-(id)initWithStringLayout:(id)arg1 ;
-(void)setBaselineOffsetFromBottom:(float)arg1 ;
-(void)setFirstBaselineOffset:(float)arg1 ;
-(id)initWithTextLayout:(id)arg1 isExpanded:(char)arg2 ;
-(void)setDesiredOffsetTop:(float)arg1 ;
@end

