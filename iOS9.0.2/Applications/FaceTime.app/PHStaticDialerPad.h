/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <TelephonyUI/TPPhonePad.h>

@interface PHStaticDialerPad : TPPhonePad {

	int _dialerType;

}

@property (assign) int dialerType;              //@synthesize dialerType=_dialerType - In the implementation block
-(void)setDialerType:(int)arg1 ;
-(id)initWithDialerType:(int)arg1 ;
-(int)dialerType;
-(id)_highlightedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)canBecomeFocused;
-(CGSize)intrinsicContentSize;
-(id)_keypadImage;
-(float)_yFudge;
-(id)_pressedImage;
@end

