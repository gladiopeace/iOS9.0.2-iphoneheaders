/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AEAnnotation;
@class NSArray;

@interface AEHighlight : NSObject {

	NSArray* mLines;
	id<AEAnnotation> mAnnotation;
	char _vertical;

}

@property (nonatomic,copy) NSArray * lines; 
@property (nonatomic,retain) id<AEAnnotation> annotation; 
@property (assign,setter=setIsVertical:,nonatomic) char vertical;              //@synthesize vertical=_vertical - In the implementation block
-(void)setIsVertical:(char)arg1 ;
-(void)dealloc;
-(id<AEAnnotation>)annotation;
-(void)setAnnotation:(id<AEAnnotation>)arg1 ;
-(char)vertical;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
@end

