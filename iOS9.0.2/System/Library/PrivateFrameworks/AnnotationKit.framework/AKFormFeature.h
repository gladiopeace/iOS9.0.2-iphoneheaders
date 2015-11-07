/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AKPageController;

@interface AKFormFeature : NSObject <NSCopying> {

	AKPageController* _page;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                                 //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic,__weak) AKPageController * page;              //@synthesize page=_page - In the implementation block
+(id)featureWithRect:(CGRect)arg1 onPage:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(AKPageController *)page;
-(void)setPage:(AKPageController *)arg1 ;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 ;
@end

