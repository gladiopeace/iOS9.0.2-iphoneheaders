/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/IKAppDocumentDelegate.h>

@protocol MPUExtrasLoadingViewDelegate;
@class IKAppDocument, NSDictionary, MPUExtrasActivityIndicator, NSString;

@interface MPUExtrasLoadingView : UIView <IKAppDocumentDelegate> {

	IKAppDocument* _document;
	NSDictionary* _options;
	MPUExtrasActivityIndicator* _activityIndicator;
	id<MPUExtrasLoadingViewDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelCountdownToVisibility;
-(id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(void)startCountdownToVisibilityWithInterval:(double)arg1 ;
-(void)_show;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
@end

