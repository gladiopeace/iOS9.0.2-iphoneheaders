/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>
#import <Sports/ACSportsScoreboardViewDelegate.h>

@protocol ACSportsMatchupViewDelegate;
@class ACSportsScoreboardView, ACSportsAttributionView, SAUIAppPunchOut, NSString;

@interface ACSportsMatchupView : UIView <ACSportsScoreboardViewDelegate> {

	ACSportsScoreboardView* _scoreboardView;
	ACSportsAttributionView* _attributionView;
	id<ACSportsMatchupViewDelegate> _delegate;
	SAUIAppPunchOut* _attributionPunchOut;
	SAUIAppPunchOut* _leagueAppPunchOut;

}

@property (assign,nonatomic,__weak) id<ACSportsMatchupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * attributionPunchOut;                        //@synthesize attributionPunchOut=_attributionPunchOut - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * leagueAppPunchOut;                          //@synthesize leagueAppPunchOut=_leagueAppPunchOut - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMatchup:(id)arg1 league:(id)arg2 ;
-(void)_updateAttributionViewForPunchOuts;
-(void)_attributionButtonTouched:(id)arg1 ;
-(void)prepareForAppearance;
-(id)_punchOut;
-(void)_leagueAppButtonTouched:(id)arg1 ;
-(void)scoreBoardViewWantsPunchOut:(id)arg1 ;
-(float)attributionLogoWidth;
-(void)configureDomainObjectView:(id)arg1 withDomainObject:(id)arg2 beforeDomainObject:(id)arg3 league:(id)arg4 index:(unsigned)arg5 ;
-(void)setDelegate:(id<ACSportsMatchupViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ACSportsMatchupViewDelegate>)delegate;
-(SAUIAppPunchOut *)attributionPunchOut;
-(void)setAttributionPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)leagueAppPunchOut;
-(void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

