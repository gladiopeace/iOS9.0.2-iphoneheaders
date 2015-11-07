/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBLayoutElementViewController;

@interface SBAppResizeElementControllerCacheKey : NSObject <NSCopying> {

	SBLayoutElementViewController* _elementViewController;
	CGSize _elementViewSize;

}

@property (nonatomic,retain,readonly) SBLayoutElementViewController * elementViewController;              //@synthesize elementViewController=_elementViewController - In the implementation block
@property (nonatomic,readonly) CGSize elementViewSize;                                                    //@synthesize elementViewSize=_elementViewSize - In the implementation block
-(id)initWithLayoutElementViewController:(id)arg1 ;
-(SBLayoutElementViewController *)elementViewController;
-(CGSize)elementViewSize;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

