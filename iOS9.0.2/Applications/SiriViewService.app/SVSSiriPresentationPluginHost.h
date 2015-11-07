/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface SVSSiriPresentationPluginHost : NSObject {

	char _loaded;
	NSURL* _URL;
	NSMutableDictionary* _bundleURLsByBundleIdentifier;

}

@property (getter=_URL,nonatomic,readonly) NSURL * URL;                                                                              //@synthesize URL=_URL - In the implementation block
@property (assign,setter=_setLoaded:,getter=_isLoaded,nonatomic) char loaded;                                                        //@synthesize loaded=_loaded - In the implementation block
@property (getter=_bundleURLsByBundleIdentifier,nonatomic,readonly) NSMutableDictionary * bundleURLsByBundleIdentifier;              //@synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier - In the implementation block
+(id)_defaultURL;
+(id)sharedSiriPresentationPluginHost;
-(id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1 ;
-(id)_bundleURLsByBundleIdentifier;
-(id)_cachedURLForBundleWithIdentifier:(id)arg1 ;
-(void)_rescanBundles;
-(id)_builtInPresentationWithIdentifier:(id)arg1 ;
-(id)_siriPresentationPluginBundleWithIdentifier:(id)arg1 ;
-(char)_isLoaded;
-(void)_loadFromPropertyListRepresentation:(id)arg1 ;
-(void)_setLoaded:(char)arg1 ;
-(id)presentationWithIdentifier:(id)arg1 ;
-(id)_URL;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)_save;
-(void)_load;
-(id)_propertyListRepresentation;
@end

