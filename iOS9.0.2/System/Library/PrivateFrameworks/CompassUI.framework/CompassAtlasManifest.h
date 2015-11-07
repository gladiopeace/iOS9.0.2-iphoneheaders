/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassImageNode;

@interface CompassAtlasManifest : NSObject {

	CompassImageNode* _rootNode;
	map<std::__1::basic_string<char>, CGRect, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CGRect> > >* _items;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(CGRect)addItem:(id)arg1 size:(CGSize)arg2 ;
-(CGRect)boundsForItem:(id)arg1 ;
@end

