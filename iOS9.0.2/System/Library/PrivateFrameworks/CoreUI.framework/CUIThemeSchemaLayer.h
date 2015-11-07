/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject {

	NSArray* _renditions;
	NSString* _name;
	unsigned _index;

}

@property (nonatomic,retain) NSArray * renditions;              //@synthesize renditions=_renditions - In the implementation block
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned index;                    //@synthesize index=_index - In the implementation block
+(id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned)arg3 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(void)calculateColumLefts:(id*)arg1 rowTops:(id*)arg2 totalSize:(CGSize*)arg3 forPartFeatures:(unsigned)arg4 ;
-(id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned)arg3 ;
-(float)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id*)arg2 ;
@end

