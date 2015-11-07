/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface _SFURLSpoofingMitigator : NSObject {

	NSDate* _dateOfStartOfLastProvisionalNavigation;
	unsigned _recentlyInterruptedNavigationCount;
	char _UIShouldReflectCommittedURLInsteadOfCurrentURL;

}

@property (nonatomic,readonly) char UIShouldReflectCommittedURLInsteadOfCurrentURL;              //@synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL - In the implementation block
+(char)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
-(char)UIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)didStartProvisionalNavigation;
-(void)didCommitNavigation;
-(void)didFailProvisionalNavigationWithError:(id)arg1 ;
-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(char)arg1 ;
@end

