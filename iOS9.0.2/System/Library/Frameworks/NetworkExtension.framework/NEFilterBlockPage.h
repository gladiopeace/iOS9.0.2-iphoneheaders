/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface NEFilterBlockPage : NSObject {

	NSString* _organization;
	NSURL* _pageTemplateURL;
	NSString* _userURL;
	NSString* _formActionURL;
	NSString* _unblockStyle;
	NSString* _remediationButtonText;

}

@property (readonly) NSURL * pageTemplateURL;                   //@synthesize pageTemplateURL=_pageTemplateURL - In the implementation block
@property (copy) NSString * userURL;                            //@synthesize userURL=_userURL - In the implementation block
@property (copy) NSString * formActionURL;                      //@synthesize formActionURL=_formActionURL - In the implementation block
@property (copy) NSString * organization; 
@property (copy) NSString * unblockStyle;                       //@synthesize unblockStyle=_unblockStyle - In the implementation block
@property (copy) NSString * remediationButtonText;              //@synthesize remediationButtonText=_remediationButtonText - In the implementation block
-(id)_blockPage;
-(id)_css;
-(NSURL *)pageTemplateURL;
-(NSString *)userURL;
-(void)setUserURL:(NSString *)arg1 ;
-(NSString *)formActionURL;
-(void)setFormActionURL:(NSString *)arg1 ;
-(NSString *)unblockStyle;
-(void)setUnblockStyle:(NSString *)arg1 ;
-(NSString *)remediationButtonText;
-(void)setRemediationButtonText:(NSString *)arg1 ;
-(id)init;
-(id)page;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
@end

