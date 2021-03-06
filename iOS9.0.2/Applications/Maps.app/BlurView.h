/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIColor;

@interface BlurView : UIView {

	_UIBackdropView* _backdrop;
	char _blurDisabled;
	UIColor* _blurDisabledBackgroundColor;
	int _privateStyle;
	int _style;

}

@property (assign,nonatomic) int style;                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backdrop;              //@synthesize backdrop=_backdrop - In the implementation block
+(char)_isBlurDisabledButBackdropViewShownForDevice;
+(char)_isBlurDisabledViaDefaults;
-(char)_hasBackdrop;
-(void)_updateForStyleChange;
-(void)_removeBackDrop;
-(void)_configChanged;
-(void)_addBackDrop;
-(id)_backdropSettings;
-(void)_transitionToCurrentStyle;
-(void)setBlurDisabledBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(int)style;
-(void)didAddSubview:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)initWithPrivateStyle:(int)arg1 ;
-(void)transitionToStyle:(int)arg1 ;
-(void)transitionToPrivateStyle:(int)arg1 ;
-(_UIBackdropView *)backdrop;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(int)arg2 ;
@end

