/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface LabelSequenceView : UIView {

	NSArray* _stringDrawingInfoValues;

}

@property (nonatomic,retain) NSArray * stringDrawingInfoValues;              //@synthesize stringDrawingInfoValues=_stringDrawingInfoValues - In the implementation block
-(CGSize)requiredSize;
-(NSArray *)stringDrawingInfoValues;
-(void)setStringDrawingInfoValues:(NSArray *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
@end

