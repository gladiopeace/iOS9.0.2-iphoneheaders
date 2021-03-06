/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/NACRoutingController.h>

@protocol NACRoutingControllerDelegate;
@class NACAudioRoute, NSArray, MPAVRoutingController, NSString;

@interface NACRoutingControllerLocal : NSObject <MPAVRoutingControllerDelegate, NACRoutingController> {

	MPAVRoutingController* _routingController;
	NSString* _audioCategory;
	id<NACRoutingControllerDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NACAudioRoute * pickedRoute; 
@property (nonatomic,readonly) NSArray * availableAudioRoutes; 
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NACAudioRoute *)pickedRoute;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(id<NACRoutingControllerDelegate>)delegate;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
@end

