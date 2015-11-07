/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface SiriGuideDomainModel : NSObject {

	NSString* _name;
	NSString* _tagPhrase;
	NSString* _displayIdentifier;
	NSString* _bundleIdentifier;
	NSMutableArray* _requiredApps;
	NSMutableArray* _requiredCapabilities;
	NSString* _sectionFilename;
	NSMutableArray* _sections;
	char _iconNeedsProcessing;
	NSString* _iconResourceName;
	NSString* _domainIdentifier;
	NSString* _iconPathIdentifier;

}

@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * tagPhrase;                        //@synthesize tagPhrase=_tagPhrase - In the implementation block
@property (nonatomic,retain) NSString * displayIdentifier;                //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,retain) NSString * iconResourceName;                 //@synthesize iconResourceName=_iconResourceName - In the implementation block
@property (assign,nonatomic) char iconNeedsProcessing;                    //@synthesize iconNeedsProcessing=_iconNeedsProcessing - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * requiredApps;                      //@synthesize requiredApps=_requiredApps - In the implementation block
@property (nonatomic,retain) NSArray * requiredCapabilities;              //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,retain) NSString * domainIdentifier;                 //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,retain) NSString * iconPathIdentifier;               //@synthesize iconPathIdentifier=_iconPathIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sectionFilename;                  //@synthesize sectionFilename=_sectionFilename - In the implementation block
-(void)setTagPhrase:(NSString *)arg1 ;
-(void)setIconPathIdentifier:(NSString *)arg1 ;
-(NSString *)iconPathIdentifier;
-(NSArray *)requiredApps;
-(NSString *)sectionFilename;
-(NSString *)tagPhrase;
-(void)setIconNeedsProcessing:(char)arg1 ;
-(void)setSectionFilename:(NSString *)arg1 ;
-(void)setRequiredApps:(NSArray *)arg1 ;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(NSString *)iconResourceName;
-(char)iconNeedsProcessing;
-(void)setIconResourceName:(NSString *)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSString *)displayIdentifier;
-(NSArray *)sections;
-(NSString *)domainIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(void)setDisplayIdentifier:(NSString *)arg1 ;
-(NSArray *)requiredCapabilities;
@end

