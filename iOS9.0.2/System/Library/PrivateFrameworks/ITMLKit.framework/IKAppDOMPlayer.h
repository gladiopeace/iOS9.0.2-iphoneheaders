/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKJSPlayerAppBridge.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppPlayerDelegate;
@class NSString, IKAppContext;

@interface IKAppDOMPlayer : NSObject <IKJSPlayerAppBridge, IKDOMFeature> {

	NSString* _featureName;
	IKAppContext* _appContext;
	id<IKAppPlayerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IKAppPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                        //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                   //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)setDelegate:(id<IKAppPlayerDelegate>)arg1 ;
-(id<IKAppPlayerDelegate>)delegate;
-(id)currentAVMediaElementForPlayer:(id)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
@end

