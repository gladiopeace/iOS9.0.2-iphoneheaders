/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTActionControllerDelegate;
@class NSObject, MTColorTheme, NSArray, MTActionSheetAction;

@interface MTActionController : NSObject {

	NSObject* _actionObject;
	MTColorTheme* _colorTheme;
	id<MTActionControllerDelegate> _delegate;
	NSArray* _availableActions;
	MTActionSheetAction* _moreAction;

}

@property (nonatomic,retain) NSObject * actionObject;                                     //@synthesize actionObject=_actionObject - In the implementation block
@property (nonatomic,retain) MTColorTheme * colorTheme;                                   //@synthesize colorTheme=_colorTheme - In the implementation block
@property (assign,nonatomic,__weak) id<MTActionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * availableActions;                                //@synthesize availableActions=_availableActions - In the implementation block
@property (nonatomic,retain) MTActionSheetAction * moreAction;                            //@synthesize moreAction=_moreAction - In the implementation block
+(id)createAllActions;
-(void)dismissActionSheetsAndPopovers;
-(void)updateActionSheetsAndPopovers;
-(void)setActionObject:(NSObject *)arg1 ;
-(id)presentAvailableActionsFromView:(id)arg1 ;
-(NSObject *)actionObject;
-(MTActionSheetAction *)moreAction;
-(void)setActionObject:(id)arg1 reloadActions:(char)arg2 ;
-(void)setMoreAction:(MTActionSheetAction *)arg1 ;
-(void)registerActions:(id)arg1 ;
-(void)reloadActions;
-(void)setDelegate:(id<MTActionControllerDelegate>)arg1 ;
-(id<MTActionControllerDelegate>)delegate;
-(void)prepareForReuse;
-(id)initWithDelegate:(id)arg1 ;
-(NSArray *)availableActions;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
@end

