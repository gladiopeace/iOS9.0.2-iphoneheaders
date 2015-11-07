/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UILayoutGuide, NSArray, UIView;

@interface RCAbstractViewLayout : NSObject {

	char _enabled;
	char _hidden;
	UILayoutGuide* _guide;
	NSArray* _views;
	float _horizontalContentMargin;
	UIView* _hostView;
	float _alpha;
	NSArray* _guideLayoutConstraints;

}

@property (nonatomic,readonly) UILayoutGuide * guide;                         //@synthesize guide=_guide - In the implementation block
@property (nonatomic,readonly) NSArray * views;                               //@synthesize views=_views - In the implementation block
@property (assign,nonatomic) float horizontalContentMargin;                   //@synthesize horizontalContentMargin=_horizontalContentMargin - In the implementation block
@property (nonatomic,readonly) UIView * hostView;                             //@synthesize hostView=_hostView - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden;                     //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) float alpha;                                     //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) NSArray * guideLayoutConstraints;              //@synthesize guideLayoutConstraints=_guideLayoutConstraints - In the implementation block
-(void)_performWithLoadedViews:(char)arg1 block:(/*^block*/id)arg2 ;
-(void)loadViewsIfNecessary;
-(void)loadGuideConstraintsIfNecessary;
-(NSArray *)guideLayoutConstraints;
-(void)setHorizontalContentMargin:(float)arg1 ;
-(void)insertIntoHostView:(id)arg1 ;
-(void)removeFromHostView;
-(UILayoutGuide *)guide;
-(float)horizontalContentMargin;
-(char)isHidden;
-(float)alpha;
-(void)setHidden:(char)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)prepareForReuse;
-(UIView *)hostView;
-(NSArray *)views;
@end

