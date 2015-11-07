/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class _UILegibilitySettings;


@protocol SBFLegibilitySettingsProvider <NSObject>
@property (nonatomic,retain,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(_UILegibilitySettings *)legibilitySettings;

@end
