/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImage.h>

@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage {

	XBApplicationSnapshot* _snapshot;
	int _interfaceOrientation;

}

@property (nonatomic,readonly) int interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(void)dealloc;
-(id)description;
-(int)interfaceOrientation;
-(id)initWithSnapshot:(id)arg1 interfaceOrientation:(int)arg2 ;
@end

