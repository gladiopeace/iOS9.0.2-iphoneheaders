/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WKWebView, NSString, _WKVisitedLinkProvider, _WKWebsiteDataStore, WKProcessPool, WKPreferences, WKUserContentController, WKWebsiteDataStore, WKWebViewContentProviderRegistry;

@interface WKWebViewConfiguration : NSObject <NSCopying> {

	LazyInitialized<WTF::RetainPtr<WKProcessPool> >* _processPool;
	LazyInitialized<WTF::RetainPtr<WKPreferences> >* _preferences;
	LazyInitialized<WTF::RetainPtr<WKUserContentController> >* _userContentController;
	LazyInitialized<WTF::RetainPtr<_WKVisitedLinkProvider> >* _visitedLinkProvider;
	LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore> >* _websiteDataStore;
	WeakObjCPtr<WKWebView> _relatedWebView;
	WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
	char _treatsSHA1SignedCertificatesAsInsecure;
	RetainPtr<NSString>* _groupIdentifier;
	LazyInitialized<WTF::RetainPtr<NSString> >* _applicationNameForUserAgent;
	LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry> >* _contentProviderRegistry;
	char _alwaysRunsAtForegroundPriority;
	char _suppressesIncrementalRendering;
	char _allowsAirPlayForMediaPlayback;
	char _allowsInlineMediaPlayback;
	char _requiresUserActionForMediaPlayback;
	char _allowsPictureInPictureMediaPlayback;
	int _selectionGranularity;

}

@property (assign,setter=_setRelatedWebView:,nonatomic,__weak) WKWebView * _relatedWebView; 
@property (setter=_setGroupIdentifier:,nonatomic,copy) NSString * _groupIdentifier; 
@property (setter=_setVisitedLinkProvider:,nonatomic,retain) _WKVisitedLinkProvider * _visitedLinkProvider; 
@property (setter=_setWebsiteDataStore:,nonatomic,retain) _WKWebsiteDataStore * _websiteDataStore; 
@property (assign,setter=_setAlternateWebViewForNavigationGestures:,nonatomic,__weak) WKWebView * _alternateWebViewForNavigationGestures; 
@property (assign,setter=_setTreatsSHA1SignedCertificatesAsInsecure:,nonatomic) char _treatsSHA1SignedCertificatesAsInsecure; 
@property (assign,setter=_setAlwaysRunsAtForegroundPriority:,nonatomic) char _alwaysRunsAtForegroundPriority; 
@property (assign,nonatomic) char mediaPlaybackRequiresUserAction; 
@property (assign,nonatomic) char mediaPlaybackAllowsAirPlay; 
@property (nonatomic,retain) WKProcessPool * processPool; 
@property (nonatomic,retain) WKPreferences * preferences; 
@property (nonatomic,retain) WKUserContentController * userContentController; 
@property (nonatomic,retain) WKWebsiteDataStore * websiteDataStore; 
@property (assign,nonatomic) char suppressesIncrementalRendering;                                                                                      //@synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering - In the implementation block
@property (nonatomic,copy) NSString * applicationNameForUserAgent; 
@property (assign,nonatomic) char allowsAirPlayForMediaPlayback;                                                                                       //@synthesize allowsAirPlayForMediaPlayback=_allowsAirPlayForMediaPlayback - In the implementation block
@property (assign,nonatomic) char allowsInlineMediaPlayback;                                                                                           //@synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback - In the implementation block
@property (assign,nonatomic) char requiresUserActionForMediaPlayback;                                                                                  //@synthesize requiresUserActionForMediaPlayback=_requiresUserActionForMediaPlayback - In the implementation block
@property (assign,nonatomic) int selectionGranularity;                                                                                                 //@synthesize selectionGranularity=_selectionGranularity - In the implementation block
@property (assign,nonatomic) char allowsPictureInPictureMediaPlayback;                                                                                 //@synthesize allowsPictureInPictureMediaPlayback=_allowsPictureInPictureMediaPlayback - In the implementation block
@property (assign,setter=_setContentProviderRegistry:,nonatomic) WKWebViewContentProviderRegistry * _contentProviderRegistry; 
-(void)_setGroupIdentifier:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreferences:(WKPreferences *)arg1 ;
-(int)selectionGranularity;
-(void)setSelectionGranularity:(int)arg1 ;
-(WKPreferences *)preferences;
-(void)setMediaPlaybackAllowsAirPlay:(char)arg1 ;
-(char)mediaPlaybackAllowsAirPlay;
-(char)suppressesIncrementalRendering;
-(void)setSuppressesIncrementalRendering:(char)arg1 ;
-(void)setAllowsInlineMediaPlayback:(char)arg1 ;
-(char)allowsInlineMediaPlayback;
-(void)setMediaPlaybackRequiresUserAction:(char)arg1 ;
-(char)mediaPlaybackRequiresUserAction;
-(void)setAllowsPictureInPictureMediaPlayback:(char)arg1 ;
-(char)allowsPictureInPictureMediaPlayback;
-(void)_validate;
-(_WKVisitedLinkProvider *)_visitedLinkProvider;
-(_WKWebsiteDataStore *)_websiteDataStore;
-(WKWebViewContentProviderRegistry *)_contentProviderRegistry;
-(void)_setRelatedWebView:(id)arg1 ;
-(WKWebView *)_relatedWebView;
-(WKWebsiteDataStore *)websiteDataStore;
-(char)_treatsSHA1SignedCertificatesAsInsecure;
-(NSString *)_groupIdentifier;
-(char)_alwaysRunsAtForegroundPriority;
-(char)requiresUserActionForMediaPlayback;
-(WKWebView *)_alternateWebViewForNavigationGestures;
-(void)setUserContentController:(WKUserContentController *)arg1 ;
-(void)_setVisitedLinkProvider:(id)arg1 ;
-(void)_setAlternateWebViewForNavigationGestures:(id)arg1 ;
-(void)_setContentProviderRegistry:(id)arg1 ;
-(void)_setWebsiteDataStore:(id)arg1 ;
-(void)setRequiresUserActionForMediaPlayback:(char)arg1 ;
-(void)_setTreatsSHA1SignedCertificatesAsInsecure:(char)arg1 ;
-(void)_setAlwaysRunsAtForegroundPriority:(char)arg1 ;
-(WKUserContentController *)userContentController;
-(NSString *)applicationNameForUserAgent;
-(void)setProcessPool:(WKProcessPool *)arg1 ;
-(void)setWebsiteDataStore:(WKWebsiteDataStore *)arg1 ;
-(WKProcessPool *)processPool;
-(char)allowsAirPlayForMediaPlayback;
-(void)setAllowsAirPlayForMediaPlayback:(char)arg1 ;
-(void)setApplicationNameForUserAgent:(NSString *)arg1 ;
@end

