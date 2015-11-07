/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelApplicationDataSource.h>

@protocol SBStarkSessionConfiguring;
@class NSDictionary, NSString;

@interface SBStarkIconModelApplicationDataSource : NSObject <SBIconModelApplicationDataSource> {

	id<SBStarkSessionConfiguring> _configuration;
	char _loadedCustomIconState;
	NSDictionary* _customIconState;

}

@property (nonatomic,copy) NSDictionary * customIconState;                                            //@synthesize customIconState=_customIconState - In the implementation block
@property (assign,getter=hasLoadedCustomIconState,nonatomic) char loadedCustomIconState;              //@synthesize loadedCustomIconState=_loadedCustomIconState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCustomIconOrder:(id)arg1 ;
+(id)persistedCustomIconOrderPath;
+(id)customIconOrder;
+(id)defaultIconOrder;
-(id)defaultIconState;
-(id)firstPageLeafIdentifiers;
-(char)hasLoadedCustomIconState;
-(void)setCustomIconState:(NSDictionary *)arg1 ;
-(void)setLoadedCustomIconState:(char)arg1 ;
-(void)_loadCustomIconStateIfNecessary;
-(NSDictionary *)customIconState;
-(void)resetCustomIconOrder;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)allApplications;
@end

