/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier {

	CGPoint _GLPoint2DValue;
	CGPoint _proposedGLPoint2DValue;

}

@property (getter=LPoint2DValue,nonatomic,readonly) CGPoint GLPoint2DValue;              //@synthesize GLPoint2DValue=_GLPoint2DValue - In the implementation block
@property (assign,nonatomic) CGPoint proposedGLPoint2DValue;                             //@synthesize proposedGLPoint2DValue=_proposedGLPoint2DValue - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(CGPoint)GLPoint2DValue;
-(void)setProposedGLPoint2DValue:(CGPoint)arg1 ;
-(CGPoint)proposedGLPoint2DValue;
-(id)description;
@end

