/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sections;
	NSArray* _sectionIndexTitles;
	char _hasUnknownSection;

}

@property (nonatomic,copy,readonly) NSArray * sections;               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSArray * sectionIndexTitles; 
@property (assign,nonatomic) char hasUnknownSection;                  //@synthesize hasUnknownSection=_hasUnknownSection - In the implementation block
@property (nonatomic,readonly) unsigned count; 
+(char)supportsSecureCoding;
-(void)setSectionIndexTitles:(NSArray *)arg1 ;
-(unsigned)indexOfSectionForSectionIndexTitleAtIndex:(unsigned)arg1 ;
-(char)hasUnknownSection;
-(void)setHasUnknownSection:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)sectionIndexTitles;
-(NSArray *)sections;
@end

