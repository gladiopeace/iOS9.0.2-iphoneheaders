/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VCPDCNExternalDetectedObject <NSObject>
@property (assign) int objectType; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint center; 
@required
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1;
-(void)setObjectType:(int)arg1;
-(int)objectType;

@end

