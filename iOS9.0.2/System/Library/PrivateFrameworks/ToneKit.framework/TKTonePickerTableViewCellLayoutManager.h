/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1 {

	float _minimumTextIndentation;

}

@property (assign,nonatomic) float minimumTextIndentation;              //@synthesize minimumTextIndentation=_minimumTextIndentation - In the implementation block
-(CGRect)textRectForCell:(id)arg1 rowWidth:(float)arg2 ;
-(CGRect)textRectForCell:(id)arg1 ;
-(void)setMinimumTextIndentation:(float)arg1 ;
-(float)minimumTextIndentation;
-(CGRect)_adjustedTextFrameWithOriginalTextFrame:(CGRect)arg1 forCell:(id)arg2 ;
@end

