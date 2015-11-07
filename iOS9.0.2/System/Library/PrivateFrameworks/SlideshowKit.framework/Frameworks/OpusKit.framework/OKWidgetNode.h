/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKPresentationReadinessPrivate.h>
#import <libobjc.A.dylib/OKWidgetProtocol.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/JSOKWidgetNodeExport.h>
#import <libobjc.A.dylib/OKPresentationReadiness.h>

@protocol OKWidgetNodeDelegate;
@class OKPageViewController, NSMutableArray, NSArray, NSString, NSMutableDictionary, SCNNode, NSDictionary, OKWidgetSceneKitView, OFNSOperation, NSRecursiveLock, OKPresentationWidget, OKPhysicsBody, OKPhysicsField, OFUIView;

@interface OKWidgetNode : NSObject <OKCollectionProxyDataSource, OKActionResponderPrivate, OKPresentationReadinessPrivate, OKWidgetProtocol, OKSettingsSupport, JSOKWidgetNodeExport, OKPresentationReadiness> {

	NSMutableArray* _materials;
	char _needsApplySettings;
	char _hasSettingsApplied;
	NSArray* _particlesEmitters;
	NSArray* _contentEffects;
	char _hideUntilReady;
	char _userInteractionEnabled;
	CATransform3D _widgetTransform;
	CATransform3D _motionTransform;
	char _motionEnabled;
	char _motionTiltXEnabled;
	char _motionTiltYEnabled;
	char _motionTiltZEnabled;
	CGSize _motionXMinMax;
	CGSize _motionYMinMax;
	CGSize _motionZMinMax;
	CGPoint _motionXTiltAnchorPoint;
	CGPoint _motionYTiltAnchorPoint;
	CGPoint _motionZTiltAnchorPoint;
	char _motionXTiltReversed;
	char _motionYTiltReversed;
	char _motionZTiltReversed;
	NSString* _prepareActionScript;
	NSArray* _layoutSteps;
	NSMutableDictionary* _actionBindings;
	NSString* _canPerformActionScript;
	NSString* _c3dFile;
	SCNNode* _sceneLoaded;
	NSArray* _nodeNames;
	NSDictionary* _animationsPath;
	NSMutableDictionary* _animations;
	NSDictionary* _options;
	NSArray* _constraints;
	NSMutableArray* _subWidgetNodes;
	SCNNode* _node;
	OKPageViewController* _pageViewController;
	char _needsLoadRessources;
	char _isSettingOpacityManually;
	OKWidgetSceneKitView* _widgetSceneKitView;
	NSDictionary* _physicsShapeOptions;
	OFNSOperation* _applyOptionOperation;
	char _canStartCoachPatato;
	char _isReady;
	NSMutableArray* _readyNotificationBlocks;
	NSRecursiveLock* _readyRecursiveLock;
	OKPresentationWidget* _widget;
	OKWidgetNode* _parentWidgetNode;
	unsigned _presentationMode;
	unsigned _prepareMode;
	id<OKWidgetNodeDelegate> _delegate;
	OKPhysicsBody* _physicsBody;
	OKPhysicsField* _physicsField;
	OFUIView* actionView;
	SCNVector3 _visionVector;

}

