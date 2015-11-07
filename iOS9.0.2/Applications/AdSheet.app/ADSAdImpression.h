/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <AdSheet/ADKVCCopiedForwarding.h>

@class NSDictionary, NSMutableDictionary, NSArray, NSString, NSURL, WebArchive, UIColor, ADSAdAction, PKPass;

@interface ADSAdImpression : NSObject <ADKVCCopiedForwarding> {

	NSDictionary* _actionDictionary;
	NSMutableDictionary* _adData;
	NSArray* _actions;

}

@property (nonatomic,readonly) CFDictionaryRef internalAdData; 
@property (nonatomic,readonly) CFStringRef adIdentifier; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * humanReadableName; 
@property (nonatomic,readonly) NSArray * iTunesMetadata; 
@property (nonatomic,readonly) NSString * accessibilityDescription; 
@property (nonatomic,readonly) NSString * iAdJSVersion; 
@property (nonatomic,readonly) int adType; 
@property (nonatomic,readonly) char unbranded; 
@property (nonatomic,readonly) double bannerNewContentCandidacyThreshold; 
@property (nonatomic,readonly) double bannerImpressionThreshold; 
@property (nonatomic,readonly) NSString * audioURL; 
@property (nonatomic,readonly) NSArray * videoAsset; 
@property (nonatomic,readonly) NSString * slateImageURL; 
@property (nonatomic,readonly) NSString * logoImageURL; 
@property (nonatomic,readonly) NSString * headlineForLCD; 
@property (nonatomic,readonly) NSString * descriptionForLCD; 
@property (nonatomic,readonly) double skipThreshold; 
@property (nonatomic,readonly) NSString * targetAppBundleID; 
@property (nonatomic,readonly) NSString * targetAppURLScheme; 
@property (nonatomic,readonly) double minimumIntervalBetweenPresentations; 
@property (nonatomic,readonly) NSDictionary * merchant; 
@property (nonatomic,readonly) NSArray * nativeMetadata; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSURL * contentURL; 
@property (assign,nonatomic) CGPoint tapLocation; 
@property (assign,nonatomic) CGRect rectOnScreen; 
@property (nonatomic,retain) WebArchive * bannerWebArchive; 
@property (nonatomic,copy) NSString * bannerCustomMetadata; 
@property (assign,nonatomic) char activationClickNearAdViewEdge; 
@property (assign,nonatomic) double activationTime; 
@property (nonatomic,readonly) NSArray * rewardTokens; 
@property (nonatomic,readonly) NSURL * serverURL; 
@property (nonatomic,readonly) char nonCyclingAd; 
@property (nonatomic,readonly) char isExpired; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) UIColor * letterboxCreativeColor; 
@property (nonatomic,retain) ADSAdAction * selectedAction; 
@property (nonatomic,readonly) NSArray * actions;                                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSString * bannerContentHost; 
@property (nonatomic,retain) NSMutableDictionary * adData;                               //@synthesize adData=_adData - In the implementation block
@property (nonatomic,readonly) double expirationDate; 
@property (nonatomic,readonly) char downloadWebArchivesBeforeShowingBanner; 
@property (nonatomic,readonly) NSString * bannerURL; 
@property (nonatomic,readonly) NSString * bannerWebArchiveURL; 
@property (nonatomic,readonly) NSString * bannerQueryString; 
@property (nonatomic,readonly) NSString * iAdJSURL; 
@property (nonatomic,retain) PKPass * passbookPass; 
+(id)sharedDispatchQueue;
+(void)initialize;
-(void)setPassbookPass:(PKPass *)arg1 ;
-(PKPass *)passbookPass;
-(void)setIAdJSURL:(NSString *)arg1 ;
-(NSString *)iAdJSURL;
-(void)setBannerQueryString:(NSString *)arg1 ;
-(NSString *)bannerQueryString;
-(void)setBannerWebArchiveURL:(NSString *)arg1 ;
-(NSString *)bannerWebArchiveURL;
-(void)setBannerURL:(NSString *)arg1 ;
-(NSString *)bannerURL;
-(void)setDownloadWebArchivesBeforeShowingBanner:(char)arg1 ;
-(char)downloadWebArchivesBeforeShowingBanner;
-(void)setExpirationDate:(double)arg1 ;
-(double)expirationDate;
-(void)setActivationTime:(double)arg1 ;
-(double)activationTime;
-(void)setActivationClickNearAdViewEdge:(char)arg1 ;
-(char)activationClickNearAdViewEdge;
-(NSString *)bannerCustomMetadata;
-(void)setBannerWebArchive:(WebArchive *)arg1 ;
-(WebArchive *)bannerWebArchive;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setNativeMetadata:(NSArray *)arg1 ;
-(NSArray *)nativeMetadata;
-(void)setMerchant:(NSDictionary *)arg1 ;
-(NSDictionary *)merchant;
-(void)setTargetAppURLScheme:(NSString *)arg1 ;
-(NSString *)targetAppURLScheme;
-(void)setTargetAppBundleID:(NSString *)arg1 ;
-(NSString *)targetAppBundleID;
-(void)setSkipThreshold:(double)arg1 ;
-(void)setDescriptionForLCD:(NSString *)arg1 ;
-(NSString *)descriptionForLCD;
-(void)setHeadlineForLCD:(NSString *)arg1 ;
-(NSString *)headlineForLCD;
-(void)setLogoImageURL:(NSString *)arg1 ;
-(NSString *)logoImageURL;
-(void)setSlateImageURL:(NSString *)arg1 ;
-(NSString *)slateImageURL;
-(void)setVideoAsset:(NSArray *)arg1 ;
-(NSArray *)videoAsset;
-(void)setAudioURL:(NSString *)arg1 ;
-(NSString *)audioURL;
-(void)setBannerImpressionThreshold:(double)arg1 ;
-(double)bannerImpressionThreshold;
-(void)setBannerNewContentCandidacyThreshold:(double)arg1 ;
-(double)bannerNewContentCandidacyThreshold;
-(void)setUnbranded:(char)arg1 ;
-(char)unbranded;
-(void)setAdType:(int)arg1 ;
-(int)adType;
-(void)setIAdJSVersion:(NSString *)arg1 ;
-(NSString *)iAdJSVersion;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(NSString *)accessibilityDescription;
-(void)setITunesMetadata:(NSArray *)arg1 ;
-(NSArray *)iTunesMetadata;
-(void)setHumanReadableName:(NSString *)arg1 ;
-(NSString *)humanReadableName;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(CGPoint)tapLocation;
-(CGRect)rectOnScreen;
-(void)setBannerCustomMetadata:(NSString *)arg1 ;
-(void)setTapLocation:(CGPoint)arg1 ;
-(void)setRectOnScreen:(CGRect)arg1 ;
-(CFStringRef)adIdentifier;
-(NSArray *)rewardTokens;
-(id)copiedValueForKey:(id)arg1 ;
-(id)URLsToVerifyWithHeadRequests;
-(id)initWithAdData:(id)arg1 ;
-(CFDictionaryRef)internalAdData;
-(char)nonCyclingAd;
-(NSString *)bannerContentHost;
-(CGSize)creativeSizeForContainerSize:(CGSize)arg1 ;
-(UIColor *)letterboxCreativeColor;
-(char)bannerWebArchiveIsRequired;
-(char)validateBannerURLs;
-(void)setSelectedAction:(ADSAdAction *)arg1 ;
-(ADSAdAction *)selectedAction;
-(NSURL *)contentURL;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSArray *)actions;
-(double)skipThreshold;
-(double)minimumIntervalBetweenPresentations;
-(void)setAdData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)adData;
-(double)timeRemaining;
-(NSURL *)serverURL;
-(char)isExpired;
@end

