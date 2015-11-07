/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, NSMutableSet, NSMutableDictionary;

@interface UIKeyboardSliceSet : NSObject {

	NSString* _ssid;
	NSMutableSet* _slices;
	CGRect _startRect;
	CGRect _endRect;
	float _leftWidth;
	float _rightWidth;
	float _mergePoint;
	NSMutableDictionary* _controlKeys;

}

@property (readonly) NSMutableSet * slices;                        //@synthesize slices=_slices - In the implementation block
@property (retain) NSString * sliceSetID;                          //@synthesize ssid=_ssid - In the implementation block
@property (assign) CGRect startRect;                               //@synthesize startRect=_startRect - In the implementation block
@property (assign) CGRect endRect;                                 //@synthesize endRect=_endRect - In the implementation block
@property (assign) float leftWidth;                                //@synthesize leftWidth=_leftWidth - In the implementation block
@property (assign) float rightWidth;                               //@synthesize rightWidth=_rightWidth - In the implementation block
@property (assign) float mergePoint;                               //@synthesize mergePoint=_mergePoint - In the implementation block
@property (assign) NSMutableDictionary * controlKeys;              //@synthesize controlKeys=_controlKeys - In the implementation block
+(id)sliceSetWithDictionaryRepresenation:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(CGRect)endRect;
-(NSString *)sliceSetID;
-(id)initWithSliceID:(id)arg1 ;
-(void)setStartRect:(CGRect)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(void)setLeftWidth:(float)arg1 ;
-(void)setRightWidth:(float)arg1 ;
-(void)addSlice:(id)arg1 ;
-(NSMutableSet *)slices;
-(void)setSliceSetID:(NSString *)arg1 ;
-(CGRect)startRect;
-(float)leftWidth;
-(float)rightWidth;
-(float)mergePoint;
-(void)setMergePoint:(float)arg1 ;
-(NSMutableDictionary *)controlKeys;
-(void)setControlKeys:(NSMutableDictionary *)arg1 ;
@end

