/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <InCallService/PHAbstractCallParticipantLabelView.h>

@class NSLayoutConstraint, UILabel, UIProgressIndicator, UIButton;

@interface PHMultipleCallParticipantLabelView : PHAbstractCallParticipantLabelView {

	NSLayoutConstraint* _participantMarqueeLabelRightConstraint;
	UILabel* _statusLabel;
	NSLayoutConstraint* _statusLabelRightConstraint;
	UIProgressIndicator* _progressSpinner;
	UIButton* _conferenceParticipantsButton;

}

@property (retain) NSLayoutConstraint * participantMarqueeLabelRightConstraint;              //@synthesize participantMarqueeLabelRightConstraint=_participantMarqueeLabelRightConstraint - In the implementation block
@property (retain) UILabel * statusLabel;                                                    //@synthesize statusLabel=_statusLabel - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelRightConstraint;                          //@synthesize statusLabelRightConstraint=_statusLabelRightConstraint - In the implementation block
@property (retain) UIProgressIndicator * progressSpinner;                                    //@synthesize progressSpinner=_progressSpinner - In the implementation block
@property (retain) UIButton * conferenceParticipantsButton;                                  //@synthesize conferenceParticipantsButton=_conferenceParticipantsButton - In the implementation block
-(void)setStatusLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setParticipantMarqueeLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIProgressIndicator *)progressSpinner;
-(NSLayoutConstraint *)participantMarqueeLabelRightConstraint;
-(void)setProgressSpinner:(UIProgressIndicator *)arg1 ;
-(void)setActivityState:(unsigned short)arg1 animated:(char)arg2 ;
-(float)labelAlphaValueForActivityState:(unsigned short)arg1 ;
-(void)setShowsActivitySpinner:(char)arg1 ;
-(void)setActivityState:(unsigned short)arg1 ;
-(void)setHidesLabel:(char)arg1 ;
-(UIButton *)conferenceParticipantsButton;
-(void)setConferenceParticipantsButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)statusLabelRightConstraint;
-(void)setLabelDescriptor:(id)arg1 ;
-(void)setShowsInfoButton:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)infoButtonTapped:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