@property (assign,nonatomic) OKWidgetNode * parentWidgetNode;                        //@synthesize parentWidgetNode=_parentWidgetNode - In the implementation block
@property (assign,nonatomic) id<OKWidgetNodeDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) OKPresentationWidget * widget;                          //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain,readonly) SCNNode * node;                                //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) unsigned prepareMode;                                 //@synthesize prepareMode=_prepareMode - In the implementation block
@property (nonatomic,readonly) unsigned presentationMode;                            //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,readonly) OKPhysicsBody * physicsBody;                          //@synthesize physicsBody=_physicsBody - In the implementation block
@property (nonatomic,readonly) OKPhysicsField * physicsField;                        //@synthesize physicsField=_physicsField - In the implementation block
@property (assign,nonatomic) OKWidgetSceneKitView * widgetSceneKitView; 
@property (nonatomic,retain,readonly) NSDictionary * actionBidings;                  //@synthesize actionBindings=_actionBindings - In the implementation block
@property (nonatomic,readonly) SCNVector3 visionVector;                              //@synthesize visionVector=_visionVector - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) OFUIView * actionView; 
@property (assign,nonatomic) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)proxyForNode:(id)arg1 ;
-(void)setDelegate:(id<OKWidgetNodeDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<OKWidgetNodeDelegate>)delegate;
-(id)name;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)commonInit;
-(char)prepareForDisplay;
-(SCNNode *)node;
-(id)initWithNode:(id)arg1 ;
-(OFUIView *)actionView;
-(char)canPerformAction:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)applyLayoutSettings;
-(void)setNeedsApplySettings;
-(unsigned)prepareMode;
-(void)applySettingsIfNeeded;
-(void)removeAllActionBindings;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(id)widgetNodesContainingActionBindings;
-(OKPresentationWidget *)widget;
-(id)widgetNodeForName:(id)arg1 recursively:(char)arg2 ;
-(void)sceneLoaded:(id)arg1 ;
-(void)updateMotion;
-(char)prepareForWarmup;
-(char)prepareForUnload;
-(void)removeFromParentNode;
-(void)prepareForReload;
-(void)setNeedsPrepare;
-(void)prepareForMode:(unsigned)arg1 ;
-(void)prepareForRefresh;
-(SCNVector3)convertPosition:(SCNVector3)arg1 fromNode:(id)arg2 ;
-(id)visibleSubWidgets;
-(unsigned)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(void)applySettings;
-(SCNVector3)settingPosition;
-(void)setSettingPosition:(SCNVector3)arg1 ;
-(SCNVector4)settingRotation;
-(void)setSettingRotation:(SCNVector4)arg1 ;
-(void)updateWithMotionTiltRotationX:(float)arg1 tiltRotationY:(float)arg2 tiltRotationZ:(float)arg3 ;
-(void)setWidgetSceneKitView:(OKWidgetSceneKitView *)arg1 ;
-(void)setParentWidgetNode:(OKWidgetNode *)arg1 ;
-(OKPageViewController *)pageViewController;
-(id)settingC3dFile;
-(void)setSettingC3dFile:(id)arg1 ;
-(id)settingOptions;
-(void)setSettingOptions:(id)arg1 ;
-(id)settingName;
-(SCNVector3)settingScale;
-(void)setSettingScale:(SCNVector3)arg1 ;
-(void)loadRessourcesIfNeeded;
-(OKWidgetSceneKitView *)widgetSceneKitView;
-(SCNVector3)convertPosition:(SCNVector3)arg1 toNode:(id)arg2 ;
-(void)unloadRessources;
-(SCNVector3)visionVector;
-(id)allActionBindings;
-(OKWidgetNode *)parentWidgetNode;
-(id)layoutSettingsKeys;
-(void)setupParticlesEmitter:(id)arg1 ;
-(void)setupConstraints:(id)arg1 ;
-(id)settingActionBindings;
-(void)removeActionBinding:(id)arg1 ;
-(void)addActionBinding:(id)arg1 scope:(unsigned)arg2 ;
-(OKPhysicsField *)physicsField;
-(void)playAnimationWithKey:(id)arg1 repeatAnimation:(char)arg2 removeOnCompletion:(char)arg3 ;
-(id)valueForKeyPath:(id)arg1 withJSValue:(id)arg2 ;
-(SCNVector3)convertScreenPoint:(SCNVector3)arg1 ;
-(void)updateTransforms;
-(char)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(char)interactivityEnabled;
-(void)setupFile;
-(void)setupOptions;
-(void)setupAnimations;
-(void)resetFile;
-(void)resetOption;
-(void)dispatchAction:(id)arg1 toTarget:(id)arg2 ;
-(char)isReady:(char)arg1 ;
-(char)supportsReadiness;
-(void)readinessDidChange:(char)arg1 ;
-(char)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(void)becomeReady;
-(void)resignReady;
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1 ;
-(float)readyProgress:(char)arg1 ;
-(void)removeAllReadyNotifications;
-(void)addSubWidgetNode:(id)arg1 ;
-(char)settingCanStartCoachPatato;
-(void)setSettingCanStartCoachPatato:(char)arg1 ;
-(void)setSettingHideUntilReady:(char)arg1 ;
-(void)setSettingUserInteractionEnabled:(char)arg1 ;
-(void)setSettingPrepareActionScript:(id)arg1 ;
-(void)setSettingCanPerformActionScript:(id)arg1 ;
-(void)setSettingActionBindings:(id)arg1 ;
-(id)settingContentFilters;
-(void)setSettingContentFilters:(id)arg1 ;
-(char)settingMotionEnabled;
-(void)setSettingMotionEnabled:(char)arg1 ;
-(char)settingMotionTiltXEnabled;
-(void)setSettingMotionTiltXEnabled:(char)arg1 ;
-(char)settingMotionTiltYEnabled;
-(void)setSettingMotionTiltYEnabled:(char)arg1 ;
-(char)settingMotionTiltZEnabled;
-(void)setSettingMotionTiltZEnabled:(char)arg1 ;
-(CGSize)settingMotionXMinMax;
-(void)setSettingMotionXMinMax:(CGSize)arg1 ;
-(CGSize)settingMotionYMinMax;
-(void)setSettingMotionYMinMax:(CGSize)arg1 ;
-(CGSize)settingMotionZMinMax;
-(void)setSettingMotionZMinMax:(CGSize)arg1 ;
-(CGPoint)settingMotionXTiltAnchorPoint;
-(void)setSettingMotionXTiltAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)settingMotionYTiltAnchorPoint;
-(void)setSettingMotionYTiltAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)settingMotionZTiltAnchorPoint;
-(void)setSettingMotionZTiltAnchorPoint:(CGPoint)arg1 ;
-(char)settingMotionXtiltReversed;
-(void)setSettingMotionXTiltReversed:(char)arg1 ;
-(char)settingMotionYTiltReversed;
-(void)setSettingMotionYTiltReversed:(char)arg1 ;
-(char)settingMotionZTiltReversed;
-(void)setSettingMotionZTiltReversed:(char)arg1 ;
-(void)setSettingWorldPosition:(SCNVector3)arg1 ;
-(SCNVector3)settingWorldPosition;
-(SCNVector3)settingVisionVector;
-(void)setSettingVisionVector:(SCNVector3)arg1 ;
-(SCNVector3)settingEulerAngles;
-(void)setSettingEulerAngles:(SCNVector3)arg1 ;
-(float)settingOpacity;
-(void)setSettingOpacity:(float)arg1 ;
-(char)settingHidden;
-(void)setSettingHidden:(char)arg1 ;
-(id)settingNodeNames;
-(void)setSettingNodeNames:(id)arg1 ;
-(void)setSettingAnimations:(id)arg1 ;
-(id)settingAnimations;
-(id)settingConstraints;
-(void)setSettingConstraints:(id)arg1 ;
-(id)settingPhysicsBody;
-(void)setSettingPhysicsBody:(id)arg1 ;
-(void)setSettingPhysicsShapeOptions:(id)arg1 ;
-(id)settingPhysicsField;
-(void)setSettingPhysicsField:(id)arg1 ;
-(void)setSettingParticlesEmitter:(id)arg1 ;
-(void)setWidget:(OKPresentationWidget *)arg1 ;
-(unsigned)presentationMode;
-(NSDictionary *)actionBidings;
-(OKPhysicsBody *)physicsBody;
@end

