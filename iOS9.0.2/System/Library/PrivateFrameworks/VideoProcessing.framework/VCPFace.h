/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPFace : NSObject {

	char _leftEyeClosed;
	char _rightEyeClosed;
	char _smile;
	CGRect _bounds;

}

@property (assign) CGRect bounds;                    //@synthesize bounds=_bounds - In the implementation block
@property (assign) char leftEyeClosed;               //@synthesize leftEyeClosed=_leftEyeClosed - In the implementation block
@property (assign) char rightEyeClosed;              //@synthesize rightEyeClosed=_rightEyeClosed - In the implementation block
@property (assign) char smile;                       //@synthesize smile=_smile - In the implementation block
-(char)leftEyeClosed;
-(char)rightEyeClosed;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSmile:(char)arg1 ;
-(char)smile;
-(void)setRightEyeClosed:(char)arg1 ;
-(void)setLeftEyeClosed:(char)arg1 ;
@end

