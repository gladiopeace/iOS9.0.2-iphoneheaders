/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMVideoCorruptor : NSObject
+(long)_getBoxInfoFromFile:(_sFILE*)arg1 ofSize:(long long)arg2 boxType:(unsigned*)arg3 boxSize:(long long*)arg4 ;
+(long)_findBox:(unsigned long)arg1 inFile:(_sFILE*)arg2 ofSize:(long long)arg3 boxSize:(long long*)arg4 ;
+(long)_corruptMethodFytpForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(long)_corruptMethodMdatForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(long)_corruptMethodMoovForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(char)corruptVideoFileAtURLWhenEnabled:(id)arg1 ;
@end

