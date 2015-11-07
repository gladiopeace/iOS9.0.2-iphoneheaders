/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <Foundation/NSOperation.h>

@class UIImage;

@interface BKPDFRenderingOperation : NSOperation {

	CGPDFPageRef _page;
	CGRect _rect;
	id _target;
	SEL _action;
	UIImage* _image;
	CGContextRef _context;

}

@property (assign,nonatomic) CGPDFPageRef page;                 //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) CGRect rect;                       //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) id target;                         //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGContextRef context;              //@synthesize context=_context - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(UIImage *)image;
-(id)target;
-(CGContextRef)context;
-(void)setAction:(SEL)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(void)setContext:(CGContextRef)arg1 ;
-(CGPDFPageRef)page;
-(void)setPage:(CGPDFPageRef)arg1 ;
-(void)main;
@end

