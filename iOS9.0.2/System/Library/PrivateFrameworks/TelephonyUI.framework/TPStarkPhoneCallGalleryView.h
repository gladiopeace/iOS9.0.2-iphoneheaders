/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/TPStarkPhoneCallContainerDataSource.h>
#import <libobjc.A.dylib/TPStarkPhoneCallContainerDelegate.h>

@protocol TPStarkPhoneCallGalleryViewDelegate;
@class TPStarkPhoneCallContainer, NSString;

@interface TPStarkPhoneCallGalleryView : UIView <TPStarkPhoneCallContainerDataSource, TPStarkPhoneCallContainerDelegate> {

	id<TPStarkPhoneCallGalleryViewDelegate> _delegate;
	TPStarkPhoneCallContainer* _container;

}

@property (assign) id<TPStarkPhoneCallGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPStarkPhoneCallContainer * container;                         //@synthesize container=_container - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)statusStringForDisplayForCall:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TPStarkPhoneCallGalleryViewDelegate>)arg1 ;
-(void)dealloc;
-(id<TPStarkPhoneCallGalleryViewDelegate>)delegate;
-(TPStarkPhoneCallContainer *)container;
-(void)setContainer:(TPStarkPhoneCallContainer *)arg1 ;
-(void)startListeningForCallNotifications;
-(void)stopListeningForCallNotifications;
-(void)phoneCallDataDidChange:(id)arg1 ;
-(id)primaryCalls;
-(id)phoneCallForIndex:(unsigned)arg1 isMerged:(char*)arg2 ;
-(id)mergedStringForMergedCalls;
-(id)mergedCalls;
-(unsigned)numberOfViewCellsForPhoneCallContainer:(id)arg1 ;
-(id)phoneCallContainer:(id)arg1 titleForViewCellAtIndex:(unsigned)arg2 ;
-(id)phoneCallContainer:(id)arg1 subtitleForViewCellAtIndex:(unsigned)arg2 ;
-(char)phoneCallContainer:(id)arg1 cellIsDimmedAtIndex:(unsigned)arg2 ;
-(void)phoneCallContainer:(id)arg1 phoneCallViewTappedAtIndex:(unsigned)arg2 ;
-(void)reloadPhoneCallData;
-(void)addPrimaryPhoneCall:(id)arg1 animated:(char)arg2 ;
-(void)mergePrimaryPhoneCallsAnimated:(char)arg1 ;
-(void)endPhoneCall:(id)arg1 animated:(char)arg2 ;
-(void)setIsShowingCallFailure:(char)arg1 ;
@end

