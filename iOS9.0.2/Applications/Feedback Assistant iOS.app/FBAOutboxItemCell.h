/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAInboxItemCell.h>

@class FBARadialProgressView, FBAFormResponse;

@interface FBAOutboxItemCell : FBAInboxItemCell {

	FBARadialProgressView* _progressView;
	FBAFormResponse* _observedResponse;

}

@property (assign,nonatomic,__weak) FBARadialProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) FBAFormResponse * observedResponse;                       //@synthesize observedResponse=_observedResponse - In the implementation block
-(void)updateUploadStage:(unsigned)arg1 ;
-(void)stopObservingResponse:(id)arg1 ;
-(void)beginObservingResponse:(id)arg1 ;
-(void)updateProgressWithFormResponse:(id)arg1 ;
-(void)setObservedResponse:(FBAFormResponse *)arg1 ;
-(FBAFormResponse *)observedResponse;
-(void)dealloc;
-(void)awakeFromNib;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressView:(FBARadialProgressView *)arg1 ;
-(FBARadialProgressView *)progressView;
@end

