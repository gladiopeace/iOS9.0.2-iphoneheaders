/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITapGestureRecognizer.h>

@interface SBBannerTapGestureRecognizer : UITapGestureRecognizer {

	/*^block*/id _touchesBeganBlock;
	/*^block*/id _touchesEndedBlock;

}

@property (nonatomic,copy) id touchesBeganBlock;              //@synthesize touchesBeganBlock=_touchesBeganBlock - In the implementation block
@property (nonatomic,copy) id touchesEndedBlock;              //@synthesize touchesEndedBlock=_touchesEndedBlock - In the implementation block
-(void)setTouchesBeganBlock:(id)arg1 ;
-(void)setTouchesEndedBlock:(id)arg1 ;
-(id)touchesBeganBlock;
-(id)touchesEndedBlock;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end
